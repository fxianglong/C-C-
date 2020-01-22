import urllib.request

req = urllib.request.Request("http://placekitten.com/g/1600/1600")
response = urllib.request.urlopen(req)
cat_img= response.read()

with open('cat_1600_1600.jpg','wb') as f:
    f.write(cat_img)
