#include "Rectangle.h"
#include<stdio.h>
Rectangle::Rectangle()
{
	float width=3.0f;
	float height = 3.0f;
	width_ = width;
	height_ = height;
}

//�T�C�Y�����߂Ă���
void Rectangle::Size()
{
	//�ʐς����߂Ă���
	size_ = width_ * height_;
}

//�o�͂�����
void Rectangle::Draw()
{
	printf("��`�̃T�C�Y��%f", size_);
}


