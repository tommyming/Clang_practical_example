/* 自增运算符的应用*/
#include <stdio.h> 
int main()
{
	int a=5,b,c,i=10; /* 变量定义初始化 */ 
	b=a++;       /* a 赋 给 b 后 a 自 增 1 */
	c=++b;       /* b 自 增 1， 后 赋 给 c */
	printf("a = %d, b = %d, c = %d\n",a,b,c); /* 输 出 abc */ 
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++); /* 输出i，i++，i++ */ 
	printf("%d\n",++i); /* i 自 增 1， 输 出 i， 此 时 i＝12＋1 */ 
	printf("%d\n",--i); /* i 自 减 1， 输 出 i，i＝13－1＝12 */ 
	printf("%d\n",i++); /* 输 出 i＝12，i 自 增 1，i＝13 */ 
	printf("%d\n",i--);    /* 输出 i＝13，i 自减 1，i＝12 */
	printf("%d\n",-i++);   /* －(i++)即 i 取出，加负号，输出－12，i 取出前已自增 1，i＝13*/
	printf("%d\n",-i--);   /* i 取出，加负号，输出－13，i 取出前已再自减 1，i＝12*/
}
