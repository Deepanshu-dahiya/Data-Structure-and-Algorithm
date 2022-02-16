### Linked List
A linked list is a sequence of data structures, which are connected together via links. Linked List is a sequence of links which contains items.
Link − Each link of a linked list can store a data called an element. Next − Each link of a linked list contains a link to the next link called Next.

struct node  
{  
int data;  
struct node *next;  
} 

![l1](https://user-images.githubusercontent.com/66161514/154308464-51f8f67f-1ee1-4498-99b4-9ffa588408ed.png)


### Circular Linked List
Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.

![l2](https://user-images.githubusercontent.com/66161514/154309626-5a5ef907-f900-4fb5-8583-dc5ff95ed600.jpg)

### Doubly Linked List
Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer).

struct node   
{  
    struct node *prev;   
    int data;  
    struct node *next;   
}   

![l3](https://user-images.githubusercontent.com/66161514/154310742-5f415abf-2114-4e3d-9a0d-542dce802cb4.png)
