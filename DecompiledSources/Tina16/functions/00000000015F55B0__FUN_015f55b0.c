/* Ghidra address: 015f55b0 */
/* Ghidra symbol: FUN_015f55b0 */


int FUN_015f55b0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x1c8))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x210))(param_1,iVar3);
      if (iVar2 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

