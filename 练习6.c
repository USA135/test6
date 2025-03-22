//用*号输出字母C的图案。

#include <stdio.h>

int main(){
	const char *c_pattern[]={// 这里的每一个字符串表示C字母的每一行
		"    **********",
		" *****     ",//使用逗号分隔字符串,确保 c_pattern 的每个元素都是一个独立的字符串，而不是被拼接成一个整体。
		"**",
		"*",
		"*",
		"*",
		"**",
		" *****     ",
		"    **********",
	};
	
	// 输出字符图形
	printf("用 * 号输出字母 C!\n");
	for (int i = 0; i < sizeof(c_pattern) / sizeof(c_pattern[0]); i++) {
		printf("%s\n", c_pattern[i]);
	}
	return 0;
}
