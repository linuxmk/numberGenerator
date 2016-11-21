#ifndef _AvlTree_H
#define _AvlTree_H

typedef unsigned long long int ElementType;

struct AvlNode
{
    ElementType 	Element;
    int 		frequency;
    struct AvlNode  	*Left;
    struct AvlNode	*Right;
    int      		Height;
};

typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;

AvlTree MakeEmpty( AvlTree T );
Position Find( ElementType X, AvlTree T );
Position FindMin( AvlTree T );
Position FindMax( AvlTree T );
AvlTree Insert( ElementType X, AvlTree T );
AvlTree Delete( ElementType X, AvlTree T );
ElementType Retrieve( Position P );

#endif
