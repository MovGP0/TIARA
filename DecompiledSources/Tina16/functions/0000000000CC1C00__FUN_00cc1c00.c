/* Ghidra address: 00cc1c00 */
/* Ghidra symbol: FUN_00cc1c00 */


void FUN_00cc1c00(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = *(undefined8 **)(param_1 + 0x50);
  (**(code **)*local_28)(local_28);
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_004d1f00(param_1);
  local_20 = *(longlong **)(param_1 + 0x50);
  (**(code **)(*local_20 + 8))(local_20);
  return;
}

