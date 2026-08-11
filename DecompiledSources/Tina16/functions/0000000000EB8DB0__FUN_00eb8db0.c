/* Ghidra address: 00eb8db0 */
/* Ghidra symbol: FUN_00eb8db0 */


undefined1 FUN_00eb8db0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  char local_49;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_34;
  longlong local_30;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_60 = auStack_a8;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_21 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  local_7c = iVar1 + -1;
  local_34 = 0;
  if (-1 < local_7c) {
    do {
      local_7c = iVar1;
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),&local_30,local_34);
      local_40 = FUN_004170c0(&DAT_00eb9024,*(undefined8 *)(param_1 + 0x40),1);
      local_40 = local_40 + 1;
      local_3c = 0;
      if (local_res10[0] != 0) {
        local_3c = *(undefined4 *)(local_res10[0] + -4);
      }
      local_20[0] = 0;
      FUN_00416dc0(&local_68,local_res10[0],local_40,local_3c);
      FUN_0043ea00(local_20,local_68);
      local_48 = FUN_004170c0(&LAB_00eb9034,local_30,1);
      local_48 = local_48 + 1;
      local_44 = 0;
      if (local_30 != 0) {
        local_44 = *(undefined4 *)(local_30 + -4);
      }
      FUN_00416dc0(&local_78,local_30,local_48,local_44);
      FUN_0043ea00(&local_70,local_78);
      iVar1 = FUN_00416db0(local_20[0],local_70);
      local_49 = iVar1 == 0;
      FUN_00414480(local_20);
      if (local_49 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x98))
                  (*(longlong **)(param_1 + 0x48),local_34);
        local_21 = 1;
        break;
      }
      local_34 = local_34 + 1;
      local_7c = local_7c + -1;
      iVar1 = local_7c;
    } while (local_7c != 0);
  }
  FUN_00414560(&local_78,3);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_21;
}

