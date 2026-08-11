/* Ghidra address: 0162ea10 */
/* Ghidra symbol: FUN_0162ea10 */


void FUN_0162ea10(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 0) {
    FUN_01613110(L"SetTypeID_Unary");
  }
  if (param_1 == -1) {
    param_1 = iVar1;
  }
  *(int *)(param_2 + 0x14) = param_1;
  return;
}

