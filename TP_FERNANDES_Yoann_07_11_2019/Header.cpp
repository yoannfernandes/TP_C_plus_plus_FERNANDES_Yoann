#include "Header.h"
#include <iostream>
#include <cstdlib>

float CPoint::getX()
{
	return nX;
}

float CPoint::getY()
{
	return nY;
}

void CPoint::setX(float nX)
{
	this->nX = nX;
}

void CPoint::setY(float nY)
{
	this->nY = nY;
}

void CPoint::init(float x, float y)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::CPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::~CPoint()
{
}

void CPoint::AfficherPoint()
{
	std::cout << "X : " << this->getX() << " Y : " << this->getY() << std::endl;
}

void CPoint::DeplacerPoint(float nX, float nY)
{
	this->setX(this->getX() + nX);
	this->setY(this->getY() + nY);
}