import urllib.request
import os


def url_open(url):
    req = urllib.request.Request(url)
    req.add_header('User-Agent','Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.100 Safari/537.36')

    response = urllib.request.urlopen(url)
    html = response.read()
    return html
    
def get_page(url):
    html = url_open(url).decode('utf-8')
    
    a = html.find('<"title">随手拍 No.')+23
    b = html.find('<',a)
    
    return (html[a:b])
    
def find_imgs(url):
    html = url_open(url).decode('utf-8')
    img_addrs = []

    a = html.find('img src=')
    
    while a!=-1:
        b = html.find('.jpg',a,a+255)
        if b!=-1:
            img_addrs.append(html[a+9,b+4])
        else:
            b = a + 9
        a = html.find('img src',b)
    return img_addrs

def save_imgs(folder,img_addrs):
    for each in img_addrs:
        filname = each.split('/')[-1]
        with open(filename,'wb') as f:
            img = url_open(each)
            f.write(img)

def piaotu(folder='OOXX',pages = 10):
    os.mkdir(folder)
    os.chdir(folder)

    url = "http://jandan.net/t/"
    page_num = int(get_page(url))

    for i in range(pages):
        page_num -= i;
        page_url = url +'page-'+str(page_num)
        img_addrs = find_imgs(page_url)
        save_imgs(folder,img_addrs)
if __name__ == '__main__':
    piaotu()
