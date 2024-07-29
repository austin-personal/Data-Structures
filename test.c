void reverse(Queue *q)
{
	Stack st; // Changed: Declare a stack variable instead of a pointer
	st.ll.head = NULL; // Initialize the stack's linked list
	st.ll.size = 0;
	st.ll.tail = NULL;

	int len = q->ll.size;
	int ind = 0;
	int value; // Changed: Use int to hold the dequeued and popped values

	// Dequeue all elements from the queue and push them onto the stack
	while (ind < len)
	{
		value = dequeue(q); // Changed: Correct the function call to return int
		push(&st, value); // Changed: Correct the function call
		ind++;
	}

	// Pop all elements from the stack and enqueue them back to the queue
	ind = 0;
	while (ind < len)
	{
		value = pop(&st); // Changed: Correct the function call to return int
		enqueue(q, value); // Changed: Correct the function call
		ind++;
	}
}
