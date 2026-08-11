/* Ghidra address: 005dcf20 */
/* Ghidra symbol: FUN_005dcf20 */


void FUN_005dcf20(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_a8;
  local_68 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_004b3260(param_2);
  local_48 = *(longlong *)(param_1 + 0x18);
  iVar1 = (**(code **)(**(longlong **)(local_48 + 8) + 0x28))();
  local_70 = iVar1 + -1;
  local_2c = 0;
  if (-1 < local_70) {
    do {
      local_70 = iVar1;
      FUN_00414480(local_20);
      local_50 = *(longlong *)(param_1 + 0x18);
      (**(code **)(**(longlong **)(local_50 + 8) + 0x18))
                (*(longlong **)(local_50 + 8),local_20,local_2c);
      local_88 = &DAT_005dd1fc;
      FUN_00416cd0(&local_68,3,&DAT_005dd1ec,local_20[0]);
      (**(code **)(*param_2 + 0x78))(param_2,local_68);
      FUN_00414480(local_20);
      local_58 = *(longlong *)(param_1 + 0x18);
      local_38 = (**(code **)(**(longlong **)(local_58 + 8) + 0x30))
                           (*(longlong **)(local_58 + 8),local_2c);
      iVar1 = (**(code **)(**(longlong **)(local_38 + 8) + 0x28))();
      local_6c = iVar1 + -1;
      local_30 = 0;
      if (-1 < local_6c) {
        do {
          local_6c = iVar1;
          FUN_00414480(&local_28);
          (**(code **)(**(longlong **)(local_38 + 8) + 0x18))
                    (*(longlong **)(local_38 + 8),&local_28,local_30);
          (**(code **)(*param_2 + 0x78))(param_2,local_28);
          FUN_00414480(&local_28);
          local_30 = local_30 + 1;
          local_6c = local_6c + -1;
          iVar1 = local_6c;
        } while (local_6c != 0);
      }
      (**(code **)(*param_2 + 0x78))(param_2,0);
      local_2c = local_2c + 1;
      local_70 = local_70 + -1;
      iVar1 = local_70;
    } while (local_70 != 0);
  }
  FUN_004b3390(param_2);
  FUN_00414480(&local_68);
  FUN_00414560(&local_28,2);
  return;
}

