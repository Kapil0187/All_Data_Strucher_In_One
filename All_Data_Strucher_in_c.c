#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// *******************************************************
// 1. Array
#define MAX 20
int array[MAX], n=0;
void MyArray();
void insertionMyArray();
void displayMyArray();
void deletionMyArray();
void searchingMyArray(); 
void sortingMyArray();
// *******************************************************
// 2. Singly Linked List
void MyList();
void insertAtBeginingMyList(int);
void insertAtPositionMyList();
void insertAtLastMyList(int);
void deleteFromBeginingMyList();
void deleteFromPositionMyList();
void deleteFromLastMyList();
void displayMyList();
int lengthMyList();
int element, pos; 
struct node {
    int data;
    struct node *link;
};
struct node *head = NULL;
// *******************************************************
// 3. Doubly Linked List
void MyDoublyList();
void insertAtBeginingMyDoublyList(int);
void insertAtPositionMyDoublyList();
void insertAtLastMyDoublyList(int);
void deleteFromBeginingMyDoublyList();
void deleteFromPositionMyDoublyList();
void deleteFromLastMyDoublyList();
void displayMyDoublyList();
int lengthMyDoublyList();
struct dnode {
    int data;
    struct dnode *prev, *next;
};
struct dnode *dhead = NULL;
// *******************************************************
// 4. Circular Linked List
void MyCircularList();
void insertAtBeginingMyCircularList(int);
void insertAtPositionMyCircularList();
void insertAtLastMyCircularList(int);
void deleteFromBeginingMyCircularList();
void deleteFromPositionMyCircularList();
void deleteFromLastMyCircularList();
void displayMyCircularList();
int lengthMyCircularList();
struct cnode {
    int data;
    struct cnode *next;
};
struct cnode *tail = NULL;
// *******************************************************
// 5. Array Implementation of Array
#define StackMax 20
int top = -1, stack[StackMax];
void MyArrayStack();
void pushMyArrayStack();
void popMyArrayStack();
void topMyArrayStack();
void displayMyArrayStack();
// *******************************************************
// 6. Linked List Implementation of Stack
#define MaxStack 20
void MyListStack();
void pushMyListStack();
void popMyListStack();
void topMyListStack();
void displayMyListStack();
int lengthMyListStack=0; 
struct snode {
    int data;
    struct snode *link;
};
struct snode *shead = NULL;
// *******************************************************
// 7. Array Implementation of Queue
#define MaxQueue 20
int queue[MaxQueue], front = -1, rear = -1;
void MyArrayQueue();
void enqueueMyArrayQueue();
void dequeueMyArrayQueue();
void displayMyArrayQueue();
// *******************************************************
// 8. Linked List Implementation of Queue
void MyListQueue();
void enqueueMyListQueue();
void dequeueMyListQueue();
void displayMyListQueue();
int lengthMyListQueue=0; 
struct qnode {
    int data;
    struct qnode *link;
};
struct qnode *listfront =NULL, *listrear = NULL;
// *******************************************************
// 9. Array Implementation of Doubly Ended Queue
int deque[MaxQueue];
void MyArrayDeque();
void enqueueAtRearMyArrayDeque();
void dequeueAtFrontMyArrayDeque();
void enqueueAtFrontMyArrayDeque();
void dequeueAtRearMyArrayDeque();
void displayMyArrayDeque();
// *******************************************************
// 10. Stack Implementation of Queue
int stack1[MaxQueue], stack2[MaxQueue];
int top1 = -1, top2 = -1, lengthMyStackQueue = 0;
void MyStackQueue();
void push1MyStackQueue(int element);
void push2MyStackQueue(int element);
int pop1MyStackQueue();
int pop2MyStackQueue();
void enqueueMyStackQueue();
void dequeueMyStackQueue();
void displayMyStackQueue();
// *******************************************************
// 11. Array Implementation of Binary Search Tree
#define MaxBST 30
int bst[MaxBST] = {0}, lengthMyBST = 0;
void MyArrayBST();
void insertMyArrayBST();
void displayMyArrayBST();
// *******************************************************
// 12. Linked List Implementation of Binary Search Tree
void MyListBST();
void insertMyListBST();
void displayMyListBST();
void preorderTraversalMyListBST();
void inorderTraversalMyListBST();
void postorderTraversalMyListBST();
struct bstNode {
    int data;
    struct bstNode *left, *right;
};
struct bstNode *root = NULL;
// *******************************************************

int main() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                 All Data Structures in One Program               |");
        printf("\n|                                                                  |");
        printf("\n|   1.  Array Implementation                                       |");
        printf("\n|   2.  Linked List Implementation                                 |");
        printf("\n|   3.  Stack Implementation                                       |");
        printf("\n|   4.  Queue Implementation                                       |");
        printf("\n|   5.  Binary Search Tree Implementation                          |");
        printf("\n|   6.  Exit                                                       |");
        printf("\n ------------------------------------------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {                                     
            case 1:
                MyArray();
                break;
            case 2:
                do {
                    printf("\n ------------------------------------------------------------------");
                    printf("\n|                   Linked List Implementation                     |");
                    printf("\n|                                                                  |");
                    printf("\n|   1.  Singly Linked List  Implementation                         |");
                    printf("\n|   2.  Doubly Linked List  Implementation                         |");
                    printf("\n|   3.  Circular Linked List  Implementation                       |");
                    printf("\n|   4.  Exit                                                       |");
                    printf("\n ------------------------------------------------------------------");
                    printf("\nEnter your choice: ");
                    scanf("%d",&choice);
                    switch (choice) {
                        case 1:
                            MyList();
                            break;
                        case 2:
                            MyDoublyList();
                            break;
                        case 3:
                            MyCircularList();
                            break;
                        case 4:
                            printf("Exited successfully!\n");
                            break;
                        default:
                            printf("Invalid choice!\n");
                            break;
                    }
                } while (choice != 4);
                break;
            case 3:
                do {
                        printf("\n ------------------------------------------------------------------");
                        printf("\n|                      Stack Implementation                        |");
                        printf("\n|                                                                  |");
                        printf("\n|   1.  Array Implementation of Stack                              |");
                        printf("\n|   2.  Linked List Implementation of Stack                        |");
                        printf("\n|   3.  Exit                                                       |");
                        printf("\n ------------------------------------------------------------------");
                        printf("\nEnter your choice: ");
                        scanf("%d",&choice);
                        switch (choice) {
                            case 1:
                                MyArrayStack();
                                break;
                            case 2:
                                MyListStack();
                                break;
                            case 3:
                                printf("Exited successfully!\n");
                                break;
                            default:
                                printf("Invalid choice!\n");
                                break;
                        }
                } while (choice != 3);
                break;
            case 4:
                do {
                    printf("\n ------------------------------------------------------------------");
                    printf("\n|                      Queue Implementation                        |");
                    printf("\n|                                                                  |");
                    printf("\n|   1.  Array Implementation of Queue                              |");
                    printf("\n|   2.  Linked List Implementation of Queue                        |");
                    printf("\n|   3.  Array Implementation of Doubly Ended Queue (Deque)         |");
                    printf("\n|   4.  Stack Implementation of Queue                              |");
                    printf("\n|   5.  Exit                                                       |");
                    printf("\n ------------------------------------------------------------------");
                    printf("\nEnter your choice: ");
                    scanf("%d",&choice);
                    switch (choice) {
                        case 1:
                            MyArrayQueue();
                            break;
                        case 2:
                            MyListQueue();
                            break;
                        case 3:
                            MyArrayDeque();
                            break;
                        case 4:
                            MyStackQueue();
                            break;
                        case 5:
                            printf("Exited successfully!\n");
                            break;
                        default:
                            printf("Invalid choice!\n");
                            break;
                    }
                } while (choice != 5);
                break;
            case 5:
                do {
                    printf("\n ------------------------------------------------------------------");
                    printf("\n|                 Binary Search Tree Implementation                |");
                    printf("\n|                                                                  |");
                    printf("\n|   1.  Array Implementation of BST                                |");
                    printf("\n|   2.  Linked List Implementation of BST                          |");
                    printf("\n|   3.  Exit                                                       |");
                    printf("\n ------------------------------------------------------------------");
                    printf("\nEnter your choice: ");
                    scanf("%d",&choice);
                    switch (choice) {
                        case 1:
                            MyArrayBST();
                            break;
                        case 2:
                            MyListBST();
                            break;
                        case 3:
                            printf("Exited successfully!\n");
                            break;
                        default:
                            printf("Invalid choice!\n");
                            break;
                    }
                } while (choice != 3);
                break;
            case 6:
                printf("Exited successfully!\nDeveloped By:  ");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 6);
    return 0;
}

// 1. Array
void MyArray()
{
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                     Array Implementation                         |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Searching\n5. Sorting\n6. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                       
            case 1:
                insertionMyArray();
                break;
            case 2:
                deletionMyArray();
                break;
            case 3:
                displayMyArray();
                break;
            case 4:
                searchingMyArray();
                break;
            case 5:                                                      
                sortingMyArray();
                break;
            case 6:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 6);
}
void insertionMyArray() {
    if(n == MAX-1) {                              
        printf("Array is Full!\n");
        return;
    }

    if(n == 0) {                                // Insertion in empty array
        printf("Enter the size of array: ");
        scanf("%d",&n);
        printf("Enter the elements:\n");
        for(int i=0; i<n; i++) {
            scanf("%d",&array[i]);
        }
        printf("Elements inserted successfully!\n");
        return;
    }

    int element, pos;
    printf("Enter the element: ");              // Insertion at given position
    scanf("%d",&element);
    
    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while (pos<=0 || pos>n+1);

    pos--;
    for(int i=n; i>pos; i--) {
        array[i]=array[i-1];
    }                                            
    array[pos]=element;
    n++;
    printf("Element inserted successfully!\n");
}
void deletionMyArray() {
    int pos;
    if(n == 0) {
        printf("Empty Array!\n");
        return;
    }       
                                                  
    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while (pos<=0 || pos>n);

    pos--;
    printf("Element %d deleted successfully!\n",array[pos]);
    for(int i=pos; i<n; i++) {
        array[i]=array[i+1];
    }
    n--;
}
void displayMyArray() {
    if(n == 0) {
        printf("Empty Array!\n");
        return;
    }                                       
                                                                                       
    printf("Elements of the array: ");
    for(int i=0; i<n; i++) {
        printf("%d  ",array[i]);
    }
    printf("\n");
}
void searchingMyArray() {
    if(n == 0) {
        printf("Empty Array!\n");
        return;
    }

    int element, condition=0;
    printf("Enter the element: ");              // Searching the element
    scanf("%d",&element);
    for(int i=0; i<n; i++) {
        if(element == array[i]){
            printf("Element found in the array at position %d\n",i+1);
            condition=1;
            break;
        }
    }                                                       
    if(condition == 0){
        printf("Element not found in the array\n");
    }
}
void sortingMyArray() {
    if(n == 0) {
        printf("Empty Array!\n");
        return;
    }
                                                 
    for(int i=0; i<n-1; i++) {                  // Using Bubble Sort
        for(int j=0; j<n-1; j++) {
            if(array[j]>array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("Array is Sorted!\n");
    displayMyArray();
}

// 2. Singly Linked List
void MyList() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                Singly Linked List Implementation                 |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Total Elements\n5. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertAtPositionMyList();
                break;
            case 2:
               deleteFromPositionMyList();
                break;
            case 3:
                displayMyList();
                break;
            case 4:
                printf("Total elements: %d\n",lengthMyList());
                break;
            case 5:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 5);
}
void insertAtPositionMyList() {
    struct node *newP=malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d",&element);
    if(head == NULL) {
        newP->data = element;
        newP->link = NULL;
        head = newP;
        printf("Element inserted successfully!\n");
        return;                                  
    }

    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyList()+1);
        
    if(pos == 1) {                              // Insertition at front(1st position)
        insertAtBeginingMyList(element);
        return;
    }

    if(pos == lengthMyList()+1) {               // Insertition at last(last position)
        insertAtLastMyList(element);
        return;
    }

    struct node *temp = head;                   // Insertion at given position         
    int i=1;
    while(i<pos-1) {
        temp = temp->link;
        i++;
    }                                                      
    newP->data = element;
    newP->link = temp->link;
    temp->link = newP;
    printf("Element inserted successfully!\n");
}
void insertAtBeginingMyList(int element) {
    struct node *newP = malloc(sizeof(struct node));
    newP->data = element;
    newP->link = head;                                
    head = newP;
    printf("Element inserted successfully!\n");
}
void insertAtLastMyList(int element) {
    struct node *newP = malloc(sizeof(struct node));
    struct node *temp = head;
                                              
    newP->data = element;
    newP->link = NULL;
    while(temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = newP;
    printf("Element inserted successfully!\n");
}
void deleteFromPositionMyList() {
    if(head == NULL) {
        printf("Empty Linked List!\n");
        return;
    }
                                             
    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyList());
        
    if(pos == 1) {                          // Deletion from front(1st position)
        deleteFromBeginingMyList();
        return;
    }

    if(pos == lengthMyList()) {             // Deletion from last(last position)
        deleteFromLastMyList();
        return;
    }

    struct node *position = malloc(sizeof(struct node));
    struct node *temp = head;
    int i=1;                                // Deletion from given position
    while(i<pos-1) {
        temp = temp->link;
        i++;
    }
    position = temp->link;                           
    temp->link = position->link;
    printf("Element %d deleted successfully!\n",position->data);
    free(position);
}
void deleteFromBeginingMyList() {
    struct node *temp = head;
    printf("Element %d deleted successfully!\n",temp->data);
    head = head->link;
    free(temp);                               
}
void deleteFromLastMyList() {
    struct node *temp = head, *position=malloc(sizeof(struct node));
    int i = 1;
    while(i < lengthMyList()-1) {
        temp = temp->link;
        i++;
    }                                         
    position  = temp->link;
    temp->link = NULL;
    printf("Element %d deleted successfully!\n", position->data);
    free(position);
}
int lengthMyList() {
    if(head == NULL) {
        printf("Linked List is Empty!\n");
        return 0;                           // Returns 0 if linked list is empty
    }
    struct node *temp = head;
    int size = 0;                             
    while(temp != NULL) {
        temp = temp->link;
        size++;
    }
    return size;                            // Returns the length(total elements) of the linked list
}
void displayMyList() {
    if(head == NULL) {                      // Checks whether linked list is empty or not
        printf("Linked List is Empty!\n");
        return;
    }                                           
    struct node *temp = head;
    printf("Linked List: ");
    while(temp != NULL) {                   // Prints the linked list
        printf("%d  ",temp->data);
        temp = temp->link;
    }                                        
    printf("\n");
}

// 3. Doubly Linked List
void MyDoublyList() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                 Doubly Linked List Implementation                |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Total Elements\n5. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertAtPositionMyDoublyList();
                break;
            case 2:
               deleteFromPositionMyDoublyList();
                break;
            case 3:
                displayMyDoublyList();
                break;
            case 4:
                printf("Total elements: %d\n",lengthMyDoublyList());
                break;
            case 5:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 5);
}
void insertAtPositionMyDoublyList() {
    struct dnode *newP=malloc(sizeof(struct dnode));
    printf("Enter the element: ");
    scanf("%d",&element);
    if(dhead == NULL) {
        newP->data = element;
        newP->prev = NULL;
        newP->next = NULL;
        dhead = newP;
        printf("Element inserted successfully!\n");
        return;                                   
    }

    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyDoublyList()+1);
        
    if(pos == 1) {                              // Insertition at front(1st position)
        insertAtBeginingMyDoublyList(element);
        return;
    }

    if(pos == lengthMyDoublyList()+1) {               // Insertition at last(last position)
        insertAtLastMyDoublyList(element);
        return;
    }

    struct dnode *temp = dhead;                   // Insertion at given position         
    int i=1;
    while(i<pos-1) {
        temp = temp->next;
        i++;
    }                                                      
    newP->data = element;
    newP->prev = temp;
    newP->next = temp->next;
    temp->next = newP;
    printf("Element inserted successfully!\n");
}
void insertAtBeginingMyDoublyList(int element) {
    struct dnode *newP = malloc(sizeof(struct dnode));
    newP->data = element;
    newP->prev = NULL;
    newP->next = dhead;                               
    dhead->prev = newP;
    dhead = newP;
    printf("Element inserted successfully!\n");
}
void insertAtLastMyDoublyList(int element) {
    struct dnode *newP = malloc(sizeof(struct dnode));
    struct dnode *temp = dhead;
                                            
    newP->data = element;
    newP->next = NULL;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newP;
    newP->prev = temp;
    printf("Element inserted successfully!\n");
}
void deleteFromPositionMyDoublyList() {
    if(dhead == NULL) {
        printf("Empty Linked List!\n");
        return;
    }
                                            
    if(lengthMyDoublyList() == 1) {
        struct dnode *temp = dhead;
        printf("Element %d deleted successfully!\n", temp->data);
        dhead = NULL;
        free(temp);
        return;
    }   

    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyDoublyList());
        
    if(pos == 1) {                           // Deletion from front(1st position)
        deleteFromBeginingMyDoublyList();
        return;
    }

    if(pos == lengthMyDoublyList()) {             // Deletion from last(last position)
        deleteFromLastMyDoublyList();
        return;
    }

    struct dnode *position = malloc(sizeof(struct dnode));
    struct dnode *temp = dhead;
    int i=1;                                // Deletion from given position
    while(i<pos-1) {
        temp = temp->next;
        i++;
    }
    position = temp->next;                            
    temp->next = position->next;
    (position->next)->prev = temp;
    printf("Element %d deleted successfully!\n",position->data);
    free(position);
}
void deleteFromBeginingMyDoublyList() {
    struct dnode *temp = dhead;
    printf("Element %d deleted successfully!\n",temp->data);
    dhead = dhead->next;
    dhead->prev = NULL;
    free(temp);                               
}
void deleteFromLastMyDoublyList() {
    struct dnode *temp = dhead, *position=malloc(sizeof(struct dnode));
    int i = 1;
    while(i < lengthMyDoublyList()-1) {
        temp = temp->next;
        i++;
    }                                         
    position  = temp->next;
    temp->next = NULL;
    printf("Element %d deleted successfully!\n", position->data);
    free(position);
}
int lengthMyDoublyList() {
    if(dhead == NULL) {
        printf("Linked List is Empty!\n");
        return 0;                           // Returns 0 if linked list is empty
    }
    struct dnode *temp = dhead;
    int size = 0;                           
    while(temp != NULL) {
        temp = temp->next;
        size++;
    }
    return size;                            // Returns the length(total elements) of the linked list
}
void displayMyDoublyList() {
    if(dhead == NULL) {                      // Checks whether linked list is empty or not
        printf("Linked List is Empty!\n");
        return;
    }                                           
    struct dnode *temp = dhead;
    printf("Linked List: ");
    while(temp != NULL) {                   // Prints the linked list
        printf("%d  ",temp->data);
        temp = temp->next;
    }                                       
    printf("\n");
}

// 4. Circular Linked List
void MyCircularList() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                Circular Linked List Implementation               |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Total Elements\n5. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertAtPositionMyCircularList();
                break;
            case 2:
               deleteFromPositionMyCircularList();
                break;
            case 3:
                displayMyCircularList();
                break;
            case 4:
                printf("Total elements: %d\n",lengthMyCircularList());
                break;
            case 5:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 5);
}
void insertAtPositionMyCircularList() {
    struct cnode *newP=malloc(sizeof(struct cnode));
    printf("Enter the element: ");
    scanf("%d",&element);
    if(tail == NULL) {
        newP->data = element;
        newP->next = newP;
        tail = newP;
        printf("Element inserted successfully!\n");
        return;                                  
    }

    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyCircularList()+1);
        
    if(pos == 1) {                               // Insertition at front(1st position)
        insertAtBeginingMyCircularList(element);
        return;
    }

    if(pos == lengthMyCircularList()+1) {        // Insertition at last(last position)
        insertAtLastMyCircularList(element);
        return;
    }

    struct cnode *temp = tail->next;              // Insertion at given position         
    int i=1;
    while(i<pos-1) {
        temp = temp->next;
        i++;
    }                                                        
    newP->data = element;
    newP->next = temp->next;
    temp->next = newP;
    printf("Element inserted successfully!\n");
}
void insertAtBeginingMyCircularList(int element) {
    struct cnode *newP = malloc(sizeof(struct cnode));
    newP->data = element;
    newP->next = tail->next;                               
    tail->next = newP;
    printf("Element inserted successfully!\n");
}
void insertAtLastMyCircularList(int element) {
    struct cnode *newP = malloc(sizeof(struct cnode));
    newP->data = element;
    newP->next = tail->next;
                                              
    tail->next = newP;
    tail = newP;
    printf("Element inserted successfully!\n");
}
void deleteFromPositionMyCircularList() {
    if(tail == NULL) {
        printf("Empty Linked List!\n");
        return;
    }
                                            
    if(lengthMyCircularList() == 1) {
        printf("Element %d deleted successfully!\n",tail->data);
        tail = NULL;
        return;
    }

    do {
        printf("Enter the valid position: ");
        scanf("%d",&pos);
    } while(pos<=0 || pos>lengthMyCircularList());
        
    if(pos == 1) {                          // Deletion from front(1st position)
        deleteFromBeginingMyCircularList();
        return;
    }

    if(pos == lengthMyCircularList()) {     // Deletion from last(last position)
        deleteFromLastMyCircularList();
        return;
    }

    struct cnode *position = malloc(sizeof(struct cnode));
    struct cnode *temp = tail->next;
    int i=1;                                // Deletion from given position
    while(i<pos-1) {
        temp = temp->next;
        i++;
    }
    position = temp->next;                          
    temp->next = position->next;
    printf("Element %d deleted successfully!\n",position->data);
    free(position);
}
void deleteFromBeginingMyCircularList() {
    struct cnode *temp = tail->next;
    printf("Element %d deleted successfully!\n",temp->data);
    tail->next = temp->next;
    free(temp);                               
}
void deleteFromLastMyCircularList() {
    struct cnode *temp = tail->next, *position=malloc(sizeof(struct cnode));
    int i = 1;
    while(i < lengthMyCircularList()-1) {
        temp = temp->next;
        i++;
    }                                        
    position  = temp->next;
    temp->next = tail->next;
    tail = temp;
    printf("Element %d deleted successfully!\n", position->data);
    free(position);
}
int lengthMyCircularList() {
    if(tail == NULL) {
        printf("Linked List is Empty!\n");
        return 0;                           // Returns 0 if Linked list is empty
    }
    struct cnode *temp = tail->next;
    int size = 0;                             
    do {
        temp = temp->next;
        size++;
    } while(temp != tail->next);
    return size;                            // Returns the length(total elements) of the Linked list
}
void displayMyCircularList() {
    if(tail == NULL) {                      // Checks whether Linked list is empty or not
        printf("Linked List is Empty!\n");
        return;
    }                                           
    struct cnode *temp = tail->next;
    printf("Linked List: ");                 // Prints the Linked list

    do {
        printf("%d  ",temp->data);
        temp = temp->next;
    } while(temp != tail->next);
    printf("\n");
}

// 5. Array implementation of Stack
void MyArrayStack() {
    int choice;
    do {
        printf("\n ------------------------------------------------------------------");
        printf("\n|                Array Implementation of Queue                     |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Top Element\n5. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                          
            case 1:
                pushMyArrayStack();
                break;
            case 2:
                popMyArrayStack();
                break;
            case 3:
                displayMyArrayStack();
                break;
            case 4:
                topMyArrayStack();
                break;
            case 5:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 5);                                         
}
void pushMyArrayStack() {
    if(top == StackMax-1) {
        printf("Stack OverFlow!\n");
        return;
    }
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    stack[++top] = element;
    printf("Element pushed on the top of stack successfully!\n");
}                                                                
void popMyArrayStack() {
    if(top == -1) {
        printf("Empty Stack!\n");
        return;
    }
    printf("Element %d poped successfully!\n", stack[top--]);
}                                                                
void topMyArrayStack() {
    if(top == -1) {
        printf("Empty Stack!\n");
        return;
    }
    printf("Stack Top: %d\n", stack[top]);
}                                                                 
void displayMyArrayStack() {
    if(top == -1) {
        printf("Empty Stack!\n");
        return;
    }
    printf("Stack is:\n");
    for (int i=top; i>=0; i--)
        printf("|\t%d\t|\n", stack[i]);
    printf(" ---------------");
}                                                                  

// 6. Linked List Implementation of Stack
void MyListStack() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|              Linked List Implementation of Stack                 |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Top Element\n5. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                         
            case 1:
                pushMyListStack();
                break;
            case 2:
                popMyListStack();
                break;
            case 3:
                displayMyListStack();
                break;
            case 4:
                topMyListStack();
                break;
            case 5:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 5);
}
void pushMyListStack() {
    if(lengthMyListStack == MaxStack) {
        printf("Stack OverFlow!\n");
        return;
    }
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    struct snode *newP = malloc(sizeof(struct snode));
    newP->data = element;
    newP->link = shead;                                                       
    shead = newP;
    printf("Element pushed on the top of stack successfully!\n");
    lengthMyListStack++;
}
void popMyListStack() {
    if(shead == NULL) {
        printf("Empty Stack!\n");
        return;
    }
    struct snode *temp = shead;
    printf("Element %d poped from the stack successfully!\n", temp->data);
    shead = shead->link;
    free(temp);
    lengthMyListStack--;
}
void displayMyListStack() {
    if(shead == NULL) {
        printf("Empty Stack!\n");
        return;
    }
    struct snode *temp = shead;
    printf("Stack is:\n");
    while(temp != NULL) {
        printf("|\t%d\t|\n", temp->data);
        temp = temp->link;
    }
    printf(" ---------------");
}
void topMyListStack() {
    if(shead == NULL) {
        printf("Empty Stack!\n");
        return;
    }
    printf("Stack Top: %d\n", shead->data);    
}

// 7. Array Implementation of Queue
void MyArrayQueue() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                 Array Implementation of Queue                    |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                          
            case 1:
                enqueueMyArrayQueue();
                break;
            case 2:
                dequeueMyArrayQueue();
                break;
            case 3:
                displayMyArrayQueue();
                break;
            case 4:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 4);
}
void enqueueMyArrayQueue() {
    if(front == MaxQueue-1) {
        printf("Queue OverFlow!\n");
        return;
    }
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    if(front == -1 && rear == -1) {
        front++;
        queue[++rear] = element;
        printf("Element inserted successfully!\n");
        return;
    }
    queue[++rear] = element;
    printf("Element inserted successfully!\n");
}
void dequeueMyArrayQueue() {
    if(front == -1) {
        printf("Empty Queue!\n");
        return;
    }
    if(front == rear) {
        printf("Deleted element is: %d\n", queue[front]);
        front = -1;
        rear = -1;
        return;
    }
    printf("Deleted element is: %d\n", queue[front++]);
}
void displayMyArrayQueue() {
    if(front == -1) {
        printf("Empty Queue!\n");
        return;
    }
    printf("Queue is: ");
    for(int i=front; i<=rear; i++) {
        printf("%d  ",queue[i]);
    }
    printf("\n");
}

// 8. Linked List Implementation of Queue
void MyListQueue() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|              Linked List Implementation of Queue                 |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                          
            case 1:
                enqueueMyListQueue();
                break;
            case 2:
                dequeueMyListQueue();
                break;
            case 3:
                displayMyListQueue();
                break;
            case 4:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 4);
}
void enqueueMyListQueue() {
    if(lengthMyListQueue == MaxQueue) {
        printf("Queue OverFlow!\n");
        return;
    }
    
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    
    struct qnode *newP = malloc(sizeof(struct qnode));
    newP->data = element;                                               
    newP->link = NULL;
    
    if(listfront == NULL) {
        listrear = newP;
        listfront = newP;
        printf("Element inserted in the queue successfully!\n");
        lengthMyListQueue++;
        return;
    } 
    listrear->link = newP;
    listrear = newP;
    printf("Element inserted in the queue successfully!\n");
    lengthMyListQueue++;
}
void dequeueMyListQueue() {
    if(listfront == NULL) {
        printf("Empty Queue!\n");
        return;
    }

    struct qnode *temp = listfront;
    printf("Element %d deleted from the queue successfully!\n", temp->data);
    listfront = listfront->link;
    free(temp);
    lengthMyListQueue--;
}
void displayMyListQueue() {
    if(listfront == NULL) {
        printf("Empty Queue!\n");
        return;
    }

    struct qnode *temp = listfront;
    printf("Queue is: ");
    while(temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

// 9. Array implementation of Doubly Ended Queue Deque
void MyArrayDeque() {
    int choice;
    do
    {
        printf("\n ------------------------------------------------------------------");
        printf("\n|       Array Implementation of Doubly Ended Queue (Deque)         |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1: Insertion at rear\n2: Insertion at front\n3: Deletion from front\n4: Deletion from rear\n5: Display\n6: Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueueAtRearMyArrayDeque();
                break;
            case 2:
                enqueueAtFrontMyArrayDeque();
                break;
            case 3:
                dequeueAtFrontMyArrayDeque();
                break;
            case 4:
                dequeueAtRearMyArrayDeque();
                break;
            case 5:
                displayMyArrayDeque();
                break;
            case 6:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 6);
}
void enqueueAtRearMyArrayDeque() {
    if(rear == MaxQueue-1) {
        printf("Queue OverFlow!\n");
        return;
    }
    
    printf("Enter the element: ");
    scanf("%d",&element);

    if(front == -1 && rear == -1) {
        front++;
        printf("Element inserted successfully at the end of Queue!\n");
        deque[++rear]=element;
        return;
    }
    deque[++rear]=element;
    printf("Element inserted successfully at the end of Queue!\n");
}
void dequeueAtFrontMyArrayDeque() {
    if(front == -1 && rear == -1) {
        printf("Empty Queue!\n");
        return;
    }
    if(front == rear) {
        printf("Deleted element is: %d\n",deque[front]);
        front = -1;
        rear = -1;
        return;
    }
    printf("Deleted element is: %d\n",deque[front++]);
}
void enqueueAtFrontMyArrayDeque() {
    if(rear == MaxQueue-1) {
        printf("Queue OverFlow!\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &element);
    
    if(front == -1 && rear == -1) {
        rear++;
        deque[++front] = element;
        printf("Element inserted successfully at the front of Queue!\n");
        return;
    }

    for (int i = rear; i >= front; i--) {
        deque[i+1]=deque[i];
    }
    deque[front]=element;
    rear++;
    printf("Element inserted successfully at the front of Queue!\n");
}
void dequeueAtRearMyArrayDeque() {
    if(front == -1 && rear == -1) {
        printf("Empty Queue!\n");
        return;
    }
    printf("Deleted element is: %d\n",deque[rear--]);
    if(front == rear+1) {
        front = -1;
        rear = -1;
    }
}
void displayMyArrayDeque() {
    if(front == -1 && rear == -1) {
        printf("Empty Queue!\n");
        return;
    }
    printf("Deque is: ");
    for(int i = front; i <= rear;i++) {
        printf("%d ",deque[i]);
    }
    printf("\n");
}

// 10. Stack implementation of Queue
void MyStackQueue() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|                 Stack Implementation of Queue                    |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                         
            case 1:
                enqueueMyStackQueue();
                break;
            case 2:
                dequeueMyStackQueue();
                break;
            case 3:
                displayMyStackQueue();
                break;
            case 4:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 4);
}
void push1MyStackQueue(int element) {
    stack1[++top1] = element;
}
void push2MyStackQueue(int element) {
    stack2[++top2] = element;
}
int pop1MyStackQueue() {
    return stack1[top1--];
}
int pop2MyStackQueue() {
    return stack2[top2--];
}
void enqueueMyStackQueue() {
    if(top1 == MaxQueue-1) {
        printf("Queue OverFlow!\n");
        return;
    }

    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    push1MyStackQueue(element);
    lengthMyStackQueue++;
    printf("Element inserted successfully!\n");
}
void dequeueMyStackQueue() {
    if(top1 == -1 && top2 == -1) {
        printf("Empty Queue!\n");
        return;
    }
    for(int i=0; i<lengthMyStackQueue; i++) {
        push2MyStackQueue(pop1MyStackQueue());
    }
    printf("Deleted Element is: %d\n",pop2MyStackQueue());
    lengthMyStackQueue--;
    for(int i=0; i<lengthMyStackQueue; i++) {
        push1MyStackQueue(pop2MyStackQueue());
    }
}
void displayMyStackQueue() {
    if(lengthMyStackQueue == 0) {
        printf("Empty Queue!\n");
        return;
    }
    printf("Queue is: ");
    for(int i=0; i<lengthMyStackQueue; i++) {
        printf("%d  ",stack1[i]);
    }
    printf("\n");
}

// 11. Array implementation of BST
void MyArrayBST() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|          Array Implementation of Binary Search Tree              |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                         
            case 1:
                insertMyArrayBST();
                break;
            case 2:
                displayMyArrayBST();
                break;
            case 3:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 3);
}
void insertMyArrayBST() {
    int element;
    printf("Enter the element: ");
    scanf("%d", &element);
    if(bst[1] == 0) {                                             
        bst[1] = element;
        printf("Element inserted successfully!\n");
        lengthMyBST++;
        return;
    }
    int i=1;
    while(i<MaxBST) {
        if (element <= bst[i]) {
            if(bst[2*i] == 0) {
                bst[2*i] = element;
                printf("Element inserted successfully!\n");
                lengthMyBST++;
                break;                                               
            } else {
                i = 2*i;
            }
        } else {
            if(bst[2*i+1] == 0) {
                bst[2*i+1] = element;
                printf("Element inserted successfully!\n");
                lengthMyBST++;
                break;
            } else {                                                
                i= 2*i+1;
            }
        }
    }
}
void displayMyArrayBST() {
    if(bst[1] ==  0) {
        printf("Empty Tree!\n");
        return;
    }
    printf("BST is: ");
    for(int i=1; i<=(pow(2,lengthMyBST)-1); i++) {                  
        printf("%d  ",bst[i]);
    }
    printf("\n");
}

// 12. Linked List implementation of BST
void MyListBST() {
    int choice;
    do{
        printf("\n ------------------------------------------------------------------");
        printf("\n|               Linked List Implementation of BST                  |");
        printf("\n ------------------------------------------------------------------");
        printf("\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {                                                         
            case 1:
                insertMyListBST();
                break;
            case 2:
                displayMyListBST();
                break;
            case 3:
                printf("Exited successfully!\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice != 3);
}                                                                  
void insertMyListBST() {
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    struct bstNode *newP = malloc(sizeof(struct bstNode));
    newP->data = element;
    newP->left = NULL;
    newP->right = NULL;

    if(root == NULL) {
        root = newP;
        printf("Element inserted successfully!\n");
        return;
    }

    struct bstNode *temp = root;
    while(temp != NULL) {
        if(element <= temp->data) {
            if(temp->left == NULL) {
                temp->left = newP;
                printf("Element inserted successfully!\n");
                return;
            } else {
                temp = temp->left;
            }
        } else {
            if(temp->right == NULL) {
                temp->right = newP;
                printf("Element inserted successfully!\n");
                return;
            } else {
                temp = temp->right;
            }
        }
    }
}
void displayMyListBST() {
    if(root == NULL) {
        printf("Empty Binary Search Tree!\n");
        return; 
    }
    struct bstNode *temp = root;
    printf("Preorder Traversal of Binary Search Tree is:");
    preorderTraversalMyListBST(temp);   
    printf("\n");

    printf("Inorder Traversal of Binary Search Tree is:");
    inorderTraversalMyListBST(temp);   
    printf("\n"); 

    printf("Postorder Traversal of Binary Search Tree is:");
    postorderTraversalMyListBST(temp);
    printf("\n"); 
}
void preorderTraversalMyListBST(struct bstNode *temp) {
    if(temp == NULL)
        return;
    printf("%d ", temp->data);
    preorderTraversalMyListBST(temp->left);
    preorderTraversalMyListBST(temp->right);
}
void inorderTraversalMyListBST(struct bstNode *temp) {
    if(temp == NULL)
        return;
    inorderTraversalMyListBST(temp->left);
    printf("%d ", temp->data);
    inorderTraversalMyListBST(temp->right);
}
void postorderTraversalMyListBST(struct bstNode *temp) {
    if(temp == NULL)
        return;
    postorderTraversalMyListBST(temp->left);
    postorderTraversalMyListBST(temp->right);
    printf("%d ", temp->data);
}