#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
int main()
{
	//IShapeŒ^‚Ì•Ï”‚ğéŒ¾‚·‚é
	IShape* shape[2];
	for (int i = 0; i < 2; i++)
	{
		//i‚ª1–¢–‚¾‚Á‚½‚ç
		if (i < 1)
		{
			shape[i] = new Circle();
		}
		//‚»‚Ì‘¼‚¾‚Á‚½‚ç
		else
		{
			shape[i] = new Rectangle();
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		//ŠÖ”‚ğŒÄ‚Ô
		shape[i]->Size();
		shape[i]->Draw();
	}
	
	for (int i = 0; i < 2; i++)
	{
		//delete‚ğ‚·‚é
		delete shape[i];
	}
}