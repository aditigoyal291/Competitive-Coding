/*

 Node * mergeKLists(Node *arr[], int K){

        if(K == 1) return arr[0];

        for(int i = 1; i < K ; i++){

            Node* ord = new Node(-1);
            Node* tail = ord;

            Node* left = arr[i - 1];
            Node* right = arr[i];

            while(left && right){

                if(left->data < right->data){

                    tail->next = left;
                    tail = left;
                    left = left->next;
                }
                else{
                    tail->next = right;
                    tail = right;
                    right = right->next;
                }
            }
            while(left){
                tail->next = left;
                tail = left;
                left = left->next;
            }

            while(right){
                tail->next = right;
                tail = right;
                right = right->next;
            }

            arr[i] = ord->next;

        }

        return arr[K - 1];
    }
*/