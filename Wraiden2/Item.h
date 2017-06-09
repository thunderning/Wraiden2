#pragma once
#include <QPixmap>
#include "Wraiden2.h"
class Item:
	public Wraiden2
{
protected:
	int X, Y;  //飞机所在坐标，以左上角为准
	int length, height;  //图案大小
	QPixmap pic;	//具体图案
	bool exist;  //是否还存在
public:
	bool is_exist();
	bool check_out(int l, int h);  //检查出界
	Item();
	~Item();
};

