import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET

lnk = input('Enter location: ')
data = urllib.request.urlopen(lnk)
print('Retrieving ',lnk)

fdata = ""
total = int()

for line in data: #Converts bytes received from urllib and makes 1 string
    nline = line.decode()
    fdata = fdata + nline

refdata = ET.fromstring(fdata) #Refines XML and finds sum
lst = refdata.findall('comments/comment')
for comment in lst:
    sum = comment.find('count').text
    sum = int(sum)
    total = total + sum
print(total)
