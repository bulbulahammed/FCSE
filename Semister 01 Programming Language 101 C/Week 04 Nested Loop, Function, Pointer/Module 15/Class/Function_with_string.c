#include <stdio.h>
#include <string.h>

// Strin এর সামনে & সাইন দিলেও কাজ করে আবার না দিলেই ইনপুট নেয়, যেহেতু স্ট্রিং নাম মানেই এরের নাম, আর এরে তার প্রথম ইন্ডেক্সের ভ্যালুর এড্রেস ক্যারি করে।

void fun(char s[], int n) // যেহেতু স্ট্রিং এর লেন্থ বের করার বিল্টইন ফাংশন আছে তাই এখেন লেন্থ প্যারামিটার হিসেবে না দিলেও চলে।
{
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}

int main()
{
    char myString[10];
    scanf("%s", &myString);
    fun(myString, 10);
    return 0;
}