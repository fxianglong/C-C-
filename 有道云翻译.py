import urllib.request
import urllib.parse
import json

while 1:
    content = input("请输入要翻译的内容：")

    url = 'http://1fanyi.youdao.com/translate?smartresult=dict&smartresult=rule'

    data = {}
    data['type'] = 'AUTO'
    data['i'] =  content
    data['doctype'] = 'json'
    data['version'] = '1.6'
    keyfrom =  'fanyi.web'
    data['ue'] = 'UTF-8'
    data['typoResult'] = 'true'
    data = urllib.parse.urlencode(data).encode('utf-8')

    response = urllib.request.urlopen(url,data)
    html = response.read().decode('utf-8')


    target = json.loads(html)
    print("翻译结果：%s"%(target['translateResult'][0][0]['tgt']))
