/* Ghidra address: 015f4420 */
/* Ghidra symbol: FUN_015f4420 */


undefined8 FUN_015f4420(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  param_3 = param_3 - iVar1;
  if (-1 < param_3 + -1) {
    do {
      FUN_00416ad0(local_res10,&LAB_015f44c4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

