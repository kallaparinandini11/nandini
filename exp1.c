#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char regno[15];
    char states[5][3] = {"KA", "TN", "AP", "KL", "MH"};
    int i, valid = 0;

    printf("Enter vehicle registration number: ");
    scanf("%14s", regno);

    for (i = 0; regno[i] != '\0'; i++) {
        regno[i] = toupper(regno[i]);
    }

    if (strlen(regno) == 10) {

        // Check state code
        for (i = 0; i < 5; i++) {
            if (regno[0] == states[i][0] &&
                regno[1] == states[i][1]) {
                valid = 1;
                break;
            }
        }

        // Check RTO code
        if (valid && isdigit(regno[2]) && isdigit(regno[3])) {

            // Check series code
            if (isalpha(regno[4]) && isalpha(regno[5])) {

                // Check unique number
                for (i = 6; i < 10; i++) {
                    if (!isdigit(regno[i])) {
                        valid = 0;
                        break;
                    }
                }
            } else {
                valid = 0;
            }
        } else {
            valid = 0;
        }
    }

    if (valid)
        printf("Valid Registration Number");
    else
        printf("Invalid Registration Number");

    return 0;
}