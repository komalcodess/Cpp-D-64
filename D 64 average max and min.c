#include <stdio.h>
void seemarks(float marks[], int n){
float sum=0, max=marks[0], min=marks[0];
for(int i=0; i<n; i++){
        sum+=marks[i];
if(marks[i]>max)
max=marks[i];
else if(marks[i]<min)
    min=marks[i];

}
float avg =sum/n;
printf("\nThe average of the marks is: %f", avg);
printf("\nThe maximum marks is: %f", max);
printf("\nThe minimum marks is: %f\n", min);
}
int main(){
int n;
printf("Enter the number of subjects: ");
scanf("%d",&n);

float marks[n];
 printf("Enter marks for each subject:\n");

    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    seemarks(marks, n);


}
