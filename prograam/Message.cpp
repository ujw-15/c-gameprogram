#include "stdafx.h"
#include "Message.h"

void Message::Send(const char* content)
{
	cout << "Content : " << content << endl;
}

void Message::Send(int frequency)
{
	cout << "frequency : " << frequency << endl;
}

void Message::Send(const char* content, int frequency)
{
	cout << "Content : " << content << ", Code :" << frequency << endl;
}