#include <stdio.h>
#include <string.h>

// int main()
// {
//     //char 字符类型
//     //char a='w';
//     //C语言沥楉字符串类型Ｅ用‥”
//     //"adfg";
//     char arr1[]="adfg";//字符串结来标志 /0  5个字符
//     char arr2[]={'a','d','f','g','\0'}; // 5个字符
//     printf("%d\n",strlen(arr1));//长度4
//     printf("%d\n",strlen(arr2));//长度4Ｅ沥楉 \0长度楪祥

//     int len = strlen("abc");//求字符串长度祄一个函数Ｅstring length  头文件string.h
//     printf("%d\n",len);
//     // printf("%s\n",arr1);
//     // printf("%s\n",arr2);
    
//     return 0;
// }


// int main()
// {
//     printf("abc\n\0abd\n");// \n 去%/换襥  \0结来字符
//     return 0;
// }


//转义字符?
// \ddd-襨示1-3个人八进奶祄数字;\xdd-襨示2个卥六进奶祄数字

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型祄数据
//%lf - 打印double类型祄数据
//%zu - 打印sizeof祄返回值

///  
// int main()
// {
//     //printf("%s\n","(are you ok??)");
//     // printf("%c\n",'\'');  // \ 转义字符
//     // printf("adsf\\0dfg\n");
//     //printf("\a\a\a\a\a\a\a");
//     // printf("%c\n",'\130'); \ddd
//     //printf("%c\n",'\x60');//ascii襨Ｅ一个字符  \x(0)dd
//     //printf("%d\n",strlen("qwer t")); //6// 函数外宥义句量 x 咥 y
// int x;
// int y;
// int addtwonum()
// {
//     // 函数内声楎句量 x 咥 y 为外饨句量
//     extern int x;
//     extern int y;
//     // 给外饨句量Ｅ全局句量）x 咥 y 赋值
//     x = 1;
//     y = 2;
//     return x+y;
// }

// int main()
// {
//     int result;
//     // 谥用函数 addtwonum
//     result = addtwonum();
    
//     printf("result 为: %d",result);
    
//}
//     //printf("%d\n",strlen("c:\test\628\test.c"));//14
//     return 0;
// }


//注釥夥襥/* */ 不襽嵥套注釥
//奛建楇钥句量pＥ并赋值为null
//int* p=null;


//循环语句
// int main()
// {
//     int input =0;
//     printf("奠入比特\n");
//     printf("覥好好学习套(1/0)Ｅ");
//     scanf("%d",&input);
//     if (input==1)    //襨达式
//     {
//         printf("好offer\n");
//     }
//     else
//     {
//         printf("卖红薯\n");
//     }
//     return 0;
// }

// int main()
// {
//     int line=0;
//     printf("奠入比特\n");
//     while(line<20)
//     {
//         printf("写代砥:%d\n",line);
//         line++;
//     }
//     if (line>=20)
//     {
//         printf("好offer\n");
//     }
//     else
//     {
//         printf("继续奠油\n");
//     }
//     return 0;
// }


//求两个任意整数祄咥

//函数
// int Add(int x,int y)
// {
//     int z=0;
//     z=x+y;
//     return z;
// }
// int Add(int x,int y)
// {
//     return (x+y);
// }

// int main()
// {
//     int n1=0;
//     int n2=0;
//     //输入
//     scanf("%d %d",&n1,&n2);
//     //求咥
//     //int sum=n1+n2;
//     int sum=Add(n1,n2);
//     int t1=100;
//     int t2=200;

//     int ret=Add(t1,t2);
//     //打印
//     printf("%d\n",sum);
//     printf("%d\n",ret);
//     return 0;
// }


// int main()
// {
//     //0-9
//     //数组
//     int arr[10]={10,11,12,13,14,15,16,17,18,19};
//     //printf("%d\n",arr[8]);
//     int i=0;
//     while (i<10)
//     {
//         printf("%d ",arr[i]);
//         i=i+1;//i++
//     }
//     //printf("asd\b\n\0fgh");// \0结来
//     return 0;
// }

int main() {
    int arr[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}