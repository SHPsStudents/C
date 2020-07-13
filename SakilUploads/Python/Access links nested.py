import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl
link = list()

#Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter URL: ')
counts = input('Enter count: ')
pos = input('Enter Position: ')
counts = int(counts)
pos = int(pos)
count = 0

while (count <= counts):
    print('Retreiving: ',url)
    html = urllib.request.urlopen(url, context = ctx).read()
    soup = BeautifulSoup(html, 'html.parser')

    tags = soup('a')
    for tag in tags:
        link.append(tag.get('href'))
    url = link[pos-1]
    link = []
    count = count + 1
