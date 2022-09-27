
// example input: InitializeArray(p, 3, true)
// index: [ 0, 1, 2]
// value: [ f, f, t]
//          |
// ================= 
// pArr size
// ==== ====
// ->[0]  2    [ t, f, t]
// ->[1]  1
// ->[2]  0
void InitializeArray(bool* pArr, int size, bool value)
{
	while (size-- > 0) 
	{
		if (*pArr != value)
		{
			*pArr = value;
		}

		pArr++;
	}
}