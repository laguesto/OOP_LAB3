#include <iostream>
#include <D:\OOP_LAB3\Lab3_C++\Triangle_Class_lib\Triangle_class.h>


int main()
{
	Triangle* T1 = new Triangle();
	Triangle* T2 = new Triangle(2,4.5,6);
	Triangle* T3 = new Triangle(*T2);

	std::cout << "Triangle 1: " << T1->Get_X() << ", " << T1->Get_Y() << ", " << T1->Get_Z() << std::endl;
	std::cout << "Triangle 2: " << T2->Get_X() << ", " << T2->Get_Y() << ", " << T2->Get_Z() << std::endl;
	std::cout << "Triangle 3: " << T3->Get_X() << ", " << T3->Get_Y() << ", " << T3->Get_Z() << std::endl;

	*T3 = *T3 * 2;
	std::cout << "Triangle 3 after multyplying by 2: " << T3->Get_X() << ", " << T3->Get_Y() << ", " << T3->Get_Z() << std::endl;

	*T1 = *T2 + *T3;

	std::cout << "Triangle 1 after sum of Triangles T2 and T3: " << T1->Get_X() << ", " << T1->Get_Y() << ", " << T1->Get_Z() << std::endl;
	
}
