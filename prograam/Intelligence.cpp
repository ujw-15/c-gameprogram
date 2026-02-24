#include "stdafx.h"
#include "Intelligence.h"

Intelligence::Intelligence()
{
   // cout << "Intelligence 생성\n";
}

Intelligence::~Intelligence()
{
    cout << "Intelligence 소멸\n";
}

void Intelligence::Enhance()
{
	cout << "지능 증가!" << endl;
}