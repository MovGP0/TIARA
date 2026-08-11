/* Ghidra address: 015d4e80 */
/* Ghidra symbol: FUN_015d4e80 */


undefined8 FUN_015d4e80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong local_res18 [2];
  int local_10;
  int local_c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_c = 0;
  if (local_res18[0] != 0) {
    local_c = *(int *)(local_res18[0] + -4);
  }
  if (*(short *)(local_res18[0] + -2 + (longlong)local_c * 2) == 0x5c) {
    local_10 = 0;
    if (local_res18[0] != 0) {
      local_10 = *(int *)(local_res18[0] + -4);
    }
    FUN_004169f0(local_res18,local_10 + -1);
  }
  FUN_015bf710(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

