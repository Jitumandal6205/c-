#include <stdio.h>
#include <stdlib.h>

// Define the structure for the tree node
struct Node {
    int data;
    struct Node* lchild;
    struct Node* rchild;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->lchild = newNode->rchild = NULL;
    return newNode;
}

// Function to perform level-order traversal
void LevelOrder(struct Node* root) {
    if (root == NULL)
        return;

    struct Queue {
        int front, rear, size;
        unsigned capacity;
        struct Node** array;
    };

    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = 100;
    queue->front = queue->size = 0;
    queue->rear = queue->capacity - 1;
    queue->array = (struct Node**)malloc(queue->capacity * sizeof(struct Node*));

    // Enqueue the root node
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = root;
    queue->size = 1;

    while (queue->size != 0) {
        // Dequeue the front node and print its data
        struct Node* node = queue->array[queue->front];
        printf("%d ", node->data);
        queue->front = (queue->front + 1) % queue->capacity;
        queue->size--;

        // Enqueue left and right children if they exist
        if (node->lchild != NULL) {
            queue->rear = (queue->rear + 1) % queue->capacity;
            queue->array[queue->rear] = node->lchild;
            queue->size++;
        }
        if (node->rchild != NULL) {
            queue->rear = (queue->rear + 1) % queue->capacity;
            queue->array[queue->rear] = node->rchild;
            queue->size++;
        }
    }

    // Free the memory used for the queue
    free(queue->array);
    free(queue);
}

// Function to create the binary tree
struct Node* Treecreate() {
    struct Node *root = NULL;
    struct Node *p, *t;
    int x;
    struct Queue q;

    printf("Enter root value: ");
    scanf("%d", &x);
    root = createNode(x);

    create(&q, 100);
    enqueue(&q, root);

    while (!isEmpty(q)) {
        p = dequeue(&q);

        printf("Enter left child of %d (-1 for no node): ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = createNode(x);
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("Enter right child of %d (-1 for no node): ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = createNode(x);
            p->rchild = t;
            enqueue(&q, t);
        }
    }

    return root;
}

int main() {
    struct Node* root = Treecreate();

    printf("Level Order Traversal: ");
    LevelOrder(root);

    return 0;
}
