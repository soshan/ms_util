#include <iostream>

namespace ms_print {

template<class T>
void print_array(T a[], int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}


}