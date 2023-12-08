#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	vector<int> vec = {0,1,2,3,4,5,6,7,8,9,10,11,0,12};
	vector<int> newvec;

	auto maxelem = max_element(vec.begin(), vec.end());
	int maxIndex = distance(vec.begin(), maxelem);
	cout << "Defoult array" << endl;
	for (auto i = vec.begin(); i != vec.end(); ++i)
	{
		cout << *i<<"\t";
	}
	cout << endl;
	cout << "index of max element: "<<maxIndex << endl;

	auto firstZeroIter = find(vec.begin(), vec.end(), 0);
	auto secondZeroIter = find(firstZeroIter + 1, vec.end(), 0);

	int product = 1;
	for (auto iter = firstZeroIter + 1; iter != secondZeroIter; ++iter) {
		product *= *iter;
	}

	cout << "Dobytok: " << product << endl;

	int count = 0;
	for (auto pm : vec)
	{
		if (count % 2 != 0)
		{
			newvec.push_back(pm);
		}
		count++;
	}
	count = 0;
	for (auto pm : vec)
	{
		if (count % 2 == 0)
		{
			newvec.push_back(pm);
		}
		count++;
	}
	cout << "Array with changes" << endl;
	for (auto i = newvec.begin(); i != newvec.end(); ++i)
	{
		cout << *i<<"\t";
	}
	
	return 0;
}