#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
int main()
{
	//IShape�^�̕ϐ���錾����
	IShape* shape[2];
	for (int i = 0; i < 2; i++)
	{
		//i��1������������
		if (i < 1)
		{
			shape[i] = new Circle();
		}
		//���̑���������
		else
		{
			shape[i] = new Rectangle();
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		//�֐����Ă�
		shape[i]->Size();
		shape[i]->Draw();
	}
	
	for (int i = 0; i < 2; i++)
	{
		//delete������
		delete shape[i];
	}
}