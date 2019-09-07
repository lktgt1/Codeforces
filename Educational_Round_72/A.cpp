// Codeforces Eudcational Round 72 A

// 모든 EXP 포인트를 사용하여 STR > INT를 만족하는 (STR,INT) 쌍의 갯수를 세는 문제
// EXP 포인트 중 mid포인트를 STR에, 나머지는 INT에 투자하여 STR > INT를 만족하면 true를 반환하는 함수 f를 이용하여
// 가장 적은 EXP 포인트를 사용하여 STR > INT를 만족하는 STR값을 찾아낸다.
// 그리고 모든 EXP 포인트를 STR에 투자한 값에서 가장 적게 투자한 조건을 만족하는 STR값 사이에 숫자가 몇 개 있는지 세면 정답이다.

#include <cstdio>

inline int max(int a,int b){return a>b?a:b;};

bool f(int tostr,int str,int _int,int exp){
	str += tostr;
	_int += exp-tostr;
	return str > _int ? true : false;
}

void solve(){
	int str,_int,exp,l,r,mid;
	scanf("%d%d%d",&str,&_int,&exp);
	l = -1;
	r = exp;
	while(l+1<r){
		mid = (l+r)/2;
		if(f(mid,str,_int,exp)) r = mid;
		else l = mid;
	}
	int bound = str+r;
	if(bound > _int) printf("%d\n",str+exp-bound+1);
	else printf("0\n");
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--) solve();
}