/* Ghidra address: 00c8ba10 */
/* Ghidra symbol: FUN_00c8ba10 */


void FUN_00c8ba10(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x30)) {
    uVar1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,L"Capacity cannot be smaller than Size");
    FUN_004134c0(uVar1);
  }
  FUN_00c8b450(param_1,1);
  FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)param_2);
  return;
}

