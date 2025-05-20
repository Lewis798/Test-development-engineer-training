//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main() {
//	//'a';
//	//'d';
//	//'f';
//	int i = 0;
//	for ( i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);//%c作用是打印字符
//	}
//	return 0;
//}

//调试使用监控，f10打开调试器。找到窗口-->监视——>输入需要监视的东西即可查看



//字符串和\0结束符，字符串是以\0结束的，\0是一个字符，ASCII码为0，表示字符串的结束。
//int main() {
//
//	printf("%s\n", "hello world"); // hello world
//	printf("hello world"); // hello world
//
//	return 0;
//}

//strlen函数的使用，strlen函数的作用是计算字符串的长度，不包括\0结束符。   
//  strlen函数的返回值是size_t类型，size_t类型是无符号整数类型。
//int main() {
//    char arr1[] = "hello";
//    char arr2[] = { 'h', 'e', 'l', 'l', 'o','\0' };
//
//    /*printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));*/
//
//    printf("%zd\n", strlen(arr1));
//    printf("%zd\n", strlen(arr2));
//
//    system("pause"); // 防止窗口闪退
//    return 0;
//}


//转义字符的使用，转义字符是以\开头的字符，表示特殊含义的字符。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 换行符
    printf("1. 换行符：Hello\nWorld\n");

    // 制表符
    printf("2. 制表符（Tab）：Hello\tWorld\n");

    // 回车符（将光标移到行首，会覆盖前面字符）
    printf("3. 回车符（\\r）：123456\rABC\n");  // 输出：ABC456

    // 退格符（删除前一个字符）
    printf("4. 退格符（\\b）：Hello\bX\n");    // 输出：HellX

    // 响铃（控制台响一声，有些系统可能无效）
    printf("5. 响铃符（\\a）：响铃\a（可能听不到）\n");

    // 单引号
    printf("6. 单引号：I\'m a programmer.\n");

    // 双引号
    printf("7. 双引号：She said, \"Hello!\"\n");

    // 反斜杠
    printf("8. 反斜杠：This is a backslash: \\\n");

    // 问号（防止与三字母词 ?? 冲突）
    printf("9. 问号：What\? Why\?\n");

    // 空字符（\0 本身不可打印，用于字符串结束）
    char str[] = "hello\0world";
    printf("10. 空字符：strlen前的字符 = %s\n", str); // 只输出 hello

    // 十六进制字符
    printf("11. 十六进制字符：\\x41 = %c\n", '\x41'); // A

    // 八进制字符
    printf("12. 八进制字符：\\101 = %c\n", '\101');   // A
    getchar(); // 等待输入，防止程序一闪而过
    return 0;
}
