/* Ghidra address: 005dd980 */
/* Ghidra symbol: FUN_005dd980 */


void FUN_005dd980(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 local_88;
  int local_84;
  bool local_7d;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  short *local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_48 = (short *)0x0;
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_005dce70(param_1);
  local_50 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_9c = iVar1 + -1;
  local_3c = 0;
  if (-1 < local_9c) {
    do {
      local_9c = iVar1;
      (**(code **)(*param_2 + 0x18))(param_2,local_60,local_3c);
      FUN_00457870(local_60,&local_48);
      if ((local_48 != (short *)0x0) && (*local_48 != 0x3b)) {
        if (*local_48 == 0x5b) {
          local_7c = 0;
          if (local_48 != (short *)0x0) {
            local_7c = *(int *)(local_48 + -2);
          }
          local_7d = local_48[local_7c + -1] == 0x5d;
        }
        else {
          local_7d = false;
        }
        if (local_7d == false) {
          if (local_50 != 0) {
            local_40 = FUN_004170c0(&LAB_005dde20,local_48,1);
            local_40 = local_40 + -1;
            if (local_40 < 0) {
              FUN_005dc670(local_50,local_48);
            }
            else {
              FUN_00414480(&local_38);
              FUN_00416dc0(&local_38,local_48,1,local_40);
              local_28 = 0;
              FUN_00414b50(&local_70,local_38);
              FUN_00457b10(&local_70,&local_28);
              FUN_00414480(&local_30);
              local_88 = 0;
              if (local_48 != (short *)0x0) {
                local_88 = *(undefined4 *)(local_48 + -2);
              }
              FUN_00416dc0(&local_30,local_48,local_40 + 2,local_88);
              FUN_00414b50(&local_78,local_30);
              FUN_004579e0(&local_78,&local_98);
              FUN_005dc590(local_50,local_28,local_98);
              FUN_00414480(&local_28);
              FUN_00414480(&local_30);
              FUN_00414480(&local_38);
            }
          }
        }
        else {
          local_84 = 0;
          if (local_48 != (short *)0x0) {
            local_84 = *(int *)(local_48 + -2);
          }
          FUN_00414480(local_20);
          FUN_00416dc0(local_20,local_48,2,local_84 + -2);
          FUN_00414b50(&local_68,local_20[0]);
          FUN_00457870(&local_68,&local_48);
          FUN_00414480(local_20);
          local_50 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18),local_48);
          if (local_50 == 0) {
            local_50 = FUN_005dc900(*(undefined8 *)(param_1 + 0x18),local_48);
          }
        }
      }
      local_3c = local_3c + 1;
      local_9c = local_9c + -1;
      iVar1 = local_9c;
    } while (local_9c != 0);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_00414480(&local_98);
  FUN_00414560(&local_78,4);
  FUN_00414480(&local_48);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

