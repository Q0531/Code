#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

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


//5.三次输入密码登录
int main(){
    char password[12] = {0};
    int i = 0;
    for(i = 0;i<3;i++){
        printf("请输入密码：");
        scanf("%s",password);
        if(strcmp(password,"Qyjcomeon") == 0){
            printf("密码正确，登录成功\n");
            break;
        }
        else
            printf("密码错误\n");
    }
    if(i == 3){
        printf("密码错误已达三次，强制退出系统\n");
    }
    system("pause");
    return 0;
}