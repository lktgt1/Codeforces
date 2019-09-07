// Codeforces Eudcational Round 72 B

// 만약 di가 현재 남아있는 머리의 개수보다 크거나 같다면 hi를 무시할 수 있다.
// di가 가장 큰 blow까지는 di와 hi의 차이가 가장 작은 blow를 날려야 한다.
// maxblow2 = di와 hi 차이가 가장 작은 blow, maxblow = di가 가장 큰 blow라고 하면
// x부터 maxblow보다 작거나 같을 때까지 maxblow2를 날리고, 마지막에 maxblow를 날리면 최적이다.

#include <cstdio>

inline int max(int a,int b){return a > b ?  a: b;};

void solve(){
	int n,x,a,b,maxblow = 0,maxblow2 = 0;
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		maxblow2 = max(maxblow2,a-b);
		maxblow = max(maxblow,a);
	}
	if(maxblow >= x) printf("1\n");
	else if(maxblow2 <= 0) printf("-1\n");
	else printf("%d\n",(x-maxblow)/maxblow2+((x-maxblow)%maxblow2>0)+1);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--) solve();
}