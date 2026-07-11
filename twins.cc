#include <algorithm>
#include <iostream>
#include <vector>

int main(){
	int n;
	std::vector<int> v;

	std::cin >> n;

	for(int i = 0; i < n; i++){
		int tmp;
		std::cin >> tmp;
		v.push_back(tmp);
	}

	std::sort(v.begin(), v.end(), 
			[](auto a, auto b){return a > b;}
			);

	int mine, his, quantity;
	mine = his = quantity =  0;

	for(const auto x : v){
		his += x;
		std::cout << his << '-' << x << '\n';
	}

	for(const auto x : v)
		if(mine > his){
			break;
		}
		else{
			mine += x;
			his -= x;
			quantity++;
		}

	std::cout << quantity << '\n';

	return 0;
}
