#include <stdio.h>
int main(){
	int T, M, N, a, b, rest, ans;
	scanf("%d", &T);
	while (T--){
		scanf("%d%d%d%d", &M, &N, &a, &b);
		if (M == N){
			if (a == b){
				printf("%d\n", a);
			}
			else{
				printf("-1\n");
			}
			continue;
		}
		else if (M > N){
			int tmp = M;
			M = N;
			N = tmp;
			tmp = a;
			a = b;
			b = tmp;
		}
		ans = 0;
		rest = 0;
		if (a > b) b += N;
		while ((M*N + a - b) % M != rest && ans < M*N){
			rest = (rest + N) % M;
			ans += N;
		}
		if (ans == M*N) printf("-1\n");
		else printf("%d\n", ans + b);
	}
	return 0;
}