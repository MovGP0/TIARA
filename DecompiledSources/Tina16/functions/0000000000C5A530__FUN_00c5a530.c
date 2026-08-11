/* Ghidra address: 00c5a530 */
/* Ghidra symbol: FUN_00c5a530 */


int FUN_00c5a530(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x4dc);
  iVar2 = *(int *)(param_1 + 0x4d8);
  iVar3 = param_2;
  if (((iVar1 != iVar2) && (iVar3 = iVar2, iVar2 <= param_2)) && (iVar3 = param_2, iVar1 < param_2))
  {
    iVar3 = iVar1;
  }
  return iVar3;
}

