#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <functional>  
#include <windows.h>   

void SetTimeout(std::function<void()> callback, int delay) {
	Sleep(delay);
	callback();
}

int RollDice() {
	return rand() % 6 + 1;
}
int main() {
	srand(int(time(NULL)));

	int userGuess;

	int dice = RollDice();
	bool isEven = (dice % 2 == 0);

	printf("サイコロの出目が奇数か偶数か当てて! (奇数: 1, 偶数: 2): ");
	scanf_s("%d", &userGuess);

	std::function<void()> result = [isEven, userGuess]() {
		bool userIsEven = (userGuess == 2);
		if (isEven == userIsEven) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}
	};

	// 3秒待ってから結果を表示する
	printf("判定中...\n");
	SetTimeout(result, 3000);

	return 0;
}
