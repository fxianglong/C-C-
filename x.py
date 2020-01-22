# 导入模块
import requests
# 设置翻页for循环
for m in range(1, 10):
	# 访问页面网址,并用字符串拼接的方式设置翻页变量
	url = "https://image.baidu.com/search/acjson?tn=resultjson_com&ipn=rj&ct=201326592&is=&fp=result&queryWord=动漫壁纸男生&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&word=动漫壁纸男生&s=&se=&tab=&width=&height=&face=&istype=&qc=&nc=&fr=&expermode=&force=&pn="+str(30*m)+"&rn=30&gsm=3c&1554037538933="
	# 模拟浏览器访问
	header = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:66.0) Gecko/20100101 Firefox/66.0"}
    html = requests.get(url, headers=header)
    # 判断是否访问成功,返回值为200
    print(html.status_code)
    # 批量提取网页
    for n in range(20):
    	# 获取图片html中的URL链接
    	url_URL = html.json()["data"][n]["thumbURL"]
    	# 创建用于图片命名的变量，html后20位字符。
    	url_name = html.json()["data"][n]["thumbURL"][-20:]
    	# 保存数据内容
    	data = requests.get(url_URL).content
    	print(url_name)
		# 写入本地存储,路径 双斜杠 \\
		with open("C:\\Users\\asus\\Desktop\\爬虫\\"+url_name,"wb") as f:
			f.write(data)