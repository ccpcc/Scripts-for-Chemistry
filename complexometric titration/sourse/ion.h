//���ļ������˴����������������Ϣ����
#include<iostream>
//����ĳ�����ӵ�ĳ�ָ��������Ϣ
struct l_data {
	char name[10];           //��������
	int num;                 //�����λ��
	double* p;               //���飬ÿ����λ�����������ȶ�����
};

//ĳ�����ӣ����а�����͸��������γ���������Ϣ
class Ion {
public:
	char name[5];                //������������
	int l_num, l_max_num;        //������������
	l_data* l_p;                 //l_data����
	Ion();
	Ion(const Ion& n);
	~Ion();
	void set(char* s, int n);    //�������ӵ����ƺ��������������
	void add_l(l_data& l);       //���������Ϣ
	int get_b_num(char* s);
	double get_b(char* s, int n);//��ѯ�ۻ��ȶ�����
	//���رȽ���������������������
	bool operator>(Ion& n);
	bool operator<(Ion& n);
	bool operator==(Ion& n);
};

