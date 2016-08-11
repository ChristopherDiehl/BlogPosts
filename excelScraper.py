import time
import traceback
from socket import timeout
from bs4 import BeautifulSoup
import io
import requests
import sys

if len(sys.argv) != 3:
	print('[-] Url, File Name')

url = sys.argv[1]
file_name = sys.argv[2]

webpage = request.get(url)
soup = BeautifulSoup(webpage.content,'html5lib')

for p_tag in soup.fin_all('p'):
	
