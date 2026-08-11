/* Ghidra address: 01576180 */
/* Ghidra symbol: FUN_01576180 */


undefined8 FUN_01576180(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      *param_3 = lVar1;
      if (*(int *)(*param_3 + 8) == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

