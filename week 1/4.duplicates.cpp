// WAP to count all the duplicate elements in an array

#include <iostream>
#include <set>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    int nums;
    vector <int> nums_list;
    set <int> nums_set;
    string input;
    getline(cin, input);
    stringstream inputStream(input);
    while (inputStream >> nums)
    {
        nums_list.push_back(nums);
        nums_set.insert(nums);
    }
    cout << "The number of duplicates: " << nums_list.size() - nums_set.size();

    return 0;
}
