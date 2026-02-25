#include"stdafx.h"
#include"Concrete.h"
#include"Stone.h"


int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고,
	// 핑요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.
	Block* blocks[2];
	blocks[0] = new Concrete();
	blocks[1] = new Stone();
	

	for (int i = 0; i < 2; i++)
	{
		blocks[i]->Desribe();
	}


	delete blocks[0];
	delete blocks[1];

	
#pragma endregion


	return 0;
}