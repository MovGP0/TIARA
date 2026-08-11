/* Ghidra address: 00c0a5f0 */
/* Ghidra symbol: FUN_00c0a5f0 */


void FUN_00c0a5f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_19 = *(undefined1 *)((longlong)param_1 + 0x5f5);
  FUN_00bf3750(param_1);
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
  FUN_00bfa470(param_1,param_3);
  FUN_00bfa6c0(param_1,param_4);
  FUN_00c086e0(param_1,local_19);
  FUN_00bf28a0(param_1);
  return;
}

