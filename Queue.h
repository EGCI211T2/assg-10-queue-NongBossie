
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
if(new_node){ 
  if(size==0){
    headPtr =new_node;
  tailPtr = new_node;
  }else{
    tailPtr->set_next(new_node);

    tailPtr = new_node;
  }
  size++;
    /* Add head and tail for me please */
   /*1. connect & Change tail
  2. (may be) change head  when the queue is empty
  3. increase size*/
	
 }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
     NodePtr t=headPtr;
     int value= t->get_value();
    headPtr=t->get_next();

     /* Add head and tail for me please */
     if(size==1)
     {
      tailPtr=NULL;
     }
     size--;     
     delete t;
     return value;
  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
    //initialize Queue
    
}
Queue::~Queue(){
    //delete all remaning Queue (i.e. DQ all) 
    cout<<"Clearing queue"<<endl;

    for(int i=0;i<size;i++)
    {
      NodePtr t=headPtr;
      int value= t->get_value();
      headPtr=headPtr->get_next();
      cout<<"dequeing"<<t->get_value()<<endl;
      delete t;
    }

    
}


#endif
