#include <bits/stdc++.h>
using namespace std;

int historyDocuments(char* input1) {
    int size = strlen(input1);
    map<int, int> mp;
    int i = 0;
    while (i < size) {
        if (input1[i] == '-' && input1[i + 3] == '-') {
            string s;
            for (int j = i + 4; j < i + 8; j++) {
                if (isdigit(input1[j])) {
                    s.push_back(input1[j]);
                } else {
                    // Handle invalid characters here, e.g., skip them or report an error.
                    // You can also return an error code in case of invalid input.
                    // For now, we'll just skip the invalid characters.
                }
            }
            if (!s.empty()) {
                int val = stoi(s);
                mp[val]++;
            }
            i = i + 8;
        } else {
            i++;
        }
    }
    int new_val = mp.size();
    return new_val;
}
