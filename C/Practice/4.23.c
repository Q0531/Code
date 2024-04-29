#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>//函数引用

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


// //猜数字游戏
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
//         srand((unsigned int)time(NULL));
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


