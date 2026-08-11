/* Ghidra address: 01126090 */
/* Ghidra symbol: FUN_01126090 */


void FUN_01126090(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0xb8),param_3);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x818),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

