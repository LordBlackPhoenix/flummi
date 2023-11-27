#include "Flummi.h"

cFlummi::cFlummi(int h, int b,int a , int c)
{
	aposy = a, aposx = c; fieldy = h, fieldx = b; vectory = 1, vectorx = 1;
};
void cFlummi::checkborder()
{
	//oben und unten
	if (aposy == 1 || aposy == fieldy - 2)
	{
		vectory = vectory * (-1);
	}

	//recht und links
	if (aposx == 1 || aposx == fieldx - 2)
	{
		vectorx = vectorx * (-1);
	}
}

void cFlummi::move()
{ 
	aposy = aposy + vectory, aposx = aposx + vectorx; 


};
