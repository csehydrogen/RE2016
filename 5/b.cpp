#include <cstdio>
char a[12] = {
	0xde, 0xe1, 0xf8, 0xc3, 0xe2, 0xfc, 0xc0, 0xd2, 0xa2, 0xfd, 0xd1, 0xfb
};
int main() {
	for (int i = 0; i < 12; ++i) {
		printf("%c", a[i] ^ 0x93);
	}
	return 0;
}

