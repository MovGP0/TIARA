/* Ghidra address: 017f0d10 */
/* Ghidra symbol: FUN_017f0d10 */


void FUN_017f0d10(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0xb8),0xff0000);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

