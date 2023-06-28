#include <stdio.h>

int main(void){
 
int Japanese;
int Social_studies;
int Science;

int total;
double average;

printf("国語の点数は？");
scanf("%d", &Japanese);

printf("社会の点数は？");
scanf("%d", &Social_studies);

printf("理科の点数は？");
scanf("%d", &Science);

total = Japanese+Social_studies+Science;

average = total/3;

printf("合計=%d 平均=%f",total,average);

  return 0;
}

