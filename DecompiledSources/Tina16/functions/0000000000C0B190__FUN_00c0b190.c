/* Ghidra address: 00c0b190 */
/* Ghidra symbol: FUN_00c0b190 */


void FUN_00c0b190(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int extraout_var;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  int local_84;
  bool local_7d;
  int local_7c;
  longlong local_78;
  bool local_6d;
  int local_6c;
  longlong local_68;
  int local_60;
  char local_5a;
  char local_59;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  short *local_48;
  longlong local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  char local_19;
  
  local_90 = auStack_108;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_38 = 0;
  local_40 = 0;
  local_59 = FUN_00bf2cd0(param_1);
  uVar6 = FUN_00c09df0(param_1);
  if (((uVar6 & 0x1000000) != 0) &&
     (cVar2 = FUN_00bf2cb0(param_1), cVar2 != '\0' || local_59 != '\0')) {
    FUN_00c0c7d0(param_1);
    if (local_59 != '\0') {
      if (*(int *)(param_1 + 0x4b4) < *(int *)(param_1 + 0x4bc)) {
        *(undefined4 *)(param_1 + 0x4b4) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x4bc) = 1;
      }
    }
    goto LAB_00c0bb3a;
  }
  local_28 = 0;
  local_30 = 0;
  local_2c = 0;
  local_5a = '\0';
  if ((*(uint *)(param_1 + 0x63a) & 0x400000) != 0) {
    local_30 = *(int *)(param_1 + 0x4cc) + -1;
    if ((local_30 < 1) ||
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                          (*(longlong **)(param_1 + 0x4e8)), iVar3 <= local_30)) {
      local_5a = '\x01';
    }
    else {
      local_30 = local_30 + -1;
      do {
        local_98 = FUN_00bfaa10(param_1);
        uVar4 = FUN_00c0ec90(param_1,&local_98);
        uVar5 = FUN_00c11030(param_1,local_30 + 1);
        local_98 = FUN_00bb7730(uVar4,uVar5);
        local_2c = FUN_00c0ee50(param_1,&local_98);
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_38,local_30);
        local_60 = 0;
        if (local_38 != 0) {
          local_60 = *(int *)(local_38 + -4);
        }
        if (local_2c <= local_60) {
          lVar7 = FUN_00414de0(&local_38);
          local_48 = (short *)(lVar7 + -2 + (longlong)local_2c * 2);
          goto LAB_00c0b3f6;
        }
        local_30 = local_30 + -1;
      } while (-1 < local_30);
    }
  }
  goto LAB_00c0b48b;
  while( true ) {
    local_28 = local_28 + 1;
    local_48 = local_48 + 1;
    if (*local_48 == 0) break;
LAB_00c0b3f6:
    if ((*local_48 == 9) || (*local_48 == 0x20)) break;
  }
  sVar1 = *local_48;
  while ((sVar1 != 0 && ((*local_48 == 9 || (*local_48 == 0x20))))) {
    local_28 = local_28 + 1;
    local_48 = local_48 + 1;
    sVar1 = *local_48;
  }
LAB_00c0b48b:
  FUN_00bd0f90(*(undefined8 *)(param_1 + 0x550));
  cVar2 = FUN_00bf2c80(param_1);
  if (cVar2 != '\0') {
    FUN_00bf2ed0(param_1,&local_a0);
    local_e8 = local_a0;
    local_e0 = *(undefined1 *)(param_1 + 0x5f5);
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),4,param_1 + 0x4b4,param_1 + 0x4bc);
    FUN_00bfb540(param_1,0);
  }
  local_24 = FUN_00bfaa10(param_1);
  if (local_28 == 0) {
    if ((*(uint *)(param_1 + 0x63a) & 0x2000000) == 0) {
      local_28 = *(int *)(param_1 + 0x618);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x618);
      local_28 = iVar3 - ((int)local_24 + -1) % iVar3;
      if (local_28 == 0) {
        local_28 = iVar3;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x63a) & 0x2000000) == 0) {
    uVar6 = FUN_00c09df0(param_1);
    if ((uVar6 & 0x4000000) == 0) {
      local_6d = false;
    }
    else {
      FUN_00bf2c20(param_1,&local_a8);
      local_68 = local_a8;
      local_6c = 0;
      if (local_a8 != 0) {
        local_6c = *(int *)(local_a8 + -4);
      }
      local_6d = local_6c < (int)local_24;
    }
    if (local_6d == false) {
      if ((((*(uint *)(param_1 + 0x63a) & 0x400000) == 0) || (local_5a != '\0')) || (local_30 < 0))
      {
        FUN_00414b50(&local_40,&LAB_00c0bc10);
      }
      else {
        FUN_00bfaa10(param_1);
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_b0,extraout_var + -1);
        iVar3 = FUN_00bfaa10(param_1);
        FUN_00416dc0(&local_40,local_b0,1,iVar3 + -1);
        while (iVar3 = FUN_004170c0(&LAB_00c0bc10,local_40,1), 0 < iVar3) {
          uVar4 = FUN_004170c0(&LAB_00c0bc10,local_40,1);
          FUN_00416e20(&local_40,uVar4,1);
        }
        FUN_00bd17b0(&local_b8,local_40);
        FUN_00414b50(&local_40,local_b8);
        if (local_40 == 0) {
          local_98 = FUN_00bb7750(local_2c + local_28,local_30 + 1);
          local_28 = FUN_00c0ec90(param_1,&local_98);
          local_50 = FUN_00bfaa40(param_1);
          local_54 = local_28 - local_50;
          local_58 = *(int *)(param_1 + 0x618) - (local_50 + -1) % *(int *)(param_1 + 0x618);
          if (local_58 <= local_54) {
            FUN_00414b50(&local_40,&LAB_00c0bc10);
            local_54 = local_54 - local_58;
          }
          for (; *(int *)(param_1 + 0x618) <= local_54;
              local_54 = local_54 - *(int *)(param_1 + 0x618)) {
            FUN_00416ad0(&local_40,&LAB_00c0bc10);
          }
          if (0 < local_54) {
            FUN_00bd1750(&local_c0,0x20,local_54);
            FUN_00416ad0(&local_40,local_c0);
          }
        }
        else {
          FUN_00414b50(&local_40,&LAB_00c0bc10);
        }
      }
      uVar6 = FUN_00c09df0(param_1);
      if ((uVar6 & 0x4000000) == 0) {
        local_7d = false;
      }
      else {
        FUN_00bf2c20(param_1,&local_d0);
        FUN_00bf1640(&local_c8,local_d0);
        local_78 = local_c8;
        local_7c = 0;
        if (local_c8 != 0) {
          local_7c = *(int *)(local_c8 + -4);
        }
        local_7d = local_7c == 0;
      }
      if (local_7d == false) {
        local_84 = 0;
        if (local_40 != 0) {
          local_84 = *(int *)(local_40 + -4);
        }
        local_4c = (int)local_24 + local_84;
      }
      else {
        local_4c = FUN_00bcc200(local_40,*(undefined4 *)(param_1 + 0x618));
        local_4c = (int)local_24 + local_4c;
      }
    }
    else {
      local_98 = FUN_00bfaa10(param_1);
      local_50 = FUN_00c0ec90(param_1,&local_98);
      if ((((*(uint *)(param_1 + 0x63a) & 0x400000) == 0) || (local_5a != '\0')) || (local_30 < 0))
      {
        local_54 = *(int *)(param_1 + 0x618) - (local_50 + -1) % *(int *)(param_1 + 0x618);
      }
      else {
        local_98 = FUN_00bb7750(local_2c + local_28,local_30 + 1);
        local_28 = FUN_00c0ec90(param_1,&local_98);
        local_54 = local_28 - local_50;
      }
      local_4c = (int)local_24 + local_54;
    }
  }
  else {
    FUN_00bd1750(&local_40,0x20,local_28);
    local_4c = (int)local_24 + local_28;
  }
  FUN_00bfb540(param_1,local_40);
  if (*(char *)(param_1 + 0x5f5) != '\x02') {
    local_98 = FUN_00bfaa10(param_1);
    FUN_00bf2ed0(param_1,&local_d8);
    local_e8 = local_d8;
    local_e0 = *(undefined1 *)(param_1 + 0x5f5);
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),0,&local_24,&local_98);
  }
  FUN_00bd1000(*(undefined8 *)(param_1 + 0x550));
  local_19 = (*(uint *)(param_1 + 0x63a) & 0x40000) == 0;
  *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) | 0x40000;
  FUN_00bfa9b0(param_1,local_4c);
  if (local_19 != '\0') {
    *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) & 0xfffbffff;
  }
  FUN_00c03710(param_1);
LAB_00c0bb3a:
  FUN_00414560(&local_d8,8);
  FUN_00414560(&local_40,2);
  return;
}

