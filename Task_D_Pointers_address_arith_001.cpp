int* now_get_me_some_bytes(size_t n)
{
	int* array = new int[n];
	return array;
};

void now_free_some_bytes(int* p)
{
	delete [] p;
};
