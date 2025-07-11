#include <iostream>
#include <queue>
using namespace std;
void sortQueue(queue<int>& q) {
 int n = q.size();
 for (int i = 0; i < n; i++) {
 int minVal;
 int minIndex = -1;
 int size = q.size();

 // Find the minimum element in the unsorted part
 for (int j = 0; j < size; j++) {
 int current = q.front();
 q.pop();
  if (j == 0 || (j < size - i && current < minVal)) {
 minVal = current;
 minIndex = j;
 }
 q.push(current);
 }
 // Push elements back, but skip the min once
 for (int j = 0; j < size; j++) {
 int current = q.front();
 q.pop();
 if (j != minIndex)
 q.push(current);
 }

 // Push the min value to the rear
 q.push(minVal);
 }
}
int main() {
 queue<int> q;
 q.push(3);
 q.push(1);
 q.push(4);
 q.push(2);
 q.push(5);
 sortQueue(q);
 while (!q.empty()) {
 cout << q.front() << " ";
 q.pop();
 }
 return 0;
}
