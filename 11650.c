#include <stdio.h>
#include <algorithm>
//https://blog.naver.com/PostView.nhn?isHttpsRedirect=true&blogId=kyaryunha&logNo=221123641773&parentCategoryNo=&categoryNo=9&viewDate=&isShowPopularPosts=true&from=search
using namespace std;

typedef struct sets {
	int x, y;
}sets;

bool f(sets a, sets b) {
	if (a.x < b.x) {
		return 1;
	}
	if (a.x == b.x && a.y < b.y) {
		return 1;
	}
    return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	sets lists[n];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &lists[i].x, &lists[i].y);
	sort(lists, lists + n, f);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", lists[i].x, lists[i].y);
}
