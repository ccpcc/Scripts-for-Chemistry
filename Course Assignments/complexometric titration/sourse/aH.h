//��ЧӦϵ����
class H {
public:
	double lgaH, pH;
	void set(double p, double a);
	//���رȽ���������������������
	bool operator>(H h);
	bool operator<(H h);
	bool operator==(H h);
};

