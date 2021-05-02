#include<iostream>

int main()
{
	int rows_number, columns_number, mines_number;
	int mine_row, mine_column;
	
	std::cin >> rows_number >> columns_number >> mines_number;
	
	int** field_map = new int*[rows_number];
	for (int i = 0; i < rows_number; i++)
	{
		field_map[i] = new int[columns_number];
		for (int cnt = 0; cnt < columns_number; cnt++)
		{
			field_map[i][cnt] = 0;		
		}	
	}
	
	for (int i = 0; i < mines_number; i++)
	{
		std::cin >> mine_row >> mine_column;
		field_map[mine_row - 1][mine_column - 1] = -1;
	
		for (int row_cnt = mine_row - 2; row_cnt <= mine_row; row_cnt++)
		{
			for (int column_cnt = mine_column - 2; column_cnt <= mine_column; column_cnt++)
			{
				if ((row_cnt >= 0 && row_cnt < rows_number) && (column_cnt >= 0 && column_cnt < columns_number))
				{	
					if ((field_map[row_cnt][column_cnt] != -1) && !(row_cnt == mine_row-1 && column_cnt == mine_column-1))
					{
						field_map[row_cnt][column_cnt] += 1;
					}
				}
			}
		}
	}
	
	for (int i = 0; i < rows_number; i++)
	{
		for (int j = 0; j < columns_number; j++)
		{
			std::cout << field_map[i][j];
			if (j != columns_number-1)
			{
				std::cout << " ";
			}
		}
		delete [] field_map[i];
		if (i != rows_number-1)
		{
			std::cout << "\n";
		}
	}
	
	delete [] field_map;
}
