#include "Rectangle.h"
#include<stdio.h>
Rectangle::Rectangle()
{
	//���a��2.0f
	float radius = 2.0f;
	radius_ = radius;
}

//�T�C�Y�����߂Ă���
void Rectangle::Size()
{
	size_ = radius_ * radius_;
}

//�o�͂�����
void Rectangle::Draw()
{
	printf("��`�̃T�C�Y��%f", size_);
}


