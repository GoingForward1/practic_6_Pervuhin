//ЗАДАНИЕ 1. МАССИВЫ.
#include <iostream>
using namespace std;
int main() {
	const int n = 4;
	const int m = 4;
	const int k = 2;
	int mtr[n][m];
	srand(time(0));
	cout << "Исходная матрица " << n << "x" << m << ":\n";
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			mtr[i][j] = rand();
			cout << mtr[i][j] << "\t";
		}
	}
	cout << "\n\n\nКвадратные подматрицы "<<k<<"x"<<k<<":";

	for (int q = 0; q <= m - k; q++) {
		for (int p = 0; p <= n - k; p++) {
			cout << "\n\n";
			for (int i = p; i < k + p; i++) {
				cout << "\n";
				for (int j = q; j < k + q; j++) {
					cout << mtr[i][j] << "\t";
				}
			}
		}
	}
	cout << "\n";

}


//ЗАДАЧА 2. СТРОКИ.
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string col{"#f6F601, #000000, #fff, #A8A8A8, #bebebe"};
//	//СПОСОБ БЕЗ std::string::npos.
//	for (int i = 0; col[i]; i++) {
//		if (col[i] == '#') {
//			cout << col.substr(i, col.find(",", i) - i) << "\n";
//		}
//	}
//	 
//	
//	//СПОСОБ С std::string::npos.
//	int i = 0;
//	int l = col.length();
//	while (i < l) {
//		int finish = col.find(",", i);
//		if (finish == std::string::npos) {
//			cout << col.substr(i, l - i);
//			break;
//		}
//		cout << col.substr(i, finish - i) << "\n";
//		i = finish + 2;
//	}
//}