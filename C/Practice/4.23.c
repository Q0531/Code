#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>//函数引用

// //1.计算n的阶乘
// int main(){
//    int n = 0,ret = 1;
//    scanf("%d",&n);
//    for(int i = 1;i<=n;i++){
//     ret *=i;
//    }
//    printf("%d\n",ret);
//    system("pause");
//    return 0;
// }


// //2.n的阶乘递减相加
// int main(){
//     int n = 0,ret = 1,f = 0;
//     scanf("%d",&n);
//     for(int j = 1;j<=n;j++){
//             ret = 1;
//         for(int i = 1;i<=j;i++){
//         ret *=i;
//         }
//         f = f + ret;
//     }
//     printf("%d\n",f);
//     system("pause");
//     return 0;
// }


// //3. 2.的优化
// int main(){
//     int n = 0,ret = 1,sum = 0;
//     scanf("%d",&n);
//     for(int j = 1;j<=n;j++){
//         ret = ret*j;
//         sum += ret;
//     }
//     printf("%d\n",sum);
//     system("pause");
//     return 0;
// }


// //4.流式中心靠拢输出
// int main(){
//     char arr1[] = "Let's go warriors!";
//     char arr2[] = "##################";
//     int left = 0,right = strlen(arr2)-1;
//     while(left <= right){
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         system("cls");
//          printf("%s\n",arr2);
//         left++;
//         right--;
//         Sleep(1000);
//     }
//     system("pause");
//     return 0;
// }


// //5.三次输入密码登录
// int main(){
//     char password[12] = {0};
//     int i = 0;
//     for(i = 0;i<3;i++){
//         printf("请输入密码：");
//         scanf("%s",password);
//         if(strcmp(password,"Qyjcomeon") == 0){
//             printf("密码正确，登录成功\n");
//             break;
//         }
//         else
//             printf("密码错误\n");
//     }
//     if(i == 3){
//         printf("密码错误已达三次，强制退出系统\n");
//     }
//     system("pause");
//     return 0;
// }


// //6.猜数字游戏
// void menu(){
//     printf("*******************\n");
//     printf("******1.play*******\n");
//     printf("******2.exit*******\n");
//     printf("*******************\n");
//     return;
// }//生成游戏菜单
// void game(){
//     int guess = 0;
//     int ret = rand()%100+1;
//     while(1){ 
//         printf("请猜数字-> ");
//         scanf("%d",&guess);
//         if(guess == ret){
//             printf("恭喜你，猜对了！\n");
//             break;
//         }
//         else if(guess > ret){
//             printf("猜大了，请重新猜数\n");
//         }
//         else if(guess < ret){
//             printf("猜小了，请重新猜数\n");
//         }
//         return;
//     }
// }//游戏主体
// int main(){
//     int input = 0;
//     do{
//         srand((unsigned int)time(NULL));  //srand()-生成随机数的起点，里面需要一个unsign int类型的变量，如果这个参数每次都变，则每次的随机数都不同，time()正好生成时间戳，每时每刻都在变化。
//         menu();
//         printf("请选择-> ");
//         scanf("%d",&input);
//         switch(input){
//             case 1:
//                 {
//                     game();
//                     break;
//                 }
//             case 0:
//                 {
//                     printf("退出游戏\n");
//                     break;
//                 }
//             default:
//                 {
//                     printf("选择错误，请重新选择\n");
//                     break;
//                 }
//         }
//         if(input == 0||input == 1)
//         break;
//     }
//     while(input);
//     system("pause");
//     return 0;
// }


// //7.60秒关机
// int main(){
//     char input[20] = {0};
//     system("shutdown -s -t 60");
// again:
//     printf("你的电脑60秒内要关机喽,如果输入:我是猪,就饶了你！\n");
//     scanf("%s",input);
//     if(strcmp(input,"我是猪") == 0){
//         system("shutdown -a");
//         printf("好了，饶你一命\n");
//     }
//     else{
//         printf("怎么个事，不信是吧？\n");
//         goto again;
//     }
//     system("pause");
//     return 0;
// }


// //8. 6和7结合，猜数字三次不对直接关机。
// void menu(){
//     printf("****************\n");
//     printf("*****1.play*****\n");
//     printf("*****0.exit*****\n");
//     printf("****************\n");
// }//游戏菜单
// void body(){
//     int a = 0;
//     int nub = rand()%100 + 1;
//     int i = 0;
//     while(i<3){
//         printf("请猜数字-> ");
//         scanf("%d",&a);
//     if(a >nub){
//         printf("猜大了，再试%d次\n",2-i);
//         i++;
//     }
//     else if(a < nub){
//         printf("猜小了，再试%d次\n",2-i);
//         i++;
//     }
//     else{
//         printf("猜对了，游戏结束\n");
//         break;
//         }
//     }
//     if(i == 3){
//         system("shutdown -s -t 1");
//     }
// }//游戏主体
// int main(){
//     int input = 0;
//     menu();
//     do{
//         srand((unsigned int)time(NULL));
//         printf("请选择-> ");
//         scanf("%d",&input);
//         switch(input){
//             case 1:{
//                 body();
//                 break;
//             }
//             case 0:{
//                 printf("退出游戏\n");
//                 break;
//             }
//             default:{
//                 printf("选择错误，请重新选择\n");
//             }
//         }
//         if(input == 0||input == 1){
//             break;
//         }
//     }
//     while(input);
//     system("pause");
//     return 0;
// }


// //9.找100-200以内的素数（即质数，只能被1和它本身整除的数）
// int main(){ 
//     int count = 0;
//     for(int i = 101;i <= 200;i+=2){
//         int flag = 1;
//         for(int j = 2;j <= sqrt(i);j++){
//             if(i%j == 0){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1){
//             printf("%d ",i);
//             count++;
//         }
//     } 
//     printf("\n%d\n",count);
//     system("pause");
//     return 0;
// }


// //10.输入一个数判断是否是闰年
// //首先要懂闰年的判断规则：
// //1.能被4整除&&不能被100整除
// //或者
// //2.能被400整除
// bool if_leap_year(int x){
//     if(((x%4 == 0)&&(x%100 != 0))||(x%400 == 0)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int year = 0;
//     scanf("%d",&year);
//     int output = if_leap_year(year);
//     if(output){
//         printf("%d年是闰年\n",year);
//     }
//     else{
//         printf("%d年不是闰年\n",year);
//     }
//     system("pause");
//     return 0;
// }



