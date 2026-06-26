#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TOTAL_QUESTIONS 4

typedef struct {
    char question_text[256];
    char options[4][64];
    char correct_option;
} QuizQuestion;

void run_quiz(QuizQuestion quiz[]);
void display_menu();

int main() {
    QuizQuestion quiz[TOTAL_QUESTIONS] = {
        {
            "Which of the following is the correct file extension for a standard C source file?",
            {"A. .cpp", "B. .c", "C. .h", "D. .obj"},
            'B'
        },
        {
            "Which function is used to print output to the console in C?",
            {"A. scanf()", "B. print()", "C. printf()", "D. output()"},
            'C'
        },
        {
            "What is the starting index of an array in C?",
            {"A. 0", "B. 1", "C. -1", "D. Custom"},
            'A'
        },
        {
            "Which keyword is used to prevent a variable from being modified in C?",
            {"A. static", "B. volatile", "C. register", "D. const"},
            'D'
        }
    };

    char choice;
    
    do {
        display_menu();
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        choice = toupper(choice);

        switch(choice) {
            case 'S':
                run_quiz(quiz);
                break;
            case 'Q':
                printf("\nThank you for playing! Goodbye.\n");
                break;
            default:
                printf("\nInvalid option. Please try again.\n");
        }
    } while(choice != 'Q');

    return 0;
}

void display_menu() {
    printf("\n=================================");
    printf("\n       C PROGRAMMING QUIZ        ");
    printf("\n=================================");
    printf("\n [S] Start Quiz");
    printf("\n [Q] Quit");
    printf("\n=================================\n");
}

void run_quiz(QuizQuestion quiz[]) {
    int score = 0;
    char user_answer;

    printf("\n--- Quiz Started! Good Luck! ---\n");

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        printf("\nQuestion %d: %s\n", i + 1, quiz[i].question_text);
        
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        printf("Your answer (A, B, C, or D): ");
        scanf(" %c", &user_answer);
        user_answer = toupper(user_answer); 

        if (user_answer == quiz[i].correct_option) {
            printf("Result: Correct!\n");
            score++;
        } else {
            printf("Result: Incorrect. The correct answer was %c.\n", quiz[i].correct_option);
        }
    }

    // Final score calculation and breakdown
    printf("\n=================================");
    printf("\n           QUIZ OVER             ");
    printf("\n=================================");
    printf("\nYour Final Score: %d out of %d\n", score, TOTAL_QUESTIONS);
    printf("Percentage Score: %.2f%%\n", ((float)score / TOTAL_QUESTIONS) * 100);
    printf("=================================\n");
}
