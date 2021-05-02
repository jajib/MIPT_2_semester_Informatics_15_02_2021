unsigned int count_total_mice_amount(Cat* cats, size_t n)
{
	size_t total_mice_amount = 0;
	
	for (int i = 0; i < n; i++)
	{
		total_mice_amount += cats[i].mice_caught;
	}
	
	return total_mice_amount;
};
