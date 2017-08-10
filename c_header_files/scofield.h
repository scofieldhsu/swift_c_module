#include <stdio.h>


static inline int swift_scofield_test(int i) {
	printf("%s i:%d\n", __FUNCTION__, i);
	return i;
}

