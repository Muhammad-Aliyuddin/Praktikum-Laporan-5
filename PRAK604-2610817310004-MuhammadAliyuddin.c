#include <stdio.h>
#include <string.h>

int main() {
    char code[100], message[100];
    char result[100];

    int star = 0;
    int fence = 0;

    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);

    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    int long1 = strlen(code);
    int long2 = strlen(message);

    if (long1 != long2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    
    for (int i = 0; i < long1; i++) {
        if (code[i] == ' ' && message[i] == ' ') {
            result[i] = ' ';
        }
        else if (code[i] == message[i]) {
            result[i] = '*';
            star++;
        } else {
            result[i] = '#';
            fence++;
        }
    }

    result[long1] = '\0';

    printf("%s\n", result);
    printf("*=%d\n", star);
    printf("#=%d\n", fence);

    if (star >= fence) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}
