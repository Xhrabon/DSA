#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

int size(Node* head)
{
    int count = 0;

    Node* temp = head;

    while(temp != nullptr)
    {
        count++;
        temp= temp->next;
    }
    return count;
}

void insert_position(Node * head, int val, int pos)
{
    Node* newNode =  new Node(val);

    Node* temp = head;

    for(int i = 1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

}

void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}

void insert_at_tail(Node* head, int val)
{
    Node* newNode = new Node(val);

    Node*temp= head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node * head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;

}
int main()
{
    while(true)
    {
        Node* head = new Node(5);
        Node*A = new Node (10);
        Node*B = new Node(15);

        head->next = A;
        A->next = B;

        int opt;

        cout<<"Option 1: Print Linked LIst"<<endl;
        cout<<"Option 2: Insert at any position"<<endl;
        cout<<"Option 3: Insert at Head"<<endl;
        cout<<"Option 4: Insert at Tail"<<endl;

        cin>>opt;

        if(opt==1)
            {
                display(head);
        }

        else if(opt ==2)
        {
            int pos;
            int val;
            cout<<"Enter Position: "<<endl;
            cout<<"Enter Value: "<<endl;

            cin>>pos>>val;

            if(pos>size(head))
            {
                cout<<"Invalid Index"<<endl;
            }
            else
            {
                insert_position(head,val,pos);
            cout<<"New Linked List :";
                display(head);

            }
        }

        else if(opt == 3)
        {
            int val;s
            cout<<"Enter Value: "<<endl;
            cin>>val;

            insert_at_head(head,val);
            cout<<"New Linked List: ";
            display(head);
        }

        else if(opt ==4)
        {
            int val;
            cout<<"Enter Value: "<<endl;
            cin>>val;

            insert_at_tail(head,val);
            cout<<"New Linked List: ";
            display(head);
        }


        }



}

