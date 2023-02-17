#include <stdio.h>

//数组操作
//创建一个整型数组，完成对数组的操作
//实现函数init（）初始化数组全为0
/*void init(int arr[],int sz){
    int i = 0;
    for (i = 0; i < sz; ++i) {
        arr[i] = 0;
    }
}

//实现print打印数组的每个元素
void print(int arr[], int sz){
    int i = 0;
    for (i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
}

//实现reverse函数完成数组的逆置
void reverse(int arr[],int sz){
    //arr[0] = arr[9]   arr[1] = arr[8]
    for (int i = 0; i < sz/2; ++i) {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[sz - 1 - i];
        arr[sz-1-i] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = sizeof (arr)/sizeof (arr[0]);
    //init(arr,sz);
    print(arr,sz);
    printf("\n");
    reverse(arr,sz);
    print(arr,sz);

    return 0;
}*/


//编程，交换数组
//将数组A和的内容和数组B的内容进行交换
/*void print(int arr[], int sz){
    int i = 0;
    for (i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Reverse(int A[],int B[],int sz){
    for (int i = 0; i < sz; ++i) {
        int tmp;
        tmp = A[i];
        A[i] = B[i];
        B[i] = tmp;
    }
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8};
    int B[] = {9,8,7,6,4,3,2,5};
    int sz = sizeof (A) / sizeof (A[0]);

    Reverse(A,B,sz);
    print(A,sz);
    print(B,sz);


    return 0;
}
*/

/*#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换相邻的两个元素
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("排序后的数组：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/

//#include <stdio.h>
//求两个二进制位中不同位的个数
/*int main(){
    int x;
    int y;
    int z;
    int count = 0;
    scanf("%d%d",&x,&y);
    z = x^y;
    for(int j = 0; j < 32 ;j++){
        if(z%2 == 1){
            count++;
        }
        z/=2;
    }

    printf("%d",count);
    return 0;

}*/



//打印整数二进制的奇数位和偶数位
//<<左移操作符  >>右移操作符
/*int main(){
    int a;
    int i = 0;
    int j = 0;
    scanf("%d",&a);

    //打印奇数位
    for (i = 0; i < 16; ++i) {
        printf("%d ",(a>>(i*2))%2);
    }
    //打印偶数位
    printf("\n");
    for (i = 0; i < 16; ++i) {
        printf("%d ",(a>>(i*2+1))%2);
    }

    return 0;
}
*/

//统计二进制中1的个数
/*int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    for (int i = 0; i < 32; ++i) {
        if((unsigned int)n%2 == 1){
            count++;
        }
        n = n>>1;
    }

    printf("%d",count);
    return 0;
}
*/


//交换两个变量，不创建临时变量
/*int main(){
    int a = 5;
    int b = 8;
    a = a^b;
    b = a^b;
    a = a^b;

    printf("%d %d",a,b);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main(){
    char arr[10000];
    //int sz;
    int count = 0;
    char c;
    while((c=getchar())&&(c!='\n'))
    {
        arr[count++]=c;
        //count++;
    }
    //printf("%s\n",arr);

    for(int i = count-1; i>=0;i--){
        printf("%c",arr[i]);
    }

    return 0;
}
*/


//计算求和
int main(){
    int a;
    int Sn = 0;
    int count = 0;
    int temp;
    scanf("%d",&a);
    temp = a;
    while (temp != 0){
        count++;
        temp/=10;
    }

    for (int i = 1; i < 5; ++i) {
        a = a+a*10*i;
        Sn += a;
    }

    printf("%d",Sn);
    return 0;


    return 0;
}


