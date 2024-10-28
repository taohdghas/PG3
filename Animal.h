#pragma once
class Animal
{
public:
	//コンストラクタ
	Animal();
	//デストラクタ
	virtual ~Animal();

	//鳴き声を出す
	virtual void Sound();
};

