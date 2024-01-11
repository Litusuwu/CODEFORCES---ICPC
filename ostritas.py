def count_distinct_strings(t, test_cases):
    results = []

    for i in range(t):
        n = test_cases[i][0]
        s = test_cases[i][1]

        # Count occurrences of each character
        char_counts = {}
        for char in s:
            char_counts[char] = char_counts.get(char, 0) + 1

        # Calculate the number of distinct non-empty strings
        total_strings = 1
        for count in char_counts.values():
            total_strings *= (count + 1)

        results.append(total_strings - 1)  # Subtract 1 for the empty string

    return results

# Input parsing
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    s = input()
    test_cases.append((n, s))

# Calculate and print the results
results = count_distinct_strings(t, test_cases)
for result in results:
    print(result)
