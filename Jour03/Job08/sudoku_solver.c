int sudoku_solver(int grid[9][9]);

int is_valid(int grid[9][9], int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][i] == num)
			return (0);
		if (grid[i][col] == num)
			return (0);
		i = i + 1;
	}
	
	i = (row / 3) * 3;
	row = i;
	col = (col / 3) * 3;
	while (row < i + 3)
	{
		i = 0;
		while (i < 3)
		{
			if (grid[row][col + i] == num)
				return (0);
			i = i + 1;
		}
		row = row + 1;
	}
	
	return (1);
}

int solve(int grid[9][9])
{
	int row;
	int col;
	int num;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[row][col] == 0)
			{
				num = 1;
				while (num <= 9)
				{
					if (is_valid(grid, row, col, num))
					{
						grid[row][col] = num;
						if (solve(grid))
							return (1);
						grid[row][col] = 0;
					}
					num = num + 1;
				}
				return (0);
			}
			col = col + 1;
		}
		row = row + 1;
	}
	return (1);
}

int sudoku_solver(int grid[9][9])
{
	return (solve(grid));
}
