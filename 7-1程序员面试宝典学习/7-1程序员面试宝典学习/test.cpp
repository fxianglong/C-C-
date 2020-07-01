#include<iostream>
using namespace std;
class CMyString{
public:
	CMyString(char* pData = NULL);
	CMyString(const CMyString& str);
	~CMyString(void);
	CMyString operator=(const CMyString &str){
		if (this->m_pData != str.m_pData){
			//delete[]m_pData;
			//m_pData = NULL;
			//m_pData = new char[strlen(m_pData) + 1];
			//m_pData = str.m_pData;

			CMyString Temp(str);
			char* pTemp = Temp.m_pData;
			Temp.m_pData = m_pData;
			m_pData = pTemp;

		}
		return *this;
	}
private:
	char* m_pData;
};
