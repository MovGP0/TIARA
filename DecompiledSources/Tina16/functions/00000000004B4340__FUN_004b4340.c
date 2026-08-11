/* Ghidra address: 004b4340 */
/* Ghidra symbol: FUN_004b4340 */


int FUN_004b4340(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      if (lVar2 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

