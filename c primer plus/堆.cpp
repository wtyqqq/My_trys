#include<bits/stdc++.h>
using namespace std;
//����һ��С���� 
int heap[4000005] = { 0 };//�࿪�˵�ռ䣬��bug 
int n;
int a;
int aaasize;//�ڵ����� 
void jiaohuan(int a, int b) {
	int zj = heap[a];
	heap[a] = heap[b];
	heap[b] = zj;
	return;
}//���������ڵ��ֵ 
void rudui(int x) {
	int now, next;
	now = aaasize;
	next = now / 2;
	heap[now] = x;
	while (next >= 1) {
		if ((heap[next] > heap[now]) || (heap[next] == 0)) {
			jiaohuan(now, next);
			now = next;
			next /= 2;
		}
		else return;
	}
	return;
}//������� 
void chudui() {
	int zj = heap[1];
	heap[1] = heap[aaasize];
	aaasize--;
	int now, next;
	now = 1;
	while ((now * 2) <= aaasize) {
		next = now * 2;
		if ((next < aaasize) && (heap[next] > heap[next + 1])) next++;
		if (heap[now] <= heap[next]) return;
		jiaohuan(now, next);
		now = next;
	}
	return;
}//���ݳ��� 
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int ob;
		scanf("%d", &ob);
		if (ob == 1) {
			aaasize++;
			scanf("%d", &a);
			rudui(a);
		}
		if (ob == 2) {
			printf("%d\n", heap[1]);
		}
		if (ob == 3) {
			chudui();
		}
	}
	return 0;
}