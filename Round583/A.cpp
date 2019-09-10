// Codeforces Round 583

// dollar로는 d의 배수,euro로는 e*5의 배수만큼 바꾸어 볼 수 있다.
// d로 한번씩 or e*5로 한번씩 바꾸어 보면서 나머지는 다른 화폐로 나눈 나머지가 가장 작은 값이 답이 된다.

#include <cstdio>

inline int min(int a,int b){return a > b ? b : a;};

int main(){
	int n,d,e,ans;
	scanf("%d%d%d",&n,&d,&e);
	e*=5;
	ans = n%d;
	for(int i=0;i<=n;i+=d)
		ans = min(ans,(n-i)%e);
	printf("%d",ans);
}