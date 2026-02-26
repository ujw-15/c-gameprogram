#pragma once
class Block
{
protected:
	float Resistance;
	float Hardness;
public:
	virtual ~Block();
	virtual void Desribe() = 0;

};

