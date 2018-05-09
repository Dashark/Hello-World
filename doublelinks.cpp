#include <conio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef DoubleLinkList_H
#define DoubleLinkList_H
using namespace std;
struct NodeType
{
	char name[20];
	char tel[20];
	int  age;
	int  index;
};
template< class NodeType > class Node;  
template< class NodeType > class DoubleLinkList; 
/***************************************************************/

template< class NodeType >
class Node															  //�����
{
	friend class DoubleLinkList< NodeType >;						  //��Ԫ��

	private :
		NodeType Data;												  //�������	
		Node< NodeType > *NextNode;									  //����ָ��
		Node< NodeType > *PreviousNode;								  //ǰ��ָ��
	public :
		void Show();
		Node();														  //Ĭ�Ϲ��캯��
		Node( NodeType &Value );									  //�������캯��				 
		~Node();												      //��������
};
/********************************************************/
template< class NodeType >
class DoubleLinkList												  //˫��������
{
	private :
	  Node< NodeType > *FirstNode;									  //�׽��
	  Node< NodeType > *RearNode;								      //β���
	public :
		DoubleLinkList();											  //Ĭ�Ϲ��캯��	
		~DoubleLinkList();										      //��������
		bool IsEmpty();		                                          //�ж������Ƿ�Ϊ��	
		Node< NodeType > *CreateNode( NodeType &Value);               //����һ���½��
		void AddNode(NodeType Value1);                                //���������
		void ShowForward();	                                      //��ǰ�������			
		void ShowBackwards();                                     //����������				 
		int LenghtOfDoubleLinkList();                                 //���������          
		void DelByName(char *Name);                                   //��������ɾ�����
		void DelByTel(char *Tel);									  //���ݵ绰ɾ�����
		void DelByIndex(int Index);                                   //�������ɾ�����
        bool SearchByTel(char *Tel);                                  //���ݺ����Ѱ
		bool SearchByIndex(int index);                                //������Ų�ѯ
		bool CompSearch(char *Name);                                   //ͨ�������
	    bool UpdataByName(char *Name);								  //���������޸Ľ��
	    bool UpdataByTel(char *Tel);	                              //���ݺ����޸�	
	    bool UpdataByIndex(int Index);                                //��������޸Ľ��
	    bool LoadFromFile(char *filename);                            //���ļ����������
		bool SaveToFile(char *filename);                              //�����ݱ��浽�ļ���
		
}; 
#endif
/*******************************************************/
int main()
{
	cout<<"\2017141461363 �����\n";
	int Index;
	char Tel[20];
	char Name1[20];
    char Filename[20];
	int Option,Option1,Option2,Option3,Option4;
	DoubleLinkList<NodeType> List;
	do
	{
		cout<<"\n\t �绰��                       "
			<<"\n\t 1������绰������                        "
			<<"\n\t 2�����ҵ绰�����ݣ�1����, 2���룬3��ţ� "
			<<"\n\t 3��ɾ���绰�����ݣ�1������2���룬3��ţ� "
			<<"\n\t 4���޸ĵ绰�����ݣ�1������2���룬3��ţ� "                            
			<<"\n\t 5������绰�����ݣ�1��ǰ����2�Ӻ���ǰ��"
			<<"\n\t 6�������ݴ洢���ļ�                      "
			<<"\n\t 7�����ļ��ж�ȡ����                      "
            <<"\n\t 0���˳�                                  "
            <<"\n���������ѡ��:";
		cin>>Option;
		switch(Option)
		{
		case 1:NodeType Value;
				cout<<"����������:��0�˳� ��";
				cin>>Value.name;
				while(strcmp(Value.name,"0")!=0)
				{
					cout<<"���������:";
					cin>>Value.tel;
					cout<<"����������:";
					cin>>Value.age;
					List.AddNode(Value);
					cout<<"\n����������:";
					cin>>Value.name;
				}
				break;

		case 2: cout<<"����;��.\n1.��������,\n2.���ݺ���,\n3.�������.\n��ѡ��";
				cin>>Option1;
				switch(Option1)
				{
					case 1:	cout<<"������������";
							cin>>Name1;
							List.CompSearch(Name1); break;
					case 2: cout<<"���������:";
							cin>>Tel;
							List.SearchByTel(Tel); break;
			    	case 3: cout<<"���������:";
						    cin>>Index;
						    List.SearchByIndex(Index); break;
					default : cout<<"����"; break;
				} break;
		case 3: cout<<"ɾ��;��.\n1.��������,\n2.���ݺ���,\n3.�������.\n��ѡ��";
				cin>>Option2;
				switch(Option2)
				{
					case 1:	cout<<"������������";
							cin>>Name1;
							List.DelByName(Name1); break;
					case 2: cout<<"���������:";
							cin>>Tel;
							List.DelByTel(Tel); break;
                    case 3: cout<<"���������:";
						    cin>>Index;
						    List.DelByIndex(Index); break;
					default : cout<<"����"; break;
				} break;
		case 4: cout<<"�޸ķ�ʽ.\n1.��������,\n2.���ݺ���,\n3.�������.\n��ѡ��:";
				cin>>Option3;
				switch(Option3)
					{
						case 1: cout<<"����������:";
								cin>>Name1;
 								List.UpdataByName(Name1); break;
						case 2: cout<<"���������:";
								cin>>Tel;
 								List.UpdataByTel(Tel); break;
						case 3: cout<<"���������:";
							    cin>>Index;
								List.UpdataByIndex(Index); break;
						default :cout<<"����"; break;
					} break;
		case 5: cout<<"�鿴��ʽ.\n1.��ǰ������,\n2.�Ӻ���ǰ���.\n��ѡ��";
			    cin>>Option4;
				switch(Option4)
				{
					case 1:cout<<"�������ݸ�����"<<List.LenghtOfDoubleLinkList()<<"\n";
						List.ShowForward(); break;
					case 2:cout<<"�������ݸ�����"<<List.LenghtOfDoubleLinkList()<<"\n";
						List.ShowBackwards(); break;
					default :cout<<"����"; break;
				} break;

		case 6: cout<<"�������ļ�;��:";
			    cin>>Filename;
				List.SaveToFile(Filename); break;
		case 7: cout<<"�������ļ�;��:";
			    cin>>Filename;
				List.LoadFromFile(Filename); break;
		case 0: break;
		default :Option=0; break;
		}
	}
	while(Option!=0);
	return 0;
}

/**********************************************************************/
template< class NodeType >//�������
 void Node< NodeType >::Show()
{
	cout<<Data.index<<"."<<Data.name<<" "<<Data.tel<<" "<<Data.age<<endl;
}
/**********************************************************************/
template< class NodeType >
Node< NodeType >::Node()
:Data( NULL ),NextNode( NULL ),PreviousNode( NULL ) {}
/**********************************************************************/
template< class NodeType >
Node< NodeType >::Node( NodeType &Value )
{
	strcpy(Data.name,Value.name);
	strcpy(Data.tel,Value.tel);
	Data.age=Value.age;
	Data.index=1;
	NextNode=NULL;
	PreviousNode=NULL;
}
/**********************************************************************/
template< class NodeType >
Node< NodeType >::~Node()
{
	cout<<"\n �ͷ��˽��.";
}
/**********************************************************************/
template< class NodeType >
DoubleLinkList< NodeType >::DoubleLinkList()
:FirstNode( NULL ),RearNode( NULL ) 
{}

/**********************************************************************/

template< class NodeType >
DoubleLinkList< NodeType >::~DoubleLinkList()
{
	Node< NodeType > *CurrentNode = FirstNode, *TempNode ;
	while( CurrentNode != NULL )
		{
		TempNode = CurrentNode;
		CurrentNode = CurrentNode->NextNode;
		TempNode->Show();
		delete TempNode;
		}
	cout<<"\n �ͷ���һ��˫������."
		<<"\n �����������!";
	getch();
}
/**********************************************************************/
template< class NodeType >
bool DoubleLinkList< NodeType >::IsEmpty()//�ж������Ƿ�Ϊ��
{
	if( FirstNode == NULL )
		return true;
	else
		return false;
}
/**********************************************************************/
template< class NodeType >
Node< NodeType > *DoubleLinkList< NodeType >::CreateNode( NodeType &Value )//����һ���½��,���ؽڵ�ָ��
{
	Node< NodeType > *NewNode = new Node< NodeType >( Value );
	assert( NewNode != NULL );
	return NewNode ;
}

/**********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::AddNode( NodeType Value )                      //��ӽ��
{
	Node< NodeType > *CurrentNode=FirstNode,*TempNode,*TEMPNode;
	Node< NodeType > *NewNode = CreateNode(Value);                              //�����������ɽڵ�
	
		if ( IsEmpty() )	                                                    //����Ϊ�գ��ڵ�ΪΨһ�ڵ�
		{	cout<<"\n ����ڿ������С�";                                      
			FirstNode = RearNode = NewNode;
		}                                                                       
		else
		{
			if(strcmp(FirstNode->Data.name,NewNode->Data.name)>0)				//�����ͷ���
			{
				FirstNode->PreviousNode = NewNode;                              //��ͷ�ڵ��ǰ��ָ����������
				NewNode->NextNode = FirstNode;                                  //�ڵ�ĺ���ָ����ͷ�ڵ���������
				FirstNode = NewNode;                                            //�½ڵ��Ϊͷ�ڵ�
				FirstNode->PreviousNode = NULL;                                 //ͷ�ڵ��ǰ��ָ��Ϊ��
				TEMPNode=FirstNode->NextNode;                                   //��ͷ�ڵ㸳����һ��ָ�룬�����޸����
				while(TEMPNode!=NULL)
					{
						(TEMPNode->Data.index)++;
						TEMPNode=TEMPNode->NextNode;
					}
			}
			else
			{
				while(strcmp(NewNode->Data.name,CurrentNode->Data.name)!=0&&CurrentNode->NextNode!=NULL)
						CurrentNode=CurrentNode->NextNode;
				if(CurrentNode->NextNode==NULL)									//�����β���
				{
					NewNode->PreviousNode = RearNode;                           //�����½ڵ��ǰ��ָ��		
					RearNode->NextNode = NewNode;                               //���ӽڵ�ĺ���ָ��
					NewNode->Data.index=(RearNode->Data.index)+1;               //�趨�½ڵ�����
					RearNode = NewNode;                                         //���½ڵ㸳ֵΪβ�ڵ�
					RearNode->NextNode = NULL;                                  //��β�ڵ�ĺ���ָ�븳Ϊ0
				}
				if(strcmp(NewNode->Data.name,CurrentNode->Data.name)<0)			//������м���
				{
					TempNode = CurrentNode;                                     //�ڵ���ڵ�ǰ�ڵ�֮ǰ
					NewNode->PreviousNode = CurrentNode->PreviousNode;          //�����½ڵ��ǰ��ָ��
					NewNode->NextNode = CurrentNode;                            //�����½ڵ�ĺ���ָ��
					CurrentNode = CurrentNode->PreviousNode;                    //��ǰ�ڵ�ָ���½ڵ��ǰ�ڵ�
					CurrentNode->NextNode = NewNode ;                           //�����½ڵ��ǰ�ڵ�ĺ���ָ��
					TempNode->PreviousNode = NewNode;                           //�����½ڵ��ڵ��ǰ��ָ��
					TEMPNode=NewNode;                                           //���½ڵ㸳ֵ����һ�ڵ�
					TEMPNode->Data.index=CurrentNode->Data.index;               //���½ڵ�֮�����±����
					while(TEMPNode!=NULL)
					{
						(TEMPNode->Data.index)++;
						TEMPNode=TEMPNode->NextNode;
					}	
				}
			}
		}
		cout<<"\n��ӳɹ�!";
		cout<<"\n��ӵĽ��Ϊ:\n";
		NewNode->Show();
}
/**********************************************************************/
template<class NodeType>
void DoubleLinkList<NodeType>::DelByName(char *Name)                            //��������ɾ��
{
	char choice;
	if( IsEmpty() )
		{
			cout<<"����Ϊ��,ɾ��ʧ��!"<<"\n�����������.";
			getch();
			return  ;
		}
	else
		{
			Node< NodeType > *CurrentNode = FirstNode,*TempNode=RearNode,*TEmpNode,*TEMPNode;
			if(strcmp(FirstNode->Data.name,Name)==0)							//ɾ��ͷ���
			{
					cout<<"ɾ���Ľ��Ϊ:";
					FirstNode->Show();                                          //չʾҪɾ���Ľڵ�
					cout<<"�Ƿ�ɾ��(YorN)";                                     //ѯ���Ƿ�ȷ��ɾ��
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					if( FirstNode == RearNode )                                 //������Ψһ�ڵ�
						FirstNode = RearNode = NULL;
					else
					{
						FirstNode = FirstNode->NextNode;                        //ͷ�ڵ����
						FirstNode->PreviousNode = NULL ;                        //�µ�ͷ�ڵ�ǰ��ָ�븳ֵΪ��
						TEMPNode=FirstNode;                                     //��ͷ�ڵ㸳ֵ���½ڵ�
						while(TEMPNode!=NULL)
						{
							(TEMPNode->Data.index)--;
							TEMPNode=TEMPNode->NextNode;
						}
					}
					delete CurrentNode;
					cout<<"\nɾ���ɹ�!";
					return ;
				}
				cout<<"\n�����������.";
				getch();
			}
			if(strcmp(RearNode->Data.name,Name)==0)							    //ɾ��β���
			{
					cout<<"ɾ���Ľ��Ϊ:";
					RearNode->Show();                                           //չʾҪɾ���Ľڵ�
					cout<<"�Ƿ�ɾ��(Y/N)";                                      //ѯ���Ƿ�ȷ��ɾ��
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					RearNode = RearNode->PreviousNode;                          //β�ڵ�ǰ��
					RearNode->NextNode = NULL;                                  //β�ڵ�ĺ���ָ�븳ֵ��
					delete TempNode;
					cout<<"\nɾ���ɹ�!";
					return  ;
				}
				cout<<"\n�����������.";
				getch();
			}
			else																//ɾ���м���
			{
				while(strcmp(CurrentNode->Data.name,Name)!=0&&CurrentNode->NextNode!=NULL)
					CurrentNode=CurrentNode->NextNode;
				if(CurrentNode->NextNode==NULL)
				{
					cout<<"ɾ���Ľ�㲻����!";
					return  ;
					cout<<"\n�����������.";
					getch();
				}
				else
				{
					cout<<"��ɾ���Ľ��Ϊ:";
					CurrentNode->Show();                                         //չʾҪɾ���Ľڵ�
					cout<<"�Ƿ�ɾ��(Y/N)";                                       //ѯ���Ƿ�ȷ��ɾ��
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						TempNode = CurrentNode ;                                 //TempNodeΪ��ɾ���Ľڵ�
						CurrentNode = CurrentNode->NextNode ;                    //��ɾ���ڵ�ĺ�ڵ�
						CurrentNode->PreviousNode = TempNode->PreviousNode ;     /*����ɾ���ڵ��ǰ�������ڵ�*/
						TEmpNode = TempNode->PreviousNode ;                      //��ɾ���ڵ��ǰ�ڵ�
						TEmpNode->NextNode = CurrentNode ;                       //����ǰ�ڵ�ĺ���ָ��
						while(CurrentNode!=NULL)
						{
							(CurrentNode->Data.index)--;
							CurrentNode=CurrentNode->NextNode;
						}
						delete TempNode;
					}
					cout<<"\nɾ���ɹ�!"<<"\n�����������.";
					getch();
					return ;
				}
			}
	}
}

/**********************************************************************/
template< class NodeType >
void DoubleLinkList<NodeType>::DelByTel(char *Tel)//���ݺ���ɾ��(ͬ��)
{
	char choice;
	if( IsEmpty() )
		{
			cout<<"����Ϊ��,ɾ��ʧ��!"<<"\n�����������.";
			getch();
			return  ;
		}
	else
		{
			Node< NodeType > *CurrentNode = FirstNode,*TempNode=RearNode,*TEmpNode,*TEMpNode;
			if (strcmp(FirstNode->Data.tel,Tel)==0)										
			{
					cout<<"ɾ���Ľ��Ϊ:";
					FirstNode->Show();
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					if( FirstNode == RearNode )
						FirstNode = RearNode = NULL;
					else
					{
						FirstNode = FirstNode->NextNode;
						FirstNode->PreviousNode = NULL ;
						TEMpNode=FirstNode;
						while(TEMpNode!=NULL)
						{
							(TEMpNode->Data.index)--;
							TEMpNode=TEMpNode->NextNode;
						}
					}
				delete CurrentNode;
				cout<<"\nɾ���ɹ�!";
				return  ;
				}
				cout<<"\n�����������.";
				cout<<endl;
				getch();
			}
			if(strcmp(RearNode->Data.tel,Tel)==0)										
			{
					cout<<"ɾ���Ľ��Ϊ:";
					RearNode->Show();	
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					RearNode = RearNode->PreviousNode;
					RearNode->NextNode = NULL;
					delete TempNode;
					cout<<"\nɾ���ɹ�!";
					return ;
				}
				cout<<"\n�����������.";
				getch();
			}
			else															
			{
				while(strcmp(CurrentNode->Data.tel,Tel)!=0&&CurrentNode->NextNode)
					CurrentNode=CurrentNode->NextNode;
				if(CurrentNode->NextNode==NULL)
				{
					cout<<"ɾ���Ľ�㲻����!";
					return ;
					cout<<"\n�����������.";
					getch();
				}
				else
				{
					cout<<"ɾ���Ľ��Ϊ:";
					CurrentNode->Show();
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						while(CurrentNode!=NULL)
						{
							(CurrentNode->Data.index)--;
							CurrentNode=CurrentNode->NextNode;
						}
						delete TempNode;
					}
					cout<<"\nɾ���ɹ�!"<<"\n�����������.";
					getch();
					return ;
				}
			}
	}
}

/**********************************************************************/
template< class NodeType >
void DoubleLinkList<NodeType>::DelByIndex(int Index)//�������ɾ����ͬ�ϣ� 
{
	char choice;
	if( IsEmpty() )
		{
			cout<<"����Ϊ��,ɾ��ʧ��!"<<"\n�����������.";
			getch();
			return ;
		}
	else
		{
			Node< NodeType > *CurrentNode = FirstNode,*TempNode=RearNode,*TEmpNode,*TEMpNode;
			if (FirstNode->Data.index==Index)										
			{
					cout<<"ɾ���Ľ��Ϊ:";
					FirstNode->Show();
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					if( FirstNode == RearNode )
						FirstNode = RearNode = NULL;
					else
					{
						FirstNode = FirstNode->NextNode;
						FirstNode->PreviousNode = NULL ;
						TEMpNode=FirstNode;
						while(TEMpNode!=NULL)
						{
							(TEMpNode->Data.index)--;
							TEMpNode=TEMpNode->NextNode;
						}
					}
				delete CurrentNode;
				cout<<"\nɾ���ɹ�!";
				return ;
				}
				cout<<"\n�����������.";
				cout<<endl;
				getch();
			}
			if(RearNode->Data.index==Index)										
			{
					cout<<"ɾ���Ľ��Ϊ:";
					RearNode->Show();	
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
				if(choice=='Y'||choice=='y')
				{
					RearNode = RearNode->PreviousNode;
					RearNode->NextNode = NULL;
					delete TempNode;
					cout<<"\nɾ���ɹ�!";
					return ;
				}
				cout<<"\n�����������.";
				getch();
			}
			else															
			{
				while(CurrentNode->Data.index==Index&&CurrentNode->NextNode)
					CurrentNode=CurrentNode->NextNode;
				if(CurrentNode->NextNode==NULL)
				{
					cout<<"ɾ���Ľ�㲻����!";
					return ;
					cout<<"\n�����������.";
					getch();
				}
				else
				{
					cout<<"ɾ���Ľ��Ϊ:";
					CurrentNode->Show();
					cout<<"�Ƿ�ɾ��(Y/N)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						while(CurrentNode!=NULL)
						{
							(CurrentNode->Data.index)--;
							CurrentNode=CurrentNode->NextNode;
						}
						delete TempNode;
					}
					cout<<"\nɾ���ɹ�!"<<"\n�����������.";
					getch();
					return ;
				}
			}
	}
}
/**********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::ShowForward()                     //��ǰ�������
{
	Node< NodeType > *CurrentNode = FirstNode ;
	cout<<"\n ��������:\n";
	if(CurrentNode == NULL) cout<<"����Ϊ��!";
	else{
		while ( CurrentNode != NULL)
		{
			CurrentNode->Show();
			CurrentNode = CurrentNode->NextNode;
		}
	cout<<"\n �����������.";
	getch();
	}
}
/**********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::ShowBackwards()                   //����������
{
	Node< NodeType > *CurrentNode = RearNode ;
	cout<<"\n ��������:\n";
	while ( CurrentNode != NULL)
	{   CurrentNode->Show();
		CurrentNode = CurrentNode->PreviousNode;
	}

	cout<<"\n �����������.";
	getch();
}
/**********************************************************************/
template< class NodeType >
int DoubleLinkList< NodeType >::LenghtOfDoubleLinkList()               //��������� 
{
	int NosOfNodes = 0 ;
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
		NosOfNodes++;
		CurrentNode = CurrentNode->NextNode;
		}
	return NosOfNodes;
}



/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::CompSearch(char *Name)       //ͨ�����ѯ
{
	int i,j=0,k=0;
	Node< NodeType > *CurrentNode=FirstNode;
	for(i=0;i<strlen(Name);i++)                            //����ѭ���㷨������ÿһ���ַ�
		if(Name[i]=='?') break;              //�ҵ�������
	if(Name[i]!='?') 
	{
		{while(strcmp(CurrentNode->Data.name,Name)!=0&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;}
		if(strcmp(CurrentNode->Data.name,Name)==0)
		{	
		cout<<"���ҵĽ��Ϊ:";
		CurrentNode->Show();	
		cout<<"�����������.";
		getch();
		}
		else
		{cout<<"���ҵĽ�㲻����!"<<endl;}
	}
	
	if(Name[i]=='?')
	{
		while(CurrentNode!=NULL)
		{
			int j=0;
			while((Name[j]=='?'||CurrentNode->Data.name[j]==Name[j])&&CurrentNode->Data.name[j])
				j++;                                       //ƥ����У����ַ���ԭ�ַ���
			if(j==strlen(CurrentNode->Data.name))
			{
				cout<<"���ҵĽ��Ϊ:\n";
				CurrentNode->Show();
				k++;
			}
			CurrentNode=CurrentNode->NextNode;	
		}
		if(k) return true;
		else return false;
	} 
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::SearchByTel(char *Tel)      //���ݺ����ѯ
{
	Node< NodeType > *CurrentNode=FirstNode;
	while(strcmp(CurrentNode->Data.tel,Tel)!=0&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;
	if(strcmp(CurrentNode->Data.tel,Tel)==0)
	{
		cout<<"���ҵĽ��Ϊ:";
		CurrentNode->Show();
		return true;
	}
	else
	{
		cout<<"���ҽ�㲻����!"<<endl;
		return false;
	}
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::SearchByIndex(int Index)     //������Ų�ѯ
{
	Node< NodeType > *CurrentNode=FirstNode;
	while(CurrentNode->Data.index!=Index&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;
	if(CurrentNode->Data.index==Index)
	{
		cout<<"���ҵĽ��Ϊ:";
		CurrentNode->Show();
		return true;
	}
	else
	{
		cout<<"���ҽ�㲻����!"<<endl;
		return false;
	}
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::UpdataByName(char *Name)    //���������޸�
{
	int Option5,Age;
	char Tel[20],choice;
	Node< NodeType > *CurrentNode=FirstNode;
	while(strcmp(CurrentNode->Data.name,Name)!=0&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;             //Ѱ����Ҫ�޸ĵĽڵ�
	if(strcmp(CurrentNode->Data.name,Name)==0)
	{
		cout<<"�޸ĵĽ��Ϊ:";
		CurrentNode->Show();
		cout<<"�޸�����.\n1.�޸ĵ绰,\n2.�޸�����.\n��ѡ��:";
		cin>>Option5;
		switch(Option5)
			{
				case 1: cout<<"������绰:";
					cin>>Tel;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<Tel<<" "<<CurrentNode->Data.age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						strcpy(CurrentNode->Data.tel,Tel); 
						cout<<"�޸ĳɹ�!";
					}
					break;
				case 2: cout<<"������������:";
					cin>>Age;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<CurrentNode->Data.tel<<" "<<Age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						CurrentNode->Data.age=Age; 
						cout<<"�޸ĳɹ�!";
					}
					break;
				default :cout<<"����!"; break;
		}
		return true;
	}
	else
	{
		cout<<"�޸ĵĽ�㲻����!"<<endl;
		return false;
	}
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::UpdataByTel(char *Tel)//���ݺ����޸�
{
	int Option5,Age;
	char choice;
	Node< NodeType > *CurrentNode=FirstNode;
	while(strcmp(CurrentNode->Data.tel,Tel)!=0&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;
	if(strcmp(CurrentNode->Data.tel,Tel)==0)
	{
		cout<<"�޸ĵĽ��Ϊ:";
		CurrentNode->Show();
		cout<<"�޸�����.\n1.�޸ĵ绰,\n2.�޸�����.\n��ѡ��:";
		cin>>Option5;
		switch(Option5)
			{
				case 1: cout<<"������绰:";
					cin>>Tel;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<Tel<<" "<<CurrentNode->Data.age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						strcpy(CurrentNode->Data.tel,Tel); 
						cout<<"�޸ĳɹ�!";
					}
					break;
				case 2: cout<<"������������:";
					cin>>Age;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<CurrentNode->Data.tel<<" "<<Age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						CurrentNode->Data.age=Age; 
						cout<<"�޸ĳɹ�!";
					}
					break;
				default :cout<<"����!"; break;
		}
		return true;
	}
	else
	{
		cout<<"�޸ĵĽ�㲻����!"<<endl;
		return false;
	}
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::UpdataByIndex(int Index)//��������޸�
{
	int Option6,Age;
	char Tel[20],choice;
	Node< NodeType > *CurrentNode=FirstNode;
	while(CurrentNode->Data.index!=Index&&CurrentNode->NextNode!=NULL)
			CurrentNode=CurrentNode->NextNode;
	if(CurrentNode->Data.index==Index)
	{
		cout<<"�޸ĵĽ��Ϊ:";
		CurrentNode->Show();	
		cout<<"�޸�����.\n1.�޸ĵ绰,\n2.�޸�����.\n��ѡ��:";
		cin>>Option6;
		switch(Option6)
			{
				case 1: cout<<"������绰:";
					cin>>Tel;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<Tel<<" "<<CurrentNode->Data.age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						strcpy(CurrentNode->Data.tel,Tel); 
						cout<<"�޸ĳɹ�!";
					}
					break;
				case 2: cout<<"������������:";
					cin>>Age;
					cout<<"��Ϊ:"<<endl
						<<CurrentNode->Data.index<<"."<<CurrentNode->Data.name<<" "
						<<CurrentNode->Data.tel<<" "<<Age<<endl
						<<"�Ƿ��޸�(YorN)";
					cin>>choice;
					if(choice=='Y'||choice=='y')
					{
						CurrentNode->Data.age=Age; 
						cout<<"�޸ĳɹ�!";
					}
					break;
				default :cout<<"����!"; break;
		}
		return true;
	}
	else
	{
		cout<<"�޸ĵĽ�㲻����!"<<endl;
		return false;
	}
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::LoadFromFile(char *filename)            //���ļ�����ȡ����
{
	NodeType VAlue;

	ifstream infile;
	infile.open(filename);
	if(!infile)
	{
		cout<<"���ļ�����!\n";
		exit(0);
	}                      
	while(infile>>VAlue.index)
	{
		infile>>VAlue.name>>VAlue.tel>>VAlue.age;                     //������������ڵ���
		AddNode(VAlue);                                               //���ڵ㰴�����������
	}
	infile.close();
	cout<<"�ļ���ȡ���!";
	return true;
}

/**********************************************************************/
template<class NodeType>
bool DoubleLinkList<NodeType>::SaveToFile(char *filename)              //�����ݱ��浽�ļ���
{
	ofstream outfile;
	outfile.open(filename);
	if(!outfile)
	{
		cout<<"���ļ�����!\n";
		exit(0);
	}
	Node<NodeType>*CurrentNode=FirstNode;
	while(CurrentNode)
	{
		outfile<<CurrentNode->Data.index<<" "<<CurrentNode->Data.name<<" "
		<<CurrentNode->Data.tel<<" "<<CurrentNode->Data.age<<endl;
		CurrentNode=CurrentNode->NextNode;
	}
	cout<<"�ļ��洢���!";
	return true;
}


