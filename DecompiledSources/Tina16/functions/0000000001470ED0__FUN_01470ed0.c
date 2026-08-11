/* Ghidra address: 01470ed0 */
/* Ghidra symbol: FUN_01470ed0 */


void FUN_01470ed0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x80c) = param_2;
  if (param_2 == 0) {
    FUN_00414ad0(param_1 + 0x7f8,&DAT_01470f90);
    FUN_00414ad0(*(longlong *)(param_1 + 0x6c0) + 0xe0,L"Python file|*.py");
    FUN_00414ad0(*(longlong *)(param_1 + 0x6c0) + 0x100,&PTR_DAT_01470fd4);
  }
  else {
    FUN_00414ad0(param_1 + 0x7f8,L".csv");
    FUN_00414ad0(*(longlong *)(param_1 + 0x6c0) + 0xe0,L"CSV file|*.csv");
    FUN_00414ad0(*(longlong *)(param_1 + 0x6c0) + 0x100,&DAT_0147102c);
  }
  FUN_0146f490(param_1,0);
  return;
}

