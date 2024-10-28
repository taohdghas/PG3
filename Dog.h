#pragma once
#include "Animal.h"
#include <stdio.h>

class Dog :public Animal {
public:
	//コンストラクタ
	Dog();
	//デストラクタ
	~Dog()override;
	//鳴き声
	void Sound() override;
};