/* Ghidra address: 0154b610 */
/* Ghidra symbol: FUN_0154b610 */


undefined8 FUN_0154b610(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  if (iVar1 < 0x28) {
    FUN_00414bf0(param_1,local_res10[0]);
  }
  else {
    FUN_00d30cf0(param_1,local_res10[0]);
  }
  FUN_004144d0(local_res10);
  return param_1;
}

