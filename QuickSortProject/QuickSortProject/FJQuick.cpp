#include<omp.h>

#include "FJQuick.h"
#include "standardSortAlgorithms.h"
#include "betterQuick.h"
#include "util.h"

void fj_quick_sort_wrapper(int *A,int n, int threads) {
	// Implement the fork-join parallel quick sort algorithm.
	// As with others, you will probably want to start some OMP stuff
	// here and then call an algorithm called fj_quick_sort.
	
	// For now, just use better_quick_sort.
	better_quick_sort_wrapper(A,n,threads);
}