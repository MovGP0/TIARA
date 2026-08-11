/* Ghidra address: 01b83fb0 */
/* Ghidra symbol: FUN_01b83fb0 */


undefined4 FUN_01b83fb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  longlong *local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_016cc2a0(*(undefined8 *)(param_2 + 0x58),local_10);
  local_24 = (**(code **)(*local_10 + 0x28))(local_10);
  local_14 = local_24;
  FUN_00410f20(local_10);
  FUN_00414480(&local_20);
  return local_14;
}

