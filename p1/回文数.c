int isPalindrome(const char* str, char* pch)
{
    int len = strlen(str);
    int mid = len / 2;

    // 判断是否为回文
    for (int i = 0; i < mid; i++) {
        if (str[i] != str[len - 1 - i]) {
            *pch = '\0';  // 不是回文，不给中间字符
            return 0;
        }
    }

    // 是回文，返回中间字符
    if (len % 2 == 1) {
        *pch = str[mid];  // 奇数长度
    } else {
        *pch = str[mid - 1];  // 偶数长度，取靠前的一个
    }

    return 1;
}