//Find Lexicographic rank of a string
int fact(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int findRank(string str) {
    int n = str.length();
    int rank = 1;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = i + 1; j < n; j++) {
            if(str[i] > str[j]) {
                count++;
            }
        }
        rank += count * fact(n - i - 1);
    }
    return rank;
}
