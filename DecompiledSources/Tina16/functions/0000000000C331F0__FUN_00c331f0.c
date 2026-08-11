/* Ghidra address: 00c331f0 */
/* Ghidra symbol: FUN_00c331f0 */


void FUN_00c331f0(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_00c30f40(&DAT_00c30740,1,param_1);
  FUN_00c31660(local_20);
  FUN_00410f20(local_20);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

