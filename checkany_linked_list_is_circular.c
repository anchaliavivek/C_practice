/* the following function takes head node add as input and returns the address where the linked list is circular */
/* Can be integrated to any program in c which includes implemented single linked list */
struct node * point (struct node *start)
{
	struct node * t , *t1;
	t = start;
	t1 = start;
		t = t->next;
			while (t1 != t)
			{
				t1 = t1->next;
				t = t->next;
				if (t->next == t1);
				printf("vivek");
				break;	
			}
	return t->next;
}

