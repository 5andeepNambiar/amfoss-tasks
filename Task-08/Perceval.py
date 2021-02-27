import os
import json 
import requests

repo_name = []
page = 1
flag = 1

while(flag!=0):
    request = requests.get('https://api.github.com/users/amfoss/repos?page='+str(page))
    page = page + 1
    json_file = request.json()
    if(len(json_file)==0):
        flag=0
        continue
    for i in range(len(json_file)):
        repo_name.append(json_file[i]['svn_url'])

for i in range(len(repo_name)):
    os.system('perceval git --json-line '+repo_name[i]+' >>commits.json')