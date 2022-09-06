#include <iostream>
 
using namespace std;
 
int main(){
	
	int n, x, y, m;
	cin >> n;
	
	int l[n+1];
	
	for (int i = 1; i <= n; i++)
		cin >> l[i];
	
	cin >> m;
	while(m--) {
		cin >> x >> y;
		
		if (x - 1)
			l[x-1] += y - 1;
			
		if(x < n)
			l[x+1] += l[x] - y;
			
		l[x] = 0;
	}
	
	for (int i = 1; i <= n; i++)
		cout << l[i] << endl;
 
}
