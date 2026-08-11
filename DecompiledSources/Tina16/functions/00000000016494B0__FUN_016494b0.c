/* Ghidra address: 016494b0 */
/* Ghidra symbol: FUN_016494b0 */


void FUN_016494b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01619db0(*(undefined8 *)(param_1 + 0x13a08),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

