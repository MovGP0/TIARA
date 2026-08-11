/* Ghidra address: 0141a6c0 */
/* Ghidra symbol: FUN_0141a6c0 */


void FUN_0141a6c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10;
  longlong *local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_20 = FUN_01b21190(local_res10,0x20,0);
  (**(code **)(*local_res18 + 0x10))(local_res18,local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_res10);
  return;
}

