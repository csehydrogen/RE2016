#include <cstdio>
const char L = 48, U = 96, N = 16;
const char X[4] = {0x5a, 0x15, 0x5e, 0x39};
char db[4][N][3];
int cnt[4];
char a[13];
void f(int i) {
	for (int j = L; j <= U; ++j) {
		for (int k = L; k <= U; ++k) {
			for (int l = L; l <= U; ++l) {
				if ((j ^ k ^ l) == X[i]) {
					db[i][cnt[i]][0] = j;
					db[i][cnt[i]][1] = k;
					db[i][cnt[i]][2] = l;
					++cnt[i];
					if (cnt[i] == N) return;
				}
			}
		}
	}
}
int main() {
	int n, c = 0;
	printf("How many: ");
	scanf("%d", &n);
	for (int i = 0; i < 4; ++i) {
		f(i);
	}
	for (int i = 0; i < cnt[0]; ++i) {
		a[0] = db[0][i][0];
		a[4] = db[0][i][1];
		a[8] = db[0][i][2];
		for (int j = 0; j < cnt[1]; ++j) {
			a[1] = db[1][j][0];
			a[5] = db[1][j][1];
			a[9] = db[1][j][2];
			for (int k = 0; k < cnt[2]; ++k) {
				a[2] = db[2][k][0];
				a[6] = db[2][k][1];
				a[10] = db[2][k][2];
				for (int l = 0; l < cnt[3]; ++l) {
					a[3] = db[3][l][0];
					a[7] = db[3][l][1];
					a[11] = db[3][l][2];
					printf("%s\n", a);
					++c;
					if (c == n) {
						printf("Done\n");
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
