#include "Circle.h"
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>


Circle::Circle()
{
	//���a��3.0f
	float radius=3.0f;
	//r_��r�������Ă���
	radius_ = radius;
}


//�T�C�Y�����߂Ă���
void Circle::Size()
{
	//�~���������߂Ă���
	size = (radius_*2)*(float)M_PI;
}
//�o�͂���
void Circle::Draw()
{
	printf("�ۂ̃T�C�Y��%f\n", size);
}
