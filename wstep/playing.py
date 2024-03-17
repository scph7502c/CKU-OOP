import requests

from urllib.request import urlopen

from bs4 import BeautifulSoup

first_request = requests.get('https://www.damiantemimi.pl')
print(first_request)

#print(first_request.content)

url1 = 'https://www.damiantemimi.pl'
page = urlopen(url1)
print(page)
url2 = 'http://www.olympus.realpython.org/profiles/dionysus'
page2 = urlopen(url2)
html = page2.read().decode('utf-8')
soup = BeautifulSoup(html, 'html.praser')

print(soup.get_text())
