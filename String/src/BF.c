/*************************************************************************
    > File Name: BF.c
    > Author: NitokrisAlpha
    > Mail: d2837965115@outlook.com
    > Created Time: 2019年03月06日 星期三 10时27分13秒
 ************************************************************************/
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "string.h"

bool BF(char *object,char *src)
{
    //用于记录两个字符串的长度
    int objlen = strlen(object);
    int srclen = strlen(src);
    //查找的标志，随意定，i是目标字符串的标志，j是父串的标志
    int i=0,j=0;
    /**
     *  核心算法
     *      当i和j都小于各自的字符串长度才有比较意义，故有 while 的条件写法
     * **/
    while(i<=objlen && j<=srclen)
    {
        //判断同下标字符是否相同，系统则+1继续比较
        if(object[i] == src[j])
        {
            i++;
            j++;
        }
        else{
            //如果相同下标位置字符不相同，则目标字符串从0开始，和父串在+1后的字符串比较
            j = (j-i)+1;
            i = 0;
        }
        if(i == objlen && j <= srclen){
            return true;
        }
    }
    return false;
}
