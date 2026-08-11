/* Ghidra address: 012db2f0 */
/* Ghidra symbol: FUN_012db2f0 */


void FUN_012db2f0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 local_res18 [2];
  code *local_18;
  longlong local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  *(undefined1 *)(param_1 + 0xb0) = param_2;
  FUN_00414ad0(param_1 + 0x88,local_res18[0]);
  *(undefined1 *)(param_1 + 0xb1) = param_4;
  local_18 = FUN_012daef0;
  local_10 = param_1;
  FUN_004d1a50(param_1,&local_18);
  FUN_00414480(local_res18);
  return;
}

