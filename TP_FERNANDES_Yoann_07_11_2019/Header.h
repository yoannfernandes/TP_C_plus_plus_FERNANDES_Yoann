#pragma once
//Classe Point

class CPoint
{
private:
	//Membres de la classe CPoint
	float nX;
	float nY;

public:
	//geteur
	float getX();
	float getY();

	//seteur
	void setX(float nX);
	void setY(float nY);

	//init
	void init(float x, float y);

	//Constructeur
	CPoint(float nX, float nY);

	//Destructeur
	~CPoint();

	void AfficherPoint();

	void DeplacerPoint(float nX, float nY);

	

};