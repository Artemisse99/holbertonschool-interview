#ifndef HOLBI_TREES
#define HOLBI_TREES

#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/* Binary tree */
typedef struct binary_tree_s binary_tree_t;
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Heap Insert */
typedef struct binary_tree_s heap_t;
heap_t *heap_insert(heap_t **root, int value);

/* Print */
#include <stddef.h>
void binary_tree_print(const binary_tree_t *);

#endif