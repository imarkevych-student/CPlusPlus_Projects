//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	srand(time(0));
//
//	//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати елементи обох масивів.
//	/*int size1, size2, size3;
//	cout << "Enter the size of the array 1: ";	
//	cin >> size1;
//	cout << "Enter the size of the array 2: ";	
//	cin >> size2;
//	size3 = size1 + size2;
//	int* ptrArr1 = new int[size1];
//	int* ptrArr2 = new int[size2];
//	int* ptrArr3 = new int[size3];
//	
//	for (int i = 0; i < size1; i++)
//	{
//		*(ptrArr1 + i) = rand() % 100;
//	}
//
//	for (int i = 0; i < size1; i++)
//	{
//		cout << *(ptrArr1 + i) << " ";
//	}
//	cout << endl;
//		
//	int* ptrArr = new int[size2];
//
//	for (int i = 0; i < size2; i++)
//	{
//		*(ptrArr2 + i) = rand() % 100;
//	}
//
//	for (int i = 0; i < size2; i++)
//	{
//		cout << *(ptrArr2 + i) << " ";
//	}
//	cout << endl;
//	
//	for (int j = 0; j < size1; j++)
//	{
//		*(ptrArr3 + j) = *(ptrArr1 + j);
//	}
//	
//	for (int i = size1; i < size3; i++)
//	{
//		*(ptrArr3 + i) = *(ptrArr2 + i - size1);
//	}
//
//	for (int i = 0; i < size3; i++)
//	{
//		cout << *(ptrArr3 + i) << " ";
//	}
//
//
//	delete[] ptrArr1;
//	delete[] ptrArr2;
//	delete[] ptrArr3;*/
//	
//	//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, в якому потрібно зібрати спільні елементи двох масивів без повторень.
//
//	int size1, size2;
//	int size3 = 0;
//	cout << "Enter the size of the array 1: ";
//	cin >> size1;
//	cout << "Enter the size of the array 2: ";
//	cin >> size2;
//	
//	int* ptrArr1 = new int[size1];
//	int* ptrArr2 = new int[size2];
//	
//	for (int i = 0; i < size1; i++)
//	{
//		*(ptrArr1 + i) = rand() % 100;
//	}
//
//	for (int i = 0; i < size1; i++)
//	{
//		cout << *(ptrArr1 + i) << " ";
//	}
//	cout << endl;
//
//	int* ptrArr = new int[size2];
//
//	for (int i = 0; i < size2; i++)
//	{
//		*(ptrArr2 + i) = rand() % 100;
//	}
//
//	for (int i = 0; i < size2; i++)
//	{
//		cout << *(ptrArr2 + i) << " ";
//	}
//	cout << endl;
//	
//	for (int i = 0; i < size1; i++)
//		for (int j = i; j < size2; j++)
//		{
//			if (*(ptrArr1 + i) == *(ptrArr2 + j))
//			{
//				size3++;
//				cout << "Match value = " << *(ptrArr2 + j) << endl;
//			}				
//		}
//	cout << "Size 3 =" << size3 << endl;
//	int* ptrArr3 = new int[size3];
//	
//	int count3 = 0;
//	for (int i = 0; i < size1; i++)
//		for (int j = i; j < size2; j++)
//		{
//			if (*(ptrArr1 + i) == *(ptrArr2 + j)) 
//			{
//				count3++;
//				*(ptrArr3 + count3) = *(ptrArr2 + i);
//			}
//				
//		}
//
//
//	for (int i = 0; i < size3; i++)
//	{
//		cout << *(ptrArr3 + i) << " ";
//	}
//
//
//	delete[] ptrArr1;
//	delete[] ptrArr2;
//	delete[] ptrArr3;
//}