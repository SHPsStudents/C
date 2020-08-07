import urllib.request, urllib.parse, urllib.error
import json
import xml.etree.ElementTree as ET
import ssl

api_key = "1d963adff834c3509f1cdd7c7b15ef81"
serviceurl = "http://api.openweathermap.org/data/2.5/weather?"

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE


while True:
    city = input("Enter city name: ")
    if len(city) < 1: break

    parameters = dict()
    parameters['q'] = city
    parameters['appid'] = api_key

    url = serviceurl + urllib.parse.urlencode(parameters)

    print('Retreiving ',url)
    print('\n')
    hand = urllib.request.urlopen(url, context = ctx)
    data = hand.read().decode()

    js = json.loads(data)

    print("Co-ordinates: Latitude: ",js['coord']['lat'], "Longitude",js['coord']['lon'])
    print("Weather: ",js['weather'][0]['main'], ",Description: ",js['weather'][0]['description'].capitalize())
    print("Temp: ",js['main']['temp'], "Feels like: ",js['main']['feels_like'])
    print("Wind Speed: ",js['wind']['speed'], "Wind degree: ",js['wind']['deg'])
    print("Location: ",js['name'],",",js['sys']['country'])
