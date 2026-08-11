/* Ghidra address: 010a0560 */
/* Ghidra symbol: FUN_010a0560 */


void FUN_010a0560(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

