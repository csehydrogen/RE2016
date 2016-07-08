#include <cstdio>
const char L = 48, U = 57, N = 12;
unsigned char a[N + 1];
int main() {
	int n, c = 0;
	printf("How many: ");
	scanf("%d", &n);
	for (int i = 0; i < N; ++i) a[i] = L;
	while (true) {
		unsigned char x = 0x48, y = 0x9e;
		for (int i = 0; i < N; ++i) {
			x += a[i];
			y ^= a[i];
		}
		if ((x * 0xc5 + y) % 0x101 == 0x62) {
			printf("%s\n", a);
			++c;
			if (c == n) break;
		}
		++a[0];
		for (int i = 0; i < N && a[i] > U; ++i) {
			a[i] = L;
			++a[i + 1];
		}
	}
	printf("Done\n");
	return 0;
}
