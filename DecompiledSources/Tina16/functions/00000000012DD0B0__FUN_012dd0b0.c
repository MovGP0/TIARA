/* Ghidra address: 012dd0b0 */
/* Ghidra symbol: FUN_012dd0b0 */


int FUN_012dd0b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar2);
      if (((**(double **)(lVar1 + 0x20) != 0.0) ||
          (lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar2),
          **(double **)(lVar1 + 0x28) != 0.0)) ||
         (lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar2),
         **(double **)(lVar1 + 0x30) != 0.0)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

