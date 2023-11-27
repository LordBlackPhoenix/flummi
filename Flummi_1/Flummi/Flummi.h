#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;


extern char aField[21][21];



//Prototyping
void initField(int, int);
void printField(int, int);
void checkborder();


class cFlummi
{
public:
	/*
	Hier stehen haupts�chlich Methoden (Funtkionen bzw UPS)
	Es gibt 4 Arten von Methoden
	-  n
	*/




	/* KONSTRUKTOR!!!!!
	-  muss wie die Klasse hei�en!!!!
	-  Da er automatisch aufgerufen wird
	-  darf keinen R�ckgabeparameter haben - nicht mal void
	-  hier stehen die Startwerte die bei der geburt eines Objekts bereits vorhanden sein m�ssen!!!!
	*/

	//-------------------------------------------------------------------------------------------------------

	cFlummi(int h, int b,int a,int c);
	int posy() { return aposy; };
	int posx() { return aposx; };
	void move();
	void checkborder();

protected:				//... erbennde Klassen haben Zugriff

private:
	// Hier stehen haupts�chlich Attribute (Variablen)
	int aposy;
	int aposx;
	int fieldy;
	int fieldx;
	int vectory;
	int vectorx;
};
