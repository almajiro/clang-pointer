#include <stdio.h>

int main(void)
{
	int hoge;
	char buf[256];

	printf("&hoge...%p\n", &hoge);

	printf("Input initial value.\n");
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &hoge);

	for(;;){
		printf("hoge..%d\n", hoge);

		// when hit the enter key it will be increase
		getchar();
		hoge++;
	}

	return 0;
}