#include "Circle.h"
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>


Circle::Circle()
{
	//半径が3.0f
	float radius=3.0f;
	//r_にrを代入している
	radius_ = radius;
}


//サイズを求めている
void Circle::Size()
{
	size = (float)M_PI*radius_*radius_;
}
//出力する
void Circle::Draw()
{
	printf("丸のサイズは%f\n", size);
}
