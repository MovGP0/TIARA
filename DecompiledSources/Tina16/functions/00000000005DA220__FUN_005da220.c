/* Ghidra address: 005da220 */
/* Ghidra symbol: FUN_005da220 */


undefined4 FUN_005da220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  undefined4 local_38;
  int local_34;
  longlong local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_30 = 0;
  local_20[0] = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_30,param_2,param_3);
  local_34 = 0;
  if (local_30 != 0) {
    local_34 = *(int *)(local_30 + -4);
  }
  if (2 < local_34) {
    cVar1 = FUN_004575a0(&local_30,&PTR_DAT_005da394,1);
    if (cVar1 != '\0') {
      FUN_00414480(local_20);
      local_38 = 0;
      if (local_30 != 0) {
        local_38 = *(undefined4 *)(local_30 + -4);
      }
      FUN_00416dc0(local_20,local_30,3,local_38);
      FUN_00416ba0(&local_30,&LAB_005da3a8,local_20[0]);
      FUN_00414480(local_20);
    }
  }
  local_24 = FUN_0043fc50(local_30,param_4);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return local_24;
}

