int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    // If needle is longer than haystack, it's impossible to find it
    if (m > n) return -1;
    if (m == 0) return 0;

    // Use a signed integer for the limit to avoid unsigned underflow
    for (int i = 0; i <= n - m; i++) {
        if (strncmp(haystack + i, needle, m) == 0) {
            return i;
        }
    }

    return -1;
}