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
//		printf("%c ", i);//%c�����Ǵ�ӡ�ַ�
//	}
//	return 0;
//}

//����ʹ�ü�أ�f10�򿪵��������ҵ�����-->���ӡ���>������Ҫ���ӵĶ������ɲ鿴



//�ַ�����\0���������ַ�������\0�����ģ�\0��һ���ַ���ASCII��Ϊ0����ʾ�ַ����Ľ�����
//int main() {
//
//	printf("%s\n", "hello world"); // hello world
//	printf("hello world"); // hello world
//
//	return 0;
//}

//strlen������ʹ�ã�strlen�����������Ǽ����ַ����ĳ��ȣ�������\0��������   
//  strlen�����ķ���ֵ��size_t���ͣ�size_t�������޷����������͡�
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
//    system("pause"); // ��ֹ��������
//    return 0;
//}


//ת���ַ���ʹ�ã�ת���ַ�����\��ͷ���ַ�����ʾ���⺬����ַ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ���з�
    printf("1. ���з���Hello\nWorld\n");

    // �Ʊ��
    printf("2. �Ʊ����Tab����Hello\tWorld\n");

    // �س�����������Ƶ����ף��Ḳ��ǰ���ַ���
    printf("3. �س�����\\r����123456\rABC\n");  // �����ABC456

    // �˸����ɾ��ǰһ���ַ���
    printf("4. �˸����\\b����Hello\bX\n");    // �����HellX

    // ���壨����̨��һ������Щϵͳ������Ч��
    printf("5. �������\\a��������\a��������������\n");

    // ������
    printf("6. �����ţ�I\'m a programmer.\n");

    // ˫����
    printf("7. ˫���ţ�She said, \"Hello!\"\n");

    // ��б��
    printf("8. ��б�ܣ�This is a backslash: \\\n");

    // �ʺţ���ֹ������ĸ�� ?? ��ͻ��
    printf("9. �ʺţ�What\? Why\?\n");

    // ���ַ���\0 �����ɴ�ӡ�������ַ���������
    char str[] = "hello\0world";
    printf("10. ���ַ���strlenǰ���ַ� = %s\n", str); // ֻ��� hello

    // ʮ�������ַ�
    printf("11. ʮ�������ַ���\\x41 = %c\n", '\x41'); // A

    // �˽����ַ�
    printf("12. �˽����ַ���\\101 = %c\n", '\101');   // A
    getchar(); // �ȴ����룬��ֹ����һ������
    return 0;
}
