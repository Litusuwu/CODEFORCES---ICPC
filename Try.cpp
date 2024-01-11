#include <iostream>
#include <unordered_map>

using namespace std;

int count_distinct_strings(int t, pair<int, string> test_cases[]) {
    int results[t];

    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;

        // Count occurrences of each character
        unordered_map<char, int> char_counts;
        for (char c : s) {
            char_counts[c]++;
        }

        // Calculate the number of distinct non-empty strings
        long long total_strings = 1;
        for (const auto& kv : char_counts) {
            total_strings *= (kv.second + 1);
        }

        results[i] = total_strings - 1;  // Subtract 1 for the empty string
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    pair<int, string> test_cases[t];
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        test_cases[i] = make_pair(n, s);
    }

    count_distinct_strings(t, test_cases);

    return 0;
}