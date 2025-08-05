#include <stdio.h>

int main() {
    // Create a char array to hold 1000 characters
    char utf8Str[1000 * 4];  // Max 4 bytes per UTF-8 character (to handle multibyte characters)

    // Fill the array with UTF-8 encoded characters
    for (int i = 0; i < 1000; i++) {
        // UTF-8 encoding for Greek letters
        if (i % 24 == 0) {
            sprintf(&utf8Str[i * 4], "%s", "α");
        } else if (i % 24 == 1) {
            sprintf(&utf8Str[i * 4], "%s", "β");
        } else {
            sprintf(&utf8Str[i * 4], "%s", "Γ");
        }
    }

    // Print the UTF-8 characters
    printf("%s\n", utf8Str);

    return 0;
}

//#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main() {
//    // Set the locale to UTF-8 to ensure proper handling of wide characters
//    setlocale(LC_CTYPE, "en_US.UTF-8");
//
//    // Create a wide character array to hold 1000 Unicode characters
//    wchar_t unicodeChars[1000];
//
//    // Fill the array with a repeating pattern of Greek letters and symbols
//    for (int i = 0; i < 1000; i++) {
//        unicodeChars[i] = L'α' + (i % 24);  // Example: Filling with Greek letters
//    }
//
//    // Print the wide characters
//    wprintf(L"%ls\n", unicodeChars);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    // Create an array of 1000 characters (you can choose any ASCII characters)
//    char buffer[1000];
//
//    // Fill the array with ASCII characters starting from 'A'
//    for (int i = 0; i < 1000; i++) {
//        buffer[i] = 'A' + (i % 26);  // Wraps around 'A' to 'Z'
//    }
//
//    // Print the characters
//    printf("%s\n", buffer);

//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    // UTF-8 encoded characters as char array
//    char utf8Str[] = "α β Γ π Σ σ µ τ Φ Θ Ω δ ∞ φ ε ∩ ≡ ± ≥ ≤ ⌠ ⌡ ÷ ≈";
//
//    // Print the UTF-8 string
//    printf("%s\n", utf8Str);
//
//    return 0;
//}

////#include <stdio.h>
////#include <stdlib.h>
////
////int main() {
////    // Allocate a buffer of 10 bytes
////    char buffer[256];
////
////    // Fill the buffer with some data
////    for (int i = 0; i < 256; i++) {
////        buffer[i] = 'A' + i; // Fill with ASCII characters A-J
////    }
////
////    // Print the buffer's contents
////    for (int i = 0; i < 256; i++) {
////        printf("%c ", buffer[i]);
////    }
////
////    return 0;
////}
////
//#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main() {
//    // Set the locale to UTF-8 to ensure proper handling of wide characters
//    setlocale(LC_CTYPE, "en_US.UTF-8");
//
//    // UTF-8 characters (wide characters for non-ASCII symbols)
//    wchar_t unicodeChars[] = L"α β Γ π Σ σ µ τ Φ Θ Ω δ ∞ φ ε ∩ ≡ ± ≥ ≤ ⌠ ⌡ ÷ ≈";
//
//    // Print the wide characters
//    wprintf(L"%ls\n", unicodeChars);
//
//    return 0;
//}
