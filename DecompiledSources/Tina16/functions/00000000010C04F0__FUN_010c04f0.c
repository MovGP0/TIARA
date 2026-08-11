/* Ghidra address: 010c04f0 */
/* Ghidra symbol: FUN_010c04f0 */


void FUN_010c04f0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  while (iVar1 = FUN_004170c0(&DAT_010c05e0,*param_1,1), 0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_010c05e0,*param_1,1);
    FUN_00416dc0(param_1,*param_1,1,iVar1 + -1);
  }
  while (iVar1 = FUN_004170c0(&LAB_010c05f0,*param_1,1), 0 < iVar1) {
    iVar1 = FUN_004170c0(&LAB_010c05f0,*param_1,1);
    FUN_00416dc0(param_1,*param_1,1,iVar1 + -1);
  }
  iVar1 = 0;
  iVar2 = iVar1;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
    iVar2 = iVar1;
  }
  while ((0 < iVar1 && (*(short *)(*param_1 + -2 + (longlong)iVar1 * 2) == 0x20))) {
    iVar1 = iVar1 + -1;
  }
  if ((iVar1 != iVar2) && (0 < iVar1)) {
    FUN_00416e20(param_1,iVar1 + 1,iVar2 - iVar1);
  }
  return;
}

