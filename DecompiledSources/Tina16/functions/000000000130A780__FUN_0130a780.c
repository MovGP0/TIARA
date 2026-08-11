/* Ghidra address: 0130a780 */
/* Ghidra symbol: FUN_0130a780 */


int FUN_0130a780(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined *local_c0;
  int local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = auStack_e8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_10 = 0;
  local_18 = 0;
  local_30 = -1;
  local_34 = -1;
  local_38 = 0x7fffffff;
  local_40 = -1;
  FUN_0130a4d0(param_1,&local_50);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + 8) + 0x10);
  local_ac = iVar2 + -1;
  local_2c = 0;
  if (-1 < local_ac) {
    do {
      local_ac = iVar2;
      local_28 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8),local_2c);
      FUN_00414b50(&local_58,local_50);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x5db) == '\x02') {
        iVar2 = FUN_004170c0(&DAT_0130abfc,local_50,1);
        if (0 < iVar2) {
          FUN_00414480(&local_10);
          local_60 = FUN_004170c0(&DAT_0130abfc,local_50,1);
          local_60 = local_60 + -1;
          FUN_00416dc0(&local_10,local_50,1,local_60);
          FUN_00414b50(&local_50,local_10);
          FUN_00414480(&local_10);
        }
        FUN_0043f750(&local_88,*(int *)(param_1 + 0xc4) + 1);
        local_c8 = local_88;
        local_c0 = &DAT_0130ac0c;
        FUN_00416cd0(&local_58,4,local_50,&DAT_0130abfc);
      }
      if (local_58 != 0) {
        FUN_01cc0ae0(local_28,&local_90);
        cVar1 = FUN_0130a5b0(auStack_e8,local_90,local_58,0);
        if ((cVar1 != '\0') && (local_30 == -1)) {
          local_30 = local_2c;
          break;
        }
      }
      FUN_01cc0ae0(local_28,&local_98);
      iVar2 = FUN_004170c0(&DAT_0130ac1c,local_98,1);
      if (0 < iVar2) {
        local_18 = 0;
        FUN_01cc0ae0(local_28,&local_18);
        FUN_01cc0ae0(local_28,&local_a0);
        local_70 = FUN_004170c0(&DAT_0130ac1c,local_a0,1);
        local_70 = local_70 + 1;
        FUN_01cc0ae0(local_28,&local_a8);
        local_68 = local_a8;
        local_6c = 0;
        if (local_a8 != 0) {
          local_6c = *(undefined4 *)(local_a8 + -4);
        }
        FUN_00416dc0(&local_48,local_18,local_70);
        FUN_00414480(&local_18);
      }
      local_2c = local_2c + 1;
      local_ac = local_ac + -1;
      iVar2 = local_ac;
    } while (local_ac != 0);
  }
  if (local_30 < 0) {
    if (local_34 < 0) {
      if (local_38 < 0x7fffffff) {
        local_1c = local_40;
      }
      else {
        local_1c = -1;
      }
    }
    else {
      local_1c = local_34;
    }
  }
  else {
    local_1c = local_30;
  }
  FUN_00414560(&local_a8,5);
  FUN_00414560(&local_58,3);
  FUN_00414480(&local_10);
  return local_1c;
}

