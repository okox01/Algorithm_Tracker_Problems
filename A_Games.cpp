#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> uniforms(n);
    for (int i = 0; i < n; ++i) {
        cin >> uniforms[i].first >> uniforms[i].second;
    }
    int conflicts = 0;
    // Check each pair of host and guest teams
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && uniforms[i].first == uniforms[j].second) {
                conflicts++;
            }
        }
    }   
    cout << conflicts << endl;
    return 0;
}
/*Key Differences in Vector Usage

Syntax

Understanding the syntax of different vector types is crucial for effective programming.
Here are the two main types:vector> uniforms(n): This syntax creates a single vector 
that holds pairs of integers. It allows for direct access to the elements using 
the index, such as uniforms[i].
vector> uniforms[n]: This syntax defines an array of vectors, 
where each vector can contain multiple pairs. However, it requires that the size 
n be constant at compile time.

Description

The two types of vectors serve different purposes based on the structure of data 
you need to manage:

Single Vector: The vector> uniforms(n) is ideal when you want a straightforward 
collection of n pairs. This allows for easy manipulation and access 
of the pairs as a single entity.

Array of Vectors: The vector> uniforms[n] is more complex, as it allows for an 
array where each element can hold multiple pairs. This is useful when the number 
of pairs varies across different vectors, but it requires that the size of the 
array be defined at compile time.

Summary

In summary, the choice between these two vector types depends on your 
specific needs:
Use vector> uniforms(n) when you need a single vector containing n pairs.
Opt for vector> uniforms[n] when you require an array of vectors, 
where each vector can hold multiple pairs, and the size n is known at compile time.*/