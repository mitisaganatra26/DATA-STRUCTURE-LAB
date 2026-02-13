struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    NODE newNode = (NODE)malloc(sizeof(struct node));
	if(newNode == NULL){
		printf("Memory allocation failed\n");
		exit(1);
	}
    newNode->data = x;
	newNode->next = NULL;
	return newNode;
    
    
    
}

NODE addNode(NODE first, int x) {
    NODE newNode = createNode(x);
	//if list is empty
	if(first == NULL){
		return newNode;
	}
    //traverse to last node
	NODE temp = first;
	while(temp->next!=NULL){
		temp = temp->next;
	}
    temp->next = newNode;
	return first;
    
    
}

NODE concatenate(NODE t1, NODE t2) {
    //if first list is empty
	if(t1==NULL){
		return t2;
	}
    //if second list is empty
	if(t2 == NULL){
		return t1;
	}
	//traverse to last node of first list
	NODE temp = t1;
	while(temp->next != NULL){
		temp = temp->next;
	}
    //link last node of first list to the head of second list
	temp->next = t2;
	return t1;
    
}

void displayList(NODE first) {
    NODE temp = first;
	while(temp != NULL){
		printf("%d --> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
    
    
    
    
}
