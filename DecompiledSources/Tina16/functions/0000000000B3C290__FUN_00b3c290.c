/* Ghidra address: 00b3c290 */
/* Ghidra symbol: FUN_00b3c290 */


void FUN_00b3c290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  FUN_00416880(&local_28,param_2);
  local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_28,0xff00);
  *(undefined8 *)(param_1 + 0x10) = local_30;
  FUN_00b3c370(param_1,local_30,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  FUN_00414480(&local_28);
  return;
}

