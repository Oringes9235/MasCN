#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
//#include "ops.h"


#define ZEROPAD 1
#define SIGN    2
#define PLUS    4
#define SPACE   8
#define LEFT    16
#define SPECIAL 32
#define LARGE   64

//统计字符串中字符个数(不包括\0)，如果个数大于count，则返回count，否则返回字符个数
size_t strnlen(const char * s, size_t count)//size_t是unsigned long long的宏
{
	const char *sc;

	for (sc = s; count-- && *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}

uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base)
{
	uint64_t rem = *n;
	uint64_t b = base;
	uint64_t res, d = 1;
	uint32_t high = rem >> 32;

	/* Reduce the thing a bit first */
	res = 0;
	if (high >= base) 
	{
		high /= base;
		res = (uint64_t) high << 32;
		rem -= (uint64_t) (high*base) << 32;
	}

	while ((int64_t)b > 0 && b < rem) 
	{
		b = b+b;
		d = d+d;
	}

	do 
	{
		if (rem >= b) 
		{
			rem -= b;
			res += d;
		}
		b >>= 1;
		d >>= 1;
	} while (d);

	*n = res;
	return rem;
}


//进制之间的相应转换
# define do_div(n,base) (
    {
        unsigned int __base = (base);
        unsigned int __rem;
        //这一句的作用是为了消去警告，因为定义了n变量而没有使用到它，会报警
        (void)(((typeof((n)) *)0) == ((unsigned long long *)0));
        
        if (((n) >> 32) == 0) 
        {
            __rem = (unsigned int)(n) % __base;
            (n) = (unsigned int)(n) / __base;
        }
        else		
        {
            __rem = __div64_32(&(n), __base);
        }
    }
 )
