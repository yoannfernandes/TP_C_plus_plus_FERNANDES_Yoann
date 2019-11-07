#include <iostream>
#include <cstdlib>
#include "Header.h"


int main()
{
	CPoint MonPoint(2,8);
	MonPoint.AfficherPoint();
	MonPoint.DeplacerPoint(3,3);
	MonPoint.AfficherPoint();



	system("pause");
	return 0;
}