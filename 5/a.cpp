#include <cstdio>
unsigned char a[0x4e] = {
0xe5, 0xe0, 0x82, 0x73, 0x82, 0x7a, 0x30, 0x5f,  0xa3, 0x38, 0xc7, 0x97, 0xaf, 0x3e, 0xef, 0x97,
0xb0, 0x74, 0xf7, 0x97, 0xb0, 0x6d, 0x52, 0x4b,  0x70, 0x74, 0xf7, 0x97, 0xb4, 0x51, 0x4f, 0x73,
0x61, 0x74, 0xf7, 0x97, 0xb8, 0x11, 0x4e, 0x62,  0x48, 0x75, 0xf7, 0x97, 0xbc, 0xb3, 0xd5, 0x23,
0xbc, 0x05, 0xa7, 0xb8, 0x81, 0xa7, 0xbd, 0x30,  0x72, 0xb2, 0x30, 0x41, 0x20, 0xbc, 0x0d, 0x61,
0xba, 0x63, 0x30, 0x4a, 0xbf, 0xc6, 0x5a, 0x30,  0x77, 0xa3, 0xe8, 0xed, 0x70, 0xb3
};
int main() {
	for (int i = 0; i < 0x4d; ++i) printf("%c", a[i] ^ 0xb3);
	return 0;
}