/* Ghidra address: 0160e3f0 */
/* Ghidra symbol: FUN_0160e3f0 */


undefined8 FUN_0160e3f0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(local_20,local_res10[0]);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  param_3 = param_3 - iVar1;
  if (0 < param_3) {
    do {
      FUN_00416ba0(local_20,&LAB_0160e4c4,local_20[0]);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

