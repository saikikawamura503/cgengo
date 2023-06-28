#include <stdio.h>

int main(void){

  int price;
  int quantity;
  int tax_excluded;
  int tax_included;
  float consumption_tax = 1.1;

  printf("単価を入力してください");
  scanf("%d",&price);

  printf("数量を入力してください");
  scanf("%d",&quantity);

tax_excluded = price * quantity;
tax_included = tax_excluded * consumption_tax;

  printf("税抜価格は%d円で、税込価格は%d円です",tax_excluded,tax_included);

}