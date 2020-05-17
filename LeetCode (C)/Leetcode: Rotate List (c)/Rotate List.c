/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int count_length(struct ListNode *head){  // count length of head
          struct ListNode *p1=head;
          int c=0;
        while(p1!=NULL){
            c++;
            p1=p1->next;
        }
        return c;
}



struct ListNode* rotateRight(struct ListNode *head, int k){
    
      if(head==NULL || k==0) return head;
     /*----------------------------------------------------------------------*/
      struct ListNode *res=(struct ListNode*)malloc(sizeof(struct ListNode));
      res->next=NULL;
      
      int head_length=count_length(head);  
      int point_location=(1+k)%head_length;  // "point" represnts a Datum point
      if(point_location==0) point_location=head_length;  
      int right_c=head_length-point_location;  
    //right_c represents the numbers of point that  need to be placed to right of point 
      int left_c=head_length-right_c-1;
     //left_c represents the numbers of point that need to be placed to left of point 
    
     /*---------------------------------------------------------------------------*/ 
    
      struct ListNode *p1=head; // p1 will visit all nodes of head
      struct ListNode *p2=res;  // p2 inserts new_node in  right of point
      struct ListNode *p3=res;  // p3 inserts new_node in  left of point
      while(p1!=NULL){    
         struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
         newnode->next=NULL;
         newnode->val=p1->val;
         if(p2->next==NULL){
             p2->next=newnode;
         }else if(right_c){
             p2=p2->next;
             p2->next=newnode;
             right_c--;
         }else if(left_c){
             newnode->next=p3->next;
             p3->next=newnode;
             p3=p3->next;           
             left_c--;
         }
          p1=p1->next; 
           
      }
         
      return res->next;
        
}
