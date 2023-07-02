#include <stdio.h>

int main(void){

  int price;
  int people;
  int division;
  int total;

  printf("区分（1が子供、2が大人）を入力してください");
  scanf("%d",&division);

  printf("人数を入力してください");
  scanf("%d",&people);

if (division == 1) {
        price = 800;
    } else if (division == 2) {
        price = 1500;
    } else {
        printf("無効な区分です。\n");
        return 0;
    }

total = price * people;
printf("合計料金は%dです",total);

}