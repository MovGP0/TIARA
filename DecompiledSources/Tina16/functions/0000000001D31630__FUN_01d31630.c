/* Ghidra address: 01d31630 */
/* Ghidra symbol: FUN_01d31630 */


void FUN_01d31630(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_c = 0;
  if (local_res10[0] != 0) {
    local_c = *(int *)(local_res10[0] + -4);
  }
  FUN_01d311c0(param_1,&local_c,4);
  if (0 < local_c) {
    uVar1 = FUN_00414de0(local_res10);
    FUN_01d311c0(param_1,uVar1,local_c * 2);
  }
  FUN_00414480(local_res10);
  return;
}

