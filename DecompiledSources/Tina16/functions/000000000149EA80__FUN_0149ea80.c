/* Ghidra address: 0149ea80 */
/* Ghidra symbol: FUN_0149ea80 */


void FUN_0149ea80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_30 [2];
  
  FUN_01cf0bd0(param_1,param_2,param_3,param_4);
  local_30[0] = FUN_00498310(param_3,param_4);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_30);
  return;
}

