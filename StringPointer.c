/*
 * 字符串指针指向字符串的首地址
 * 可以移动字符串指针变量，访问字符串的各个字符
 */
#include <stdio.h>
int main()
{
  char *str = "Hi boy";
  printf("%p\n",str);

  while(*str)
  {
    printf("%c ", *str);
    printf("%p\n", str);
    str++;
  }
  return 0;
}

/*
result:
0x400638
H 0x400638
i 0x400639
  0x40063a
b 0x40063b
o 0x40063c
y 0x40063d
*/
