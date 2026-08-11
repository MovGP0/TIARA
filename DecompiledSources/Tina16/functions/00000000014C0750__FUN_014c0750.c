/* Ghidra address: 014c0750 */
/* Ghidra symbol: FUN_014c0750 */


longlong * FUN_014c0750(longlong *param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_20 = 0;
  iVar1 = FUN_0043dc90(local_18);
  if (iVar1 == 0) {
    FUN_0043dec0(param_1,local_18);
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  FUN_005b8960(&local_20,*param_1,2,iVar1 + -2);
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(&local_20);
  return param_1;
}

