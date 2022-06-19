// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        Node* temp = head;
        Node* prev = NULL;
        Node* pre_prev = NULL;
        Node* last = NULL;
        Node* special = NULL;
        Node* first = NULL;
        Node* unique = NULL;
        
        if(m != n) {
            for(int i = 1; i <= n; i++) {
                pre_prev = prev;
                prev = temp;
                temp = temp -> next;
                
                if(i == m) {
                    unique = pre_prev;
                }
                
                if(i >= m + 1 && i <= n) {
                    if(i == m + 1) {
                        first = pre_prev;
                    }
                    if(i == n) {
                        last = prev;
                        special = temp;
                    }
                    prev -> next = pre_prev;
                }
            }
            
            if(unique != NULL) 
                unique -> next = last;
            if(first != NULL)
                first -> next = special;
            if(m == 1) 
                head = last;
        }    

        return head;
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends
