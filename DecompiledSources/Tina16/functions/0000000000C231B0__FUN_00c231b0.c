/* Ghidra address: 00c231b0 */
/* Ghidra symbol: FUN_00c231b0 */


void FUN_00c231b0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  FUN_00c22da0(param_1);
  local_20 = FUN_004095c0(0x400);
  local_24 = thunk_FUN_041fe7d8(param_2,0,0x100,local_20);
  FUN_00c23120(param_1,local_20,local_24);
  FUN_004095f0(local_20);
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

