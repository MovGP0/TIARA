/* Ghidra address: 0162e970 */
/* Ghidra symbol: FUN_0162e970 */


void FUN_0162e970(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_3 + 0x14);
  iVar2 = *(int *)(param_4 + 0x14);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_01613110(L"SetTypeID_Binary");
  }
  if (param_1 == -1) {
    if ((iVar1 == 5) || (iVar2 == 5)) {
      param_1 = 5;
    }
    else if ((iVar1 == 1) || (param_1 = iVar1, iVar2 == 1)) {
      param_1 = 1;
    }
  }
  *(int *)(param_2 + 0x14) = param_1;
  return;
}

