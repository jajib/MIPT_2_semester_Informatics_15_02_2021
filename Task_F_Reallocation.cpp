int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, size_t n_new)
{
	if(n_new == 0)
	{
		return NULL;
	}
		
	int* new_array = new int[n_new];
	size_t min_size = (n_old < n_new ? n_old : n_new);
	size_t max_size = (n_old < n_new ? n_new : n_old);
	
	if (source != NULL)
	{
		for (int i = 0; i < min_size; i++)
		{
			new_array[i] = source[i];
		}
		
		delete [] source;
	} else
	{
		for (int i = 0; i < min_size; i++)
		{
			new_array[i] = 0;
		}
	}
	
	for (int i = min_size; i < n_new; i++)
	{
		new_array[i] = 0;
	}
	
	return new_array;	
};
