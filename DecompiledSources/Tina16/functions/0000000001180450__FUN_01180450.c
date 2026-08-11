/* Ghidra address: 01180450 */
/* Ghidra symbol: FUN_01180450 */


void FUN_01180450(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if ((iVar1 <= param_2) && (iVar1 <= param_2)) {
    iVar1 = (param_2 - iVar1) + 1;
    do {
      FUN_00416ad0(param_1,&LAB_011804a4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

