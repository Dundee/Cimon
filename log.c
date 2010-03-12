#include <stdio.h>
#include <stdarg.h>

#include "log.h"

void mlog (char *msg, ...) {
	va_list ap;
	
	va_start (ap, msg);
	vfprintf (stderr, msg, ap);
	va_end (ap);
	return;
}