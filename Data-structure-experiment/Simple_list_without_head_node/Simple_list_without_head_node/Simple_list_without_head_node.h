#ifndef __SIMPLE_LIST_WITHOUT_HEAD_NODE_H__
#define __SIMPLE_LIST_WITHOUT_HEAD_NODE_H__


#include"node.h"

//������ͷ���ļ�����������

template<class ElemType>
class NOHEAD
{
public:
	NOHEAD();//�޲������캯��
	virtual~NOHEAD();//��������
	int Length() const;//�����Ա�ĳ���
	bool Empty() const;//�ж����Ա��Ƿ�Ϊ��
	void Clear();//�����Ա����
	void Traverse(void(*Visit)(ElemType&));//�������Ա�
	StatusCode GetElem(int position, ElemType&e) const;//��ָ��λ��Ԫ��
	StatusCode SetElem(int position, const ElemType&e);//����ָ��λ�õ�Ԫ��ֵ
	StatusCode Delete(int position, ElemType&e);//ɾ��Ԫ��
	StatusCode Insert(int position, const ElemType&e);//����Ԫ��

private:
	Node<ElemType>*first;//ָ����Ԫ�ؽṹ��ָ��
	Node<ElemType>*GetElemptr(int position) const;//���ص�position���ڵ��ָ��
	void Init(); //��ʼ�������Ա�
};

template<class ElemType>
Node<ElemType>*NOHEAD<ElemType>::GetElemptr(int position) const
{
	Node<ElemType>* pt=first;
	int curposition = 1;//pt��ָ����λ��
	while (pt != NULL && curposition < position)
	{	pt = pt->next;
		curposition++;
	}

	if (pt != NULL && curposition == position)
	{
		return pt;
	}

	else
	{
		retuen NULL;
	}

}
template<class ElemType>
void NOHEAD<ElemType>::Init()
{
	first = NULL;
}



template<class ElemType>
NOHEAD<ElemType>::~NOHEAD()
{
	Clear();
}


template<class ElemType>
int NOHEAD<ElemType>::Length()const
{
	int count = 0;//��ʼ��ͳ��Ԫ�ظ���
	for (Node<ElemType>*pt = first; pt != NULL; pt = pt->next)//�����Ա��ÿ��Ԫ�ؽ��м���
	{
		count++;
	}
	return count;
}

template<class ElemType>
void NOHEAD<ElemType>::Clear()
{
	ElemType a;
	while (Length()>0)
	{
		Delete(1,a)
	}
}

template<class ElemType>
void NOHEAD<ElemType>::Traverse(void(*Visit)(ElemType &))
{
	for (Node<ElemType>*pt = first; pt != NULL; pt = pt->next)
	{
		(*Visit)(pt->data);
	}
}
template<class ElemType>
StatusCode NOHEAD<ElemType>::GetElem(int position, ElemType&e) const
{
	if (position<1 || position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{
		Node<ElemType>*pt;
		pt = GetElemptr(position);
		e = pt->date;
		return ENTRY_FOUND;
	}
}

template<class ElemType>
StatusCode NOHEAD<ElemType>::SetElem(int position, const ElemType&e)
{
	if (position<1 || position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{

		Node<ElemType>*pt;
		pt = GetElemptr(position);
		pt->date = e;
		return ENTRY_FOUND;
	}

}

template<class ElemType>
StatusCode NOHEAD<ElemType>::Delete(int position, ElemType&e)
{
	if (position<1 || position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{

		Node<ElemType>*pt;
		if (position > 1)//ɾ���ǵ�1��Ԫ��
		{
			pt = GetElemptr(position - 1);
			Node<ElemType>*pm = pt->next;
			pt->next = pm->next;
			e = pm->data;
			delete pm;
		}

		else//ɾ����1��Ԫ��
		{
			pt = first;//�ݴ�first
			first = first->next;//firstָ����
			delete pt;
		}

		return SUCCESS;
	}
}

template<class ElemType>
StatusCode NOHEAD<ElemType>::Insert(int position,const ElemType&e)
{
	if (position<1 || position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{

		Node<ElemType>*pm;//ָ�򱻲�����
		if (position > 1��//����Ԫ�ز��ǵ�1��Ԫ��
		{
			Node<ElemType>*pt = GetElemptr(position - 1);
			pt = GetElemptr(position - 1);
			pm =new Node<ElemType>(e,pt->next);
			pt->next = pm;
		}

		else//����Ԫ���ǵ�1��Ԫ��
		{
			pm = new Node<ElemType>(e,first);//�����½��
			first = pm;//pm���µĵ�1��Ԫ�صĽ��
			delete pt;
		}

		return SUCCESS;
	}
}

template<class ElemType>
NOHEAD<ElemType>::NOHEAD
{
	Init();
}





#endif
