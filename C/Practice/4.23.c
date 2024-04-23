#include <stdio.h>
#include <stdlib.h>

//1.计算n的阶乘


int main(){
   int n = 0,ret = 1;
   scanf("%d",&n);
   for(int i = 1;i<=n;i++){
    ret *=i;
   }
   printf("%d\n",ret);
   system("pause");
   return 0;
}


//2.n的阶乘递减相加

int main(){
    int n = 0,ret = 1,f = 0;
    scanf("%d",&n);
    for(int j = 1;j<=n;j++){
            ret = 1;
        for(int i = 1;i<=j;i++){
        ret *=i;
        }

        f = f + ret;
    }
    printf("%d\n",f);
    system("pause");
    return 0;
}



//3. 2.的优化
int main(){
    int n = 0,ret = 1,sum = 0;
    scanf("%d",&n);
    for(int j = 1;j<=n;j++){
        ret = ret*j;
        sum += ret;
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}

