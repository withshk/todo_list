#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 256
#define MAX_TODOS 100

typedef struct {
    int id;
    char content[MAX_LENGTH];
    bool is_completed;
} Todo;

Todo todo_list[MAX_TODOS];
int todo_count = 0;

void create_todo(const char *content) {
    if (todo_count >= MAX_TODOS) {
        printf("에러: 저장 공간이 가득 차서 더 이상 추가할 수 없습니다.\n");
        return;
    }
    todo_list[todo_count].id = todo_count + 1;

    strcpy(todo_list[todo_count].content, content);

    todo_list[todo_count].is_completed = false;

    printf("성공: 할 일이 추가되었습니다. (ID: %d)\n", todo_list[todo_count].id);

    todo_count++;
}

void read_todo(void){
    if(todo_count == 0){
        printf("할 일이 없습니다.\n");
        return;
    }

    printf("\n=========할 일 목록=========\n");
    for (int i = 0; i < todo_count; i++) {
    
        char status_marker = todo_list[i].is_completed ? 'X' : ' ';
    }
}

int main(void){

    printf("Todo List 시작\n");

    Todo temp_task = {1, "할 일 예시", false};
    printf("\n[테스트 출력]\n");
    printf("ID: %d | Content: %s | Completed: %d\n", temp_task.id, temp_task.content, temp_task.is_completed);

    return 0;
}