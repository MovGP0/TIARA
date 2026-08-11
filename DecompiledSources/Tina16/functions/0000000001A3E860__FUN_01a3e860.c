/* Ghidra address: 01a3e860 */
/* Ghidra symbol: FUN_01a3e860 */


void FUN_01a3e860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_013b9e80(*(undefined8 *)(param_1 + 0x2bc8),local_res10[0],param_3);
  FUN_015fca00(&local_10,0,0);
  FUN_00414ad0(param_1 + 0x2ba0,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

