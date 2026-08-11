/* Ghidra address: 013c5da0 */
/* Ghidra symbol: FUN_013c5da0 */


void FUN_013c5da0(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_00414610(param_5);
  if (param_2 == 1) {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0xe8),local_res18,(longlong)param_4);
  }
  else {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0xe0),local_res18,(longlong)param_4);
  }
  FUN_00414480(&param_5);
  return;
}

