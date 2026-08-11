/* Ghidra address: 00c01280 */
/* Ghidra symbol: FUN_00c01280 */


void FUN_00c01280(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  char local_19;
  
  local_70 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_38 = 0;
  uVar4 = FUN_00c09df0(param_1);
  local_19 = (uVar4 & 0x40000) == 0;
  local_28 = FUN_00bd1120(param_1[0xaa]);
  if (local_28 == 0) goto code_r0x00c01e20;
  FUN_00c086e0(param_1,*(undefined1 *)(local_28 + 9));
  FUN_00bf3750(param_1);
  *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) | 0x40000;
  uVar4 = (ulonglong)*(byte *)(local_28 + 8);
  if (uVar4 < 8) {
    if (uVar4 < 6) {
      if (uVar4 == 5) {
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
        iVar2 = *(int *)((longlong)param_1 + 0x4cc);
        if (iVar2 < 1) {
          FUN_00c0f2c0(param_1,iVar2 + -1,*(undefined8 *)(local_28 + 0x20));
        }
        else {
          (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                    ((longlong *)param_1[0x9d],&local_38,iVar2 + -1);
          uVar4 = local_38;
          local_58 = 0;
          if (local_38 != 0) {
            local_58 = *(int *)(local_38 - 4);
          }
          if ((local_58 < *(int *)((longlong)param_1 + 0x4c4) + -1) &&
             (iVar2 = FUN_00bf3fb0(param_1,*(undefined8 *)(local_28 + 0x20)), iVar2 == 0)) {
            local_5c = 0;
            if (uVar4 != 0) {
              local_5c = *(int *)(uVar4 - 4);
            }
            FUN_00bd1750(&local_88,0x20,(*(int *)((longlong)param_1 + 0x4c4) - local_5c) + -1);
            FUN_00416ad0(&local_38,local_88);
          }
          FUN_00416ba0(&local_90,local_38,*(undefined8 *)(local_28 + 0x20));
          FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_90);
          (**(code **)(*(longlong *)param_1[0x9d] + 0x98))
                    ((longlong *)param_1[0x9d],*(undefined4 *)(local_28 + 0x18));
        }
        FUN_00c0efe0(param_1,*(int *)((longlong)param_1 + 0x4cc) + 1,1);
        local_a8 = 0;
        local_a0 = *(undefined1 *)(local_28 + 9);
        FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
      }
      else if (uVar4 < 3) {
        FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
        FUN_00bf2ed0(param_1,&local_38);
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,0);
        local_a8 = local_38;
        local_a0 = *(undefined1 *)(local_28 + 9);
        FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
      }
      else if (uVar4 - 3 < 2) goto LAB_00c015d7;
    }
    else if (uVar4 == 6) {
      FUN_00c0a5f0(param_1,local_28 + 0x14,local_28 + 0xc,local_28 + 0x14);
      local_a8 = *(ulonglong *)(local_28 + 0x20);
      local_a0 = *(undefined1 *)(local_28 + 9);
      FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    }
    else if (uVar4 == 7) {
      if (*(char *)(local_28 + 9) == '\x02') {
        local_60 = *(int *)(local_28 + 0xc);
        local_64 = *(int *)(local_28 + 0x14);
        local_68 = local_64;
        if (local_60 < local_64) {
          local_68 = local_60;
        }
        local_3c = local_68;
        local_78 = FUN_00bb7750(local_68,*(undefined4 *)(local_28 + 0x10));
        local_80 = FUN_00bb7750(local_3c,*(undefined4 *)(local_28 + 0x18));
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        local_a8 = local_a8 & 0xffffffffffffff00;
        FUN_00bff8e0(param_1,&local_78,&local_80,uVar5);
      }
      else {
        local_78 = FUN_00bb7750(1,*(undefined4 *)(local_28 + 0x10));
        local_80 = FUN_00bb7750(1,*(undefined4 *)(local_28 + 0x18));
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        local_a8 = local_a8 & 0xffffffffffffff00;
        FUN_00bff8e0(param_1,&local_78,&local_80,uVar5);
      }
      FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
      local_a8 = *(ulonglong *)(local_28 + 0x20);
      local_a0 = *(undefined1 *)(local_28 + 9);
      FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    }
  }
  else if (uVar4 < 0x14) {
    if (uVar4 == 0x13) {
      local_78 = FUN_00bf2b30(param_1);
      local_80 = FUN_00bf2b90(param_1);
      local_a8 = 0;
      local_a0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
      FUN_00bd0e70(param_1[0xab],0x13,&local_78,&local_80);
      local_78 = FUN_00bfaa10(param_1);
      FUN_00c0a5f0(param_1,&local_78,local_28 + 0xc,local_28 + 0x14);
    }
    else {
      if (uVar4 - 8 < 2) goto LAB_00c015d7;
      if (uVar4 - 8 == 10) {
        local_78 = FUN_00bfaa10(param_1);
        local_80 = FUN_00bfaa10(param_1);
        local_a8 = 0;
        local_a0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
        FUN_00bd0e70(param_1[0xab],uVar4,&local_78,&local_80);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
      }
    }
  }
  else if (uVar4 == 0x16) {
LAB_00c015d7:
    if (*(char *)(local_28 + 9) == '\x02') {
      local_40 = *(int *)(local_28 + 0xc);
      local_44 = *(int *)(local_28 + 0x14);
      local_48 = local_44;
      if (local_40 < local_44) {
        local_48 = local_40;
      }
      local_4c = *(uint *)(local_28 + 0x10);
      local_50 = *(uint *)(local_28 + 0x18);
      local_54 = local_50;
      if ((int)local_4c < (int)local_50) {
        local_54 = local_4c;
      }
      uVar4 = (ulonglong)local_54;
      local_30 = FUN_00bb7750(local_48,uVar4);
    }
    else {
      uVar4 = local_28 + 0x14;
      local_30 = FUN_00bcbe80(local_28 + 0xc,uVar4);
    }
    if (*(byte *)(local_28 + 8) < 0x10) {
      bVar6 = ((int)CONCAT62((int6)(uVar4 >> 0x10),1) << (*(byte *)(local_28 + 8) & 0x1f) & 0x208U)
              != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
      if (iVar2 < local_30._4_4_) {
        uVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
        local_78 = FUN_00bb7750(1,uVar3);
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_78);
        (**(code **)(*(longlong *)param_1[0x9d] + 0x78))((longlong *)param_1[0x9d],0);
      }
    }
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_30);
    uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
    uVar4 = (ulonglong)*(byte *)(local_28 + 9);
    FUN_00bfcaf0(param_1,uVar4,uVar5,0);
    bVar1 = *(byte *)(local_28 + 8);
    if (bVar1 < 0x10) {
      bVar6 = ((int)CONCAT62((int6)(uVar4 >> 0x10),1) << (bVar1 & 0x1f) & 0x208U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_30 = *(undefined8 *)(local_28 + 0xc);
    }
    else {
      local_30 = *(undefined8 *)(local_28 + 0x14);
    }
    if ((byte)(bVar1 - 8) < 8 && (1 << (bVar1 - 8 & 0x1f) & 3U) != 0) {
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_30);
    }
    else {
      FUN_00c0a5f0(param_1,&local_30,local_28 + 0xc,local_28 + 0x14);
    }
    local_a8 = 0;
    local_a0 = *(undefined1 *)(local_28 + 9);
    FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    if (*(char *)(local_28 + 8) == '\x16') {
      local_78 = FUN_00bb7750(1,1);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_78);
      uVar5 = FUN_00bb7750(1,1);
      *(undefined8 *)((longlong)param_1 + 0x4bc) = uVar5;
    }
    FUN_00c03710(param_1);
  }
  else if (uVar4 == 0x17) {
    FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
    FUN_00bf2ed0(param_1,&local_38);
    uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
    FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,1);
    local_a8 = local_38;
    local_a0 = *(undefined1 *)(local_28 + 9);
    FUN_00bd0e70(param_1[0xab],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
  }
  if (local_19 != '\0') {
    *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) & 0xfffbffff;
  }
  FUN_00410f20(local_28);
  FUN_00bf28a0(param_1);
code_r0x00c01e20:
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_38);
  return;
}

