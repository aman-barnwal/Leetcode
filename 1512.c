#include <stdio.h>
int main() {
int nums[] = {1, 2, 3, 1, 1, 3};
int count = 0;

for(int i = 0; i<6; i++) {
  for(int j=i+1; j<6;j++) {
    if (nums[i] == nums[j]) {
    count++;
    }
   }
  }
  
printf("Total matching number: %d\n", count);
return 0;
}
