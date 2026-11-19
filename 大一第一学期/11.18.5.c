//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node 
//{
//    int data;
//    struct Node* next;
//} Node;
//
//void push_front(Node** head, int value)
//{
//    Node* node = malloc(sizeof(Node));
//    if (node == NULL)
//    {
//        return;
//    }
//
//    node->data = value;
//    node->next = *head;
//    *head = node;
//}
//
//int main(void)
//{
//    Node* head = NULL;
//
//    push_front(&head, 30);
//    push_front(&head, 20);
//    push_front(&head, 10);
//
//    for (Node* current = head; current != NULL; current = current->next) 
//    {
//        printf("%d ", current->data);
//    }
//    printf("\n");
//
//    while (head != NULL) 
//    {
//        Node* next = head->next;
//        free(head);
//        head = next;
//    }
//
//    return 0;
//}