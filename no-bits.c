#include<stdio.h>
#include<string.h>
char frames[100];
char sendingFrames[1000];
int main() {
int n;
char l[100];
printf("How many frames do you want to send\n");
scanf("%d", &n);
int len;
//int len2 = strlen(sendingFrames);
for(int i = 0; i < n; i++){
printf("Enter the frame %d\n", i + 1);
scanf("%s", frames);
len = strlen(frames);
sprintf(l, "%d", len);
strcat(l, frames);
strcat(sendingFrames, l);

}
printf("Sending frames: \n");
printf("%s\n", sendingFrames);

printf("Received frames\n");
for(int i = 0; i < strlen(sendingFrames); i++) {
int length = sendingFrames[i] - '0';
for(int j = i + 1; j <= (i + length); j++) {
printf("%c", sendingFrames[j]);
}
printf("\n");
i = i + length;
}
return 0;

}