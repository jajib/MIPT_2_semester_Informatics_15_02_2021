Cat* get_home_for_a_cats_pride(size_t n)
{
	Cat* cats = new Cat[n];
	char* buffer;
	for (int i = 0; i < n; i++)
	{
		buffer = new char[10];
		cats[i].name = buffer;
	}

	return cats;
};

void clear_home_of_a_cats_pride(Cat* cats, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		delete [] cats[i].name;
	}
	
	delete [] cats;
};
