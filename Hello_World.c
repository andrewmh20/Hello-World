#include <stdio.h>

int main(void) {
FILE *fp;
fp = fopen("Hello_World.txt", "w");
fprintf(fp, "Hello World\n");
fclose(fp);

return 0;

}