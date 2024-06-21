#pragma once

class IShape 
{
public:
	//サイズを求める関数
	virtual void Size() = 0;
	//出力する関数
	virtual void Draw() = 0;
};