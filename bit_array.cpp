// Bailie Allemand
// Lab07 bit_array
// Due 4.8.2019
// help statement:

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void print_set(vector<int> set) {
	for (int i = 0; i<set.size(); i++) {
		if (set[i] != 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void add_elements(vector<int> &set, int num_elements) {
	int tmp;
	for (int i = 0; i<num_elements; i++) {
		cin >> tmp;
		set[tmp] = 1;
	}
}

//question 3: union and difference functions
void set_union(vector<int> &set1, vector<int> &set2)
{
	int size = 1000000;
	cout << "Union: ";
	for (int i = 0; i<1000000; i++) {
		if (set1[i] || set2[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void set_difference(vector <int> &set1, vector<int> &set2)
{
	int size = 1000000;
	cout << "Difference: ";
	for (int i = 0; i<1000000; i++)
	{
		if (set1[i] != set2[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void set_intersection(vector<int> &set1, vector<int> &set2) {
	int size = 1000000;
	cout << "Intersection: ";
	for (int i = 0; i<1000000; i++) {
		if (set1[i] && set2[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
}

//question 4: list of elements
void add_elements_list(vector<int> &list, int num_elements)
{
	int tmp;
	for (int i = 0; i<num_elements; i++) {
		cin >> tmp;
		list[tmp] += 1;
	}
}

//question 5: print list function
void print_list(vector<int> list)
{
	for (int i = 0; i<list.size(); i++)
	{
		if (list[i] != 0)
		{
			for (int j = 0; j < list[i]; j++)
			{
				cout << i << " ";
			}
		}

	}

}

int main()
{
	int tmp;
	int array_max_size = 1000000;
	int how_many1 = 0;
	int how_many2 = 0;
	cout << "How many elements would you like to insert into set 1?" << endl;
	cin >> how_many1;
	cout << "How many elements would you like to insert into set 2?" << endl;
	cin >> how_many2;
	cout << "Please type " << how_many1 + how_many2 << " integers (press enter after each): " << endl;
	vector<int> set1(array_max_size, 0);
	vector<int> set2(array_max_size, 0);
	add_elements(set1, how_many1);
	add_elements(set2, how_many2);
	print_set(set1);
	print_set(set2);
	set_intersection(set1, set2);
	set_union(set1, set2);
	set_difference(set1, set2);

	cout << endl << "Now, lets create a list.";
	cout << endl << "Type 7 integers (make sure a couple have the same values): " << endl;
	vector<int> list(array_max_size, 0);
	add_elements_list(list, 7);

	print_list(list);

	system("Pause");
}

