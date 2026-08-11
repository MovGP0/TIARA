/* Ghidra address: 00cdad00 */
/* Ghidra symbol: FUN_00cdad00 */


void FUN_00cdad00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00882aa0(param_1,1,0);
  (**(code **)(*local_20 + 0x90))(local_20,param_3);
  FUN_00cdaa80(local_20,param_2);
  (**(code **)(*local_20 + 0x98))(local_20);
  FUN_00410f20(local_20);
  return;
}

