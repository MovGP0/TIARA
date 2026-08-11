/* Ghidra address: 0194f0b0 */
/* Ghidra symbol: FUN_0194f0b0 */


undefined4 FUN_0194f0b0(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x350))(param_1,local_28);
  local_1c = (**(code **)(*local_28 + 0x28))(local_28);
  FUN_00410f20(local_28);
  return local_1c;
}

