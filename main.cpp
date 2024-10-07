#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <Windows.h>

// コールバック関数
typedef void (*PFunc)(bool);

void DisplayResult(bool isCorrect) {
    if (isCorrect) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }
}
// 奇数か偶数かを判定
bool IsEven(int number) {
    return number % 2 == 0;
}
// サイコロを振る関数
int RollDice() {
    return rand() % 6 + 1;
}
void GuessOddOrEven(PFunc callback) {
    int dice = RollDice();
    int userGuess;
    bool isEven = IsEven(dice);

    printf("サイコロの出目が奇数か偶数か当てて!(奇数: 1, 偶数: 2): ");
    scanf_s("%d", &userGuess);

    bool userIsEven = (userGuess == 2);

    printf("判定中...\n");
    Sleep(3000);  // 3秒待つ

   //結果を表示
    callback(isEven == userIsEven);
}

int main() {
    srand(time(NULL)); 

    GuessOddOrEven(DisplayResult);

    return 0;
}