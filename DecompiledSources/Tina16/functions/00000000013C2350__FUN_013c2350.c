/* Ghidra address: 013c2350 */
/* Ghidra symbol: FUN_013c2350 */


undefined8 FUN_013c2350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,local_res18[0]);
  (**(code **)(*local_20 + 0x38))(local_20,param_2);
  FUN_00410f20(local_20);
  FUN_00414480(&local_28);
  FUN_00414480(local_res18);
  return param_2;
}

