#ifndef UNIT_H_
#define UNIT_H_
#include<string>
class Value_Unit
{
public:

	/*���ƣ�kg��ǧ�ˣ���g���ˣ���mg�����ˣ���t���֣���q����������ct����������point���֣�
	Ӣ�ƣ�lb��������oz����˾����gr�������st��Ӣʯ����dr��������
	*/
	double value;//��ֵ
	std::string old_unit;//ԭ��λ
	std::string new_unit;//�µ�λ
	Value_Unit(double newvalue,std::string newold_unit,std::string newnew_unit);
	void Weight();//������λת��
	void kgToothers();//��kgת����������λ
	void gToothers();//��gת����������λ
	void mgToothers();//��mgת����������λ
	void tToothers();//��tת����������λ
	void qToothers();//��qת����������λ
	void ctToothers();//��ctת����������λ
	void pointToothers();//��pointת����������λ
	void lbToothers();//��lbת����������λ
	void ozToothers();//��ozת����������λ
	void grToothers();//��grת����������λ
	void stToothers();//��stת����������λ
	void drToothers();//��drת����������λ
	~Value_Unit();
};
#endif UNIT_H_