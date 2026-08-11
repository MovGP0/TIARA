/* Ghidra address: 01315120 */
/* Ghidra symbol: FUN_01315120 */


undefined8 FUN_01315120(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = 0;
  if (local_res18[0] != 0) {
    iVar1 = *(int *)(local_res18[0] + -4);
  }
  FUN_00416e20(local_res18,iVar1 + -3,4);
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

