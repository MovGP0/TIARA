/* Ghidra address: 019a5860 */
/* Ghidra symbol: FUN_019a5860 */


undefined8 FUN_019a5860(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(&DAT_019a58dc,*param_3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*param_3 != 0) {
      iVar1 = *(int *)(*param_3 + -4);
    }
    iVar1 = iVar1 + 1;
  }
  FUN_00416dc0(param_2,*param_3,1,iVar1 + -1);
  FUN_00416e20(param_3,1,iVar1);
  return param_2;
}

