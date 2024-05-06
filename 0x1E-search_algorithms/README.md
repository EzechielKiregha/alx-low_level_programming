# Search Algorithms
  + Implementation of various types of search algorithms and stated the corresponding space/time complexities for each.

## Tests
  + tests: Test Files

## Header File
  + search_algos.h: Header file containing definitions and prototypes.

### Data Structures

	/**
	 * struct listint_s - singly linked list
	 *
	 * @n: Integer
	 * @index: Index of the node in the list
	 * @next: Pointer to the next node
	 *
	 * Description: singly linked list node structure
	*/
	typedef struct listint_s
	{
	    int n;
	    size_t index;
	    struct listint_s *next;
	} listint_t;
	
	/**
	 * struct skiplist_s - Singly linked list with an express lane
	 *
	 * @n: Integer
	 * @index: Index of the node in the list
	 * @next: Pointer to the next node
	 * @express: Pointer to the next node in the express lane
	 *
	 * Description: singly linked list node structure with an express lane
	 */
	typedef struct skiplist_s
	{
	    int n;
	    size_t index;
	    struct skiplist_s *next;
	    struct skiplist_s *express;
	} skiplist_t;


### Function Prototypes

| File | Prototype |
|------|-----------|
| 0-linear.c | int linear_search(int *array, size_t size, int value); |
| 1-binary.c | int binary_search(int *array, size_t size, int value); |
| 100-jump.c | int jump_search(int *array, size_t size, int value); |
| 102-interpolation.c | int interpolation_search(int *array, size_t size, int value); |
| 103-exponential.c | int exponential_search(int *array, size_t size, int value); |
| 104-advanced_binary.c | int advanced_binary(int *array, size_t size, int value); |