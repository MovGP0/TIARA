/* Ghidra address: 005dab60 */
/* Ghidra symbol: FUN_005dab60 */


undefined1 FUN_005dab60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x90))(param_1,param_2,local_20);
  uVar1 = (**(code **)(*local_20 + 0xb0))(local_20,param_3);
  local_21 = uVar1 < 0x80000000;
  FUN_00410f20(local_20);
  return local_21;
}

