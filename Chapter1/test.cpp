#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::vector;

//some code skill
#define THRESHOLD_VALUE 1e-9

bool floatIsEqual(float a, float b)
{
	return fabs(a-b) <  THRESHOLD_VALUE;
}

int main()
{
	//how to check float a and float b is equal
	float a = 1.1212;
	float b = 1.1212;
	cout << "a = b is " << std::boolalpha << floatIsEqual(a, b) << endl;

	//multiple dim array
	vector<int> vec(vector<int>(3,0));
	for(auto i : vec){
		cout << i << endl;
	}
	
	vector<vector<int>> array(3, vector<int>(3,0));
	array[0][0] = 1;
	array[1][1] = 2;
	array[2][2] = 3;
	for(auto row : array){
		for(auto i : row){
			cout << i << " ";
		}
		cout << endl;
	}

	//take advantage of reserve, avoid unnecessary reallocate

	vector<int> testVect;
	testVect.reserve(5);
	cout << testVect.size() << " " << testVect.capacity() << endl;
	testVect.emplace_back(1);
	testVect.emplace_back(2);
	testVect.emplace_back(3);
	testVect.emplace_back(4);
	testVect.emplace_back(5);
	cout << testVect.size() << " " << testVect.capacity() << endl;
	testVect.emplace_back(6);
	cout << testVect.size() << " " << testVect.capacity() << endl;




	return 0;
	


}