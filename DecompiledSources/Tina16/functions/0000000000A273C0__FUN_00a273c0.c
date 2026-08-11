/* Ghidra address: 00a273c0 */
/* Ghidra symbol: FUN_00a273c0 */


longlong * FUN_00a273c0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0043ea00(param_1);
  iVar1 = FUN_004170c0(&DAT_00a27474,*param_1,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + -4);
    }
  }
  iVar2 = FUN_004170c0(&DAT_00a27484,*param_1,1);
  if ((iVar2 == 0) || (iVar1 < iVar2)) {
    iVar2 = 1;
  }
  if (iVar2 <= iVar1) {
    iVar2 = (iVar2 - iVar1) + -1;
    do {
      if (*(short *)(*param_1 + -2 + (longlong)iVar1 * 2) == 0x2f) {
        FUN_004169f0(param_1,iVar1);
        return param_1;
      }
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  FUN_00416ad0(param_1,&DAT_00a27498);
  return param_1;
}

