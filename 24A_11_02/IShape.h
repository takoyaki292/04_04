#pragma once

class IShape 
{
public:
	//�T�C�Y�����߂�֐�
	virtual void Size() = 0;
	//�o�͂���֐�
	virtual void Draw() = 0;
};