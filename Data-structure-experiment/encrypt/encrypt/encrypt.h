#ifndef _ _ENCRYPT_H_ _
#define _ _ENCRYPT_H_ _

#include"string.h"
#include"lk_list.h"

class ENCRYPT
{
private:
	String letters;//��Сд��ĸ��
	String map;//��ĸӳ���
public:
	ENCRYPT();

	String Encode(const String &str);//���ؼ��ܺ���ı���
	String Decode(const String &str);//���ؽ��ܺ���ı���
};

ENCRYPT::ENCRYPT()
{
	letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map = "NgzQTCobmUHelkPdAwxfYIvrsJGnZqtcOBMuhELKpaDWXFyiVRjS";
}

String ENCRYPT::Encode(const String &str)
{
	LinkList<char>MO;//��ʱ�����������ڴ洢���ܺ���ļ���
	for (int i = 0; i < str.Length(); i++)
	{
		int pos;
		for ( pos = 0; pos < 52; pos++)
		{
			if (str[i] == letters[pos])
			{
				MO.Insert(MO.Length() + 1, map[pos]);
				break;
			}
		}
		if (pos == 52)
		{
			MO.Insert(MO.Length() + 1, str[i]);
		}
	}
	String result(MO);//���ɼ����ı���������
	return result;
}

String ENCRYPT::Decode(const String &str)
{
	LinkList<char>MO;//��ʱ�����������ڴ洢���ܺ���ļ���
	for (int i = 0; i < str.Length(); i++)
	{
		int pos;
		for (pos = 0; pos < 52; pos++)
		{
			if (str[i] == map[pos])
			{
				MO.Insert(MO.Length() + 1, letters[pos]);
				break;
			}
		}
		if (pos == 52)
		{
			MO.Insert(MO.Length() + 1, str[i]);
		}
	}
	String result(MO);
	return result;
}

#endif
