#include<iostream>
#include<stack>
using namespace std;
int main() {
 stack<int> original;
 stack<int> sorted;
 original.push(3);
 original.push(1);
 original.push(4);
 original.push(2);
 while (!original.empty()) {
 int temp = original.top();
 original.pop();
 while (!sorted.empty() && sorted.top() > temp) {
 original.push(sorted.top());
 sorted.pop();
 }
 sorted.push(temp);
 }
 cout << "Sorted stack (top to bottom):\n";
 while (!sorted.empty()) {
 cout << sorted.top() << " ";
 sorted.pop();
 }
}