/* Ghidra address: 010d6380 */
/* Ghidra symbol: FUN_010d6380 */


undefined4 FUN_010d6380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_2c = 0;
  *param_4 = 0;
  FUN_00414480(&local_20);
  FUN_00414480(&local_28);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x40);
    (**(code **)(**(longlong **)(lVar1 + 200) + 0x90))(*(longlong **)(lVar1 + 200));
    FUN_013bb8f0(lVar1);
    FUN_010563e0(local_res18[0],*(undefined8 *)(lVar1 + 0x108),param_1 + 0xa0);
    local_2c = FUN_010d6a50(param_1,1,0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return local_2c;
}

