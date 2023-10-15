#include <iostream>
#include "First.h"
#define E 2.72 // Константа препроцессора 
//Бескончный цикл с растущей переменной loopindex
#define forever for(unsigned long long loopindex = 0ULL;; loopindex++)
#define sum(a, b) (a + b)
#define print_arr(arr, lenght) \
	for (int i = 0; i <  lenght; i++) \
		std::cout << arr[i] << ' '; \
	std::cout << std::endl 
//Это однострочный коментарий, разбитый \
на две строки с помощью продления коментария  
#define TEST 0
#if TEST == 1
void foo() {
	std::cout << "Hello world\n";
}
#elif TEST == 2

#else 
void foo() {
	std::cout << "Bue world!\n";
}
#endif
#define FLAG
#ifndef FLAG
int _NUM;


#endif


#define var(v) std::cout << #v" = " << v << std::endl;







int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Константы и конструкции Define
	/*
	std::cout << "E = " << E << std::endl;
	n = E * 2;
	std::cout << "n = " << n << std::endl;

	forever{
		std::cout << loopindex;
		std::cout << "Hello, World!";
	}
	
#undef E // удаление Е
	// std::cout << E << std::endl; // Ошибка так как обьект Е удален 


#define E 3
	std::cout << "E = " << E << std::endl;
	*/
	//Макросы Define
	/*n = 7, m = 15;
	std::cout << sum(n, m) << std::endl;

	int arr[3]{ 10, 20, 30 };
	print_arr(arr, 3);*/
	//Операторы препроцессора 
	/*n = 15; m = 42;
	std::string str = "Hello world";
	var(n);
	var(m);
	var(str);//std::cout << #v" = " << v << std::endl;*/
	//Встроенные обьекты препроцессора
	std::cout << __LINE__ << std::endl; // 75
	std::cout << __LINE__ << std::endl; // 76
	std::cout << __DATE__ << std::endl; //  дата сбоки проекта
	std::cout << __FILE__ << std::endl; // полный путь к файлу где выполняется проект

	return 0;
}