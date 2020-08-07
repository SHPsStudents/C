import urllib.request, urllib.parse, urllib.error
import json
import ssl
x = 0
sum = 0
#Ignore SSL certificates
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter location: ')
data = urllib.request.urlopen(url, context = ctx).read().decode()
print('Retreiving: ', url)

info = json.loads(data)

#print(json.dumps(info, indent = 4))

for items in info["comments"]:
    ct = info["comments"][x]["count"]
    ct = int(ct)
    x = x + 1
    sum = sum + ct
print('Count: ', x)
print('Sum: ', sum)
