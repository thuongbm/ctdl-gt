#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    auto it = v.begin();
//    it++;
    cout << *it<<endl;
    for (auto it=v.begin();it<v.end();it++){
    	cout<<*it<<' ';
	}
	cout<<endl;
	for (auto x: v){
		cout<<x<<' ';
	}
	cout<<endl;
	cout<<v.size()<<endl;
	v.insert(v.begin()+3, 100);
	for (auto x: v){
		cout<<x<<' ';
	}
	cout<<endl;
	v.erase(v.begin()+3);
	for (auto x: v){
		cout<<x<<' ';
	}
    return 0;
}

