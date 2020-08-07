#include<iostream>
using namespace std;
void quickSort(int a[], int left, int right) {
	int i, j, temp;
	i = left;
	j = right;
	if (i >= j) {
		return;
	}
	while (i < j) {
		while (i < j && a[j] >= a[left]) {
			j--;
		}
		while (i < j && a[i] <= a[left]) {
			i++;
		}
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

	}
	temp = a[i];
	a[i] = a[left];
	a[left] = temp;
	quickSort(a, left, i - 1);
	quickSort(a, i + 1, right);

}


int main(){

}