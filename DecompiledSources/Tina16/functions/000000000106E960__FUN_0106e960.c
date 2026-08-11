/* Ghidra address: 0106e960 */
/* Ghidra symbol: FUN_0106e960 */


void FUN_0106e960(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

