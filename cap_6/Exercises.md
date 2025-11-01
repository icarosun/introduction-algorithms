## 6.1-1

h is height heap 

min = $f(h) = 2^h$

max = $f(h) = 2^{h+1} - 1$

## 6.1-2

The array has 10 elements and set all elements in the binary tree, the height is 3;
If the array has sixteen elements, the height is 4, so it's $\log_2 (n)$ 

## 6.1-3 

The definition of max-heap is that the root is root >= node

## 6.1-4

The minus element will be in the leaf node.

## 6.1-5 

Yes, it's max-heap

## 6.1-6

No, it's not. In node 4, element 6 is minus than children. 

## 6.1-7

Yes, because an array has n elements, with you calculate the children the element n/2 is out of index. Example: n = 6, so index $6/2 = 3$, if you calculate the left will be $3*2 = 6$ sixth index is the last number of the array, the right node will be seven, but seven is out of range. 

## 6.2 - 1

A = <27, 17, 3, 16, 13, 10, 1, 5, 7, 12, 4, 8, 9, 0>
A = <27, 17, 10, 16, 13, 3, 1, 5, 7, 12, 4, 8, 9, 0>
A = <27, 17, 10, 16, 13, 9, 1, 5, 7, 12, 4, 8, 3, 0>

## 6.2-3

The code doesn't make any changes because the max-heapify condition was already satisfied. 

## 6.2-4

Nothing happens because A[i] is a leaf(since i > A.heap_size / 2), and leaves have no children to process.

