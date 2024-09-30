#include <stdio.h>

int recursive_wage(int hours) {
    int total_wage = 0;
    int current_wage = 100; 

    for (int i = 1; i <= hours; i++) {
        total_wage += current_wage;
        current_wage = current_wage * 2 - 50; 
    }

    return total_wage;
}

int main() {
    //働く時間
    int hours = 2; 
    //一般的な賃金体系の賃金
    int wage = 1072;
    //一般的な賃金体系の合計賃金
    int fixed_total_wage = wage * hours;
    //再帰的な賃金体系の合計賃金
    int recursive_total_wage = recursive_wage(hours);

    printf("働く時間: %d時間\n", hours);
    printf("一般的な賃金体系での合計賃金: %d円\n", fixed_total_wage);
    printf("再帰的な賃金体系での合計賃金: %d円\n", recursive_total_wage);

    if (fixed_total_wage > recursive_total_wage) {
        printf("一般的な賃金体系の方が得\n");
    }
    else {
        printf("再帰的な賃金体系の方が得\n");
    }

    return 0;
}