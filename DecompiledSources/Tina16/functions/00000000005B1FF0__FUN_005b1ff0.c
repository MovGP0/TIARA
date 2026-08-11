/* Ghidra address: 005b1ff0 */
/* Ghidra symbol: FUN_005b1ff0 */


int FUN_005b1ff0(longlong *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      sVar1 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      if (sVar1 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

