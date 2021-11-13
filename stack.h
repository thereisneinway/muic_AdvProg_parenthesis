struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef Node *NodePtr;

void push(NodePtr & s, char value);
char pop(NodePtr & s);
void pop_all(NodePtr &s);

void push(NodePtr & s,char value){
  if(s){
    NodePtr newNode;
    newNode = new Node;
    newNode->data = value;
    newNode->nextPtr = s;
    s = newNode;
    //cout<<"Pushed"<<endl;
  }else{
    NodePtr newNode;
    newNode = new Node;
    newNode->data = value;
    s = newNode;
    //cout<<"Pushed"<<endl;
  }
}
char pop(NodePtr & s){
  if (s){
    NodePtr tempPtr;
    char temp=s->data;
    tempPtr = s->nextPtr;
    delete s;
    s = tempPtr;
    //cout<<"Popped"<<endl;
    return temp;
  }else{
    //cout<<"Not Popped"<<endl;
    return 0;
  }
}
void pop_all(NodePtr &s){
  NodePtr currentPtr;
  NodePtr tempPtr;
  currentPtr = s;
  while(currentPtr){
    tempPtr = currentPtr->nextPtr;
    delete currentPtr;
    currentPtr = tempPtr;
  }
  //cout<<"Pop all stack!"<<endl;
}