/* Ghidra address: 00b15220 */
/* Ghidra symbol: FUN_00b15220 */


longlong * FUN_00b15220(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar2 = iVar2 * 2 + 2;
  FUN_00415d10(param_1,iVar2,0);
  uVar1 = FUN_00414df0(param_1);
  FUN_0040d200(uVar1,(longlong)iVar2,0);
  uVar1 = FUN_00414df0(param_1);
  FUN_00b14d10(param_2,uVar1,iVar2);
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + -4);
  }
  FUN_00415ad0(param_1,*param_1,1,iVar2 + -2);
  return param_1;
}

