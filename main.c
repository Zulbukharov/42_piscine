#include <stdlib.h>
#include <stdio.h>

typedef struct			t_list
{
	int					data;
	struct t_list		*next;
}						list;

// функция для создания элемента списка
list	*ft_create_elem(int data)
{
	list *p;

	p = malloc(sizeof(list));
	p->next = NULL;
	p->data = data;
	return (p);
}

// функция для вывода элементов списка
void	print_list(list *head)
{
	list *current = head;
	int i;

	i = 0;
	while (current)
	{
		printf("value: %d, index: %d\n", current->data, i);
		i++;
		current = current->next;
	}
}

// функция для добавления элемента в конец списка
void	push_to_end(list *head, int data)
{
	list *current;

	current = head;
	while(current->next != NULL)
	{
		current = current->next;
	}

	current->next = ft_create_elem(data);
}

// удаление первого элемента в списке
int		pop(list **head)
{
	list *next_node = NULL;
	int i = -1;

	if (*head == NULL)
	{
		return (-1);
	}

	next_node = (*head)->next;
	i = (*head)->data;
	free(*head);
	*head = next_node;

	return (i);
}

//Удаление последнего элемента в списке
int		remove_last(list *head)
{
	int ret;

	ret = 0;
	if (head->next == NULL)
	{
		ret = head->data;
		free(head);
		return (ret);
	}
	list *current = head;
	while (current->next->next != NULL)
	{
		current = current->next;
	}

	ret = current->next->data;
	free(current->next);
	current->next = NULL;
	return ret;
}

//удаление определенного элемента
int remove_by_index(list **head, int n)
{
	int i = 0;
	int ret = -1;
	list *current = *head;
	list *temp = NULL;

	if (n == 0)
		return (pop(head));

	for (i = 0; i < n; i++)
	{
		if (current->next == NULL)
		{
			return ret;
		}
		current = current->next;
	}
	temp = current->next;
	ret = temp->data;
	current->next = temp->next;
	free(temp);

	return (ret);
}

// удаление элемента по данным
int remove_by_data(list **head, int n)
{
	int i = -1;
	int ret = -1;
	list *current = *head;
	list *temp = NULL;

	while (current->next != NULL)
	{

		++i;
		if (current->next->data == n)
		{
			temp = current->next;
			printf("%d", temp->data);
			current->next = temp->next;
			free(temp);
			return (i);
		}
		current = current->next;
	}
	return (-1);
}

// фукнция для добавления нового элемента в начало списка
void	push_to_front(list **head, int data)
{
	list *current;

	current = malloc(sizeof(list));
	current->data = data;
	current->next = *head;
	*head = current;
}

int		main(void)
{
	list *head;

	head = NULL;
	head = malloc(sizeof(list));
	if (head == NULL)
		return (1);
	head->data = 5;
	head->next = malloc(sizeof(list));
	head->next->data = 3;
	head->next->next = malloc(sizeof(list));
	head->next->next->data = 2;
	head->next->next->next = NULL;
	//push_to_end(&head, 23);
	push_to_front(&head, 12);
	printf("index of 3: %d\n", remove_by_data(&head, 12)); 
	print_list(head);
	return (0);
}
