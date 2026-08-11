/* Ghidra address: 004b6360 */
/* Ghidra symbol: FUN_004b6360 */


int FUN_004b6360(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar3 = param_1[7];
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(longlong *)(lVar3 + 8) == param_2) {
        return iVar2;
      }
      lVar3 = lVar3 + 0x10;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

