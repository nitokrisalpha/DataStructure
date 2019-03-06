/*************************************************************************
    > File Name: main.c
    > Author: NitokrisAlpha
    > Mail: d2837965115@outlook.com
    > Created Time: 2019年03月06日 星期三 11时09分11秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int main()
{
    char obj[100];
    char src[100];
    printf("请输入要匹配的字符串(目标字符串):\n");
    scanf("%s",obj);
    printf("请输入可能包含目标字符串的字符串:\n");
    scanf(" %s",src);
    if(BF(obj,src))
    {
        printf("匹配成功,成功在父串中找到目标字符串\n");
        exit(0);
    }
    printf("匹配失败，没有找到目标字符串\n");
    return 0;
}
