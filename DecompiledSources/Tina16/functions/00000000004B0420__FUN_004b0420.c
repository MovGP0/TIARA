/* Ghidra address: 004b0420 */
/* Ghidra symbol: FUN_004b0420 */


undefined4 FUN_004b0420(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined4 local_14;
  longlong local_10;
  
  local_30 = auStack_58;
  local_20 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_14 = *(undefined4 *)(local_20 + 0x10);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_14;
}

