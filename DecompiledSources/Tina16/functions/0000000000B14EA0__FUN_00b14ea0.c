/* Ghidra address: 00b14ea0 */
/* Ghidra symbol: FUN_00b14ea0 */


undefined8 * FUN_00b14ea0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_004144d0(param_1);
  iVar2 = 0;
  if (*param_2 != 0) {
    iVar2 = *(int *)(*param_2 + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_004153d0(&local_20,*(undefined1 *)(*param_2 + -1 + (longlong)iVar1),0);
      FUN_00415980(param_1,3,*param_1,local_20,&LAB_00b14f74);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004144d0(&local_20);
  return param_1;
}

