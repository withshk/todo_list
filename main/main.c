#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 256

typedef struct {
    int id;
    char content[MAX_LENGTH];
    bool is_completed;
} Todo;

int main(void){

    printf("Todo List 시작\n");

    Todo temp_task = {1, "할 일 예시", false};
    printf("\n[테스트 출력]\n");
    printf("ID: %d | Content: %s | Completed: %d\n", temp_task.id, temp_task.content, temp_task.is_completed);

    return 0;
}