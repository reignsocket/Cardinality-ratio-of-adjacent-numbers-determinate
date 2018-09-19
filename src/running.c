
#include <stdio.h>
#include <string.h>

long b2ten(char* x, int b) {
	int ret = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i]-'0' >= b) return -1;
		ret *= b;
		ret += x[i]-'0' ;
	}
	return (long)ret;
}

void main( ) {
	int n;
	char p[8],q[8],r[8];
	long pAlgorism, qAlgorism, rAlgorism;
	scanf("%d", &n);
	while(n--) {
		scanf("%s%s%s", p, q, r);
		for(int b = 2; b <= 16; b++ ) {
			pAlgorism = b2ten(p, b);
			qAlgorism = b2ten(q, b);
			rAlgorism = b2ten(r, b);
			if (pAlgorism == -1 || qAlgorism == -1 || rAlgorism == -1) continue;
			if (pAlgorism * qAlgorism == rAlgorism) {
				printf("%d\n",b);
				break;
			}
		}
		if (b == 17) printf("0\n");
	}
}
