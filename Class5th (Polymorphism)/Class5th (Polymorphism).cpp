#include  "../prograam/stdafx.h"
#include  "../prograam/Message.h"
#include  "../prograam/Strength.h"
#include  "../prograam/Agility.h"
#include  "../prograam/Intelligence.h"

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.


	// Message msg;
	// 
	// msg.Send(55);
	// msg.Send("This program cannot be executed.");
	// msg.Send("Identify the issue frquency signal : ", 60);

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 있습니다.

#pragma endregion

#pragma region 오버라이딩
	// 상위 클래스의 함수를 하위 클래스에서 재정의하여 사용하는 방법입니다.

	//Stat* stat = nullptr;
	//stat = new strength();
	//stat->Enhance();
	//delete stat;
	//
	//stat = new Agility();
	//stat->Enhance();
	//delete stat;
	//
	//stat = new Intelligence();
	//stat->Enhance();
	//delete stat;

#pragma endregion


#pragma region 가상 함수
	// 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출하는 함수입니다.
	//Stat * ptr = nullptr;
	//char num;
	//int a = 0, b = 0, c = 0;
	//
	//cout << "1,2,3 (b:종료)" << endl;
	//while (true)
	//{
	//	
	//
	//	cin >> num;
	//	if (num == '1')
	//	{
	//		a++;
	//		
	//		ptr = new strength;
	//
	//		ptr->Enhance();
	//
	//		cout << "힘:" << a << " "
	//			<< "민첩:" << b << " "
	//			<< "지능:" << c << endl;
	//
	//		delete ptr;
	//	}
	//	else if (num == '2')
	//	{
	//		b++;
	//		
	//		ptr = new Agility;
	//
	//		ptr->Enhance();
	//
	//		cout << "힘:" << a << " "
	//			<< "민첩:" << b << " "
	//			<< "지능:" << c << endl;
	//
	//		delete ptr;
	//	}
	//	else if (num == '3')
	//	{
	//		c++;
	//		
	//		ptr = new Intelligence;
	//
	//		ptr->Enhance();
	//
	//		cout << "힘:" << a << " "
	//			<< "민첩:" << b << " "
	//			<< "지능:" << c << endl;
	//
	//		delete ptr;
	//	}
	//	else if (num == 'b' || num == 'B')
	//	{
	//		cout << "종료합니다.";
	//		break;
	//	}
	//	else
	//	{
	//		cout << "잘못된 입력. 다시 입력하시오.\n";
	//		
	//	}
		// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가
		// 있을 떄 객체 주소에 가상 함수 테이블을 추가합니다.
//	}






	// 가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는
	// 함수를 실행 시간에 결정하며, 정적으로 선언된 함수는
	// 가상 함수로 선언할 수 있습니다,
#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능합니다.
#pragma endregion


	return 0;
}