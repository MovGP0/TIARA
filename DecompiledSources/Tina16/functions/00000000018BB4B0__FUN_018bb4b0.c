/* Ghidra address: 018bb4b0 */
/* Ghidra symbol: FUN_018bb4b0 */


void FUN_018bb4b0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_10 = FUN_01979e40(&PTR_FUN_01942c90,1);
  FUN_00441640(&local_28,param_2);
  FUN_00414ad0(local_10 + 0x90,local_28);
  (**(code **)(*param_1 + 0x148))(param_1,local_10,param_2);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return;
}

