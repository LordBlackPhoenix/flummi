//Flummi
#include "Flummi.h"
//#include "Multiball.cpp"
//Global!!!!!!!!!!
char aField[21][21];
int h = 5;
int b = 5;


void main()
{
	//Deklaration
	int sleep = 300;
	
	do
	{
		cout << "Hoehe: "; cin >> h;
		cout << "Breite: "; cin >> b;
		 
	} while (h > 20 || b > 20);

	cFlummi  oBall(h, b, 1, 1);
	cFlummi oBall1(h,b,7,4);
	do 
	{
		system("cls");
		initField(h, b);
		//Ball
	
			aField[oBall.posy()][oBall.posx()] = 'O';
			aField[oBall1.posy()][oBall1.posx()] = 'O';
	
		printField(h, b);
		Sleep(sleep);
		oBall.move();
		oBall.checkborder();
		oBall1.move();
		oBall1.checkborder();
		sleep = sleep + 10;
		if (sleep = 1000) {
			break;
		}
	

		
	} while (0 < 1);
	//multiball(h,b);

	system("pause");
}


//-----------UP------------------
//Spielfeld in ein 2D Array hinterlegen
void initField(int h,int b)
{
	for (int i = 0; i < h; i++)
	{
		int j;
		for (j = 0; j < b; j++)
		{
			if (i == 0 || j == 0 || i == h - 1 || j == b - 1)
			{
				aField[i][j] = 'X';
			}
			else
			{
				aField[i][j] = ' ';
			}

		}
		
		aField[i][j] = '\n';
		
	}
	
}

// Spielfeld aus 2D Array ausgeben
void printField(int h, int b)
{
	for (int i = 0; i <= h; i++) 
	{
		for (int j = 0; j <= b; j++)
		{
			cout<<aField[i][j];
		}		
		
	}

}