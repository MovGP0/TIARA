/* Ghidra address: 00f7d070 */
/* Ghidra symbol: FUN_00f7d070 */


void FUN_00f7d070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  FUN_00414ad0(param_1 + 0x18,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

