#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
int main()
{
	//IShape型の変数を宣言する
	IShape* shape[2];
	for (int i = 0; i < 2; i++)
	{
		//iが1未満だったら
		if (i < 1)
		{
			shape[i] = new Circle();
		}
		//その他だったら
		else
		{
			shape[i] = new Rectangle();
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		//関数を呼ぶ
		shape[i]->Size();
		shape[i]->Draw();
	}
	
	for (int i = 0; i < 2; i++)
	{
		//deleteをする
		delete shape[i];
	}
}