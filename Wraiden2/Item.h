#pragma once
#include <QPixmap>
#include "Wraiden2.h"
class Item:
	public Wraiden2
{
protected:
	int X, Y;  //�ɻ��������꣬�����Ͻ�Ϊ׼
	int length, height;  //ͼ����С
	QPixmap pic;	//����ͼ��
	bool exist;  //�Ƿ񻹴���
public:
	bool is_exist();
	bool check_out(int l, int h);  //������
	Item();
	~Item();
};

