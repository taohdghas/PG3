#include <stdio.h>
#include "Dog.h"
#include "Cat.h"

int main() {
	//インスタンス生成
	Dog dog;
	Cat cat;

    //鳴き声を出力
    printf("犬の鳴き声: ");
    dog.Sound();  

    printf("猫の鳴き声: ");
    cat.Sound(); 

	return 0;
}