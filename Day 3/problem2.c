// https://www.hackerrank.com/challenges/students-marks-sum/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  if(gender == 'b') {
      int total = 0, i = 0;
      while(i < number_of_students) {
          total += *marks;
          marks += 2;
          i += 2;
      }
      return total;
  } else {
      int total = 0, i = 0;
      marks += 1;
      while(i < number_of_students - 1) {
          total += *marks;
          marks += 2;
          i += 2;
      }
      return total;
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}