#include <stdio.h>
int main() {
int count = 0;

for (int i = 1; i <= 6; i++) {
    if (i >= 4) {
        count++;
    }
}

printf("%d", count);
return 0;
}
