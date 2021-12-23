#include <stdio.h>


void calculate_the_maximum(int n, int k) {
	int maxor = 0, maxand = 0, maxxor = 0;
	int i, j, op;
	for (i = 1; i < n; i++) {
		for (j = i + 1; j <= n; j++) {
			op = (i & j);
			if (op < k && op > maxand)
				maxand = op;
			op = (i | j);
			if (op < k && op > maxor)
				maxor = op;
			op = (i ^ j);
			if (op < k && op > maxxor)
				maxxor = op;
		}
	}
	printf("%d\n%d\n%d\n", maxand, maxor, maxxor);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
