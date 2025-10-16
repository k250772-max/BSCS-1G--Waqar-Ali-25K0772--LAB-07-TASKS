#include <stdio.h>

int main() {
    int marks[10];
    int pass_marks[10] = {0};
    int fail_marks[10] = {0};
    int pass_count = 0, fail_count = 0;
    int i;

    printf("Enter marks for 10 students (enter -1 to exit):\n");

    for(i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] == -1) {
            printf("Input terminated by user.\n");
            break;
        }
        
        if (marks[i] >= 5 && marks[i] <= 10) {
            pass_marks[pass_count++] = marks[i];
        }
        else if (marks[i] >= 0 && marks[i] < 5) {
            fail_marks[fail_count++] = marks[i];
        }
        else {
            printf("Invalid mark entered, should be in range 0-10 or -1 to exit.\n");
            i--; 
        }
    }

    
    printf("\nPass marks (5-10): ");
    int pass_sum = 0;
    for(i = 0; i < pass_count; i++) {
        printf("%d ", pass_marks[i]);
        pass_sum += pass_marks[i];
    }

    printf("\nFail marks (0-4): ");
    int fail_sum = 0;
    for(i = 0; i < fail_count; i++) {
        printf("%d ", fail_marks[i]);
        fail_sum += fail_marks[i];
    }

    if(pass_count > 0)
        printf("\nAverage pass marks: %.2f", (float)pass_sum / pass_count);
    else
        printf("\nNo pass marks entered.");

    if(fail_count > 0)
        printf("\nAverage fail marks: %.2f\n", (float)fail_sum / fail_count);
    else
        printf("\nNo fail marks entered.\n");

    return 0;
}
