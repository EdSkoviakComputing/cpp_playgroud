#include <iostream>

void algorithm_signed ( int i)
{
	fprintf(stdout, "%d is signed\n", i);
}

void algorithm_unsigned (unsigned u)
{
	fprintf(stdout, "%d is unsidned\n", u);
}

template<typename T>
void algorithm(T t)
{
	if constexpr(std::is_signed<T>::value)
		algorithm_signed(t);
	else
	if constexpr (std::is_unsigned<T>::value)
		algorithm_unsigned(t);
	else
		static_assert(std::is_signed<T>::value || std::is_unsigned<T>::value, "Must be signed or unsigned");
}

int main()
{
	algorithm(3);
	unsigned x = 3;
	algorithm(x);
	//algorithm("hello");
	return 0;
}
