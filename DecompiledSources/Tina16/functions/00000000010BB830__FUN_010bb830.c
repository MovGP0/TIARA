/* Ghidra address: 010bb830 */
/* Ghidra symbol: FUN_010bb830 */


void FUN_010bb830(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),local_20);
  FUN_00410f20(local_20);
  return;
}

