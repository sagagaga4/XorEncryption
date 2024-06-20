#include <stdio.h>
#include <string.h>

void xor_encrypt_decrypt(char *input, char key) {
    int i;
    int length = strlen(input);
    
    for(i = 0; i < length; i++) {
        input[i] = input[i] ^ key;
    }
}

int main() {
    char text[] = "HELLO";
    char key = 'K';
    
    
    printf("Original Text: %s\n", text);
    

    xor_encrypt_decrypt(text, key);
    printf("Encrypted Text: %s\n", text);
    

    xor_encrypt_decrypt(text, key);
    printf("Decrypted Text: %s\n", text);
    
    return 0;
}