#include "Enemy.h"

//初期状態は接近
Enemy::Enemy() : currentState(&Enemy::Approach) {}

//更新
void Enemy::Update() {
    (this->*currentState)();
}

//接近
void Enemy::Approach() {
    printf("敵が接近!\n");
    currentState = &Enemy::Shoot;
}
//射撃
void Enemy::Shoot() {
    printf("敵が射撃!\n");
    currentState = &Enemy::Retreat;
}
//離脱
void Enemy::Retreat() {
    printf("敵が離脱!\n");
    currentState = &Enemy::Approach;
}
