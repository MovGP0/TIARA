/* Ghidra address: 00bffd10 */
/* Ghidra symbol: FUN_00bffd10 */


void FUN_00bffd10(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  short *psVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  short *local_38;
  short *local_30;
  longlong local_28;
  char local_19;
  
  local_70 = auStack_b8;
  local_88 = 0;
  local_48 = 0;
  uVar4 = FUN_00c09df0(param_1);
  local_19 = (uVar4 & 0x40000) == 0;
  local_28 = FUN_00bd1120(param_1[0xab]);
  if (local_28 == 0) goto code_r0x00c006b8;
  FUN_00c086e0(param_1,*(undefined1 *)(local_28 + 9));
  FUN_00bf3750(param_1);
  *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) | 0x40000;
  lVar2 = param_1[0xaa];
  *(undefined1 *)(lVar2 + 0x30) = 1;
  bVar1 = *(byte *)(local_28 + 8);
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      local_38 = (short *)FUN_00416740(*(undefined8 *)(local_28 + 0x20));
      FUN_00bfa9e0(param_1,*(undefined4 *)(local_28 + 0x10));
      if (*(char *)(local_28 + 9) == '\x02') {
        local_58 = *(int *)(local_28 + 0xc);
        local_5c = *(int *)(local_28 + 0x14);
        local_60 = local_5c;
        if (local_58 < local_5c) {
          local_60 = local_58;
        }
        local_54 = local_60;
      }
      else {
        local_54 = 1;
      }
      do {
        local_30 = (short *)FUN_00bcc3c0(local_38);
        if (local_30 == local_38) {
          local_3c = 0;
        }
        else {
          local_3c = (int)(((longlong)local_30 - (longlong)local_38) / 2);
          if (0 < local_3c) {
            (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                      ((longlong *)param_1[0x9d],&local_48,*(int *)((longlong)param_1 + 0x4cc) + -1)
            ;
            FUN_00416e20(&local_48,local_54,local_3c);
            (**(code **)(*(longlong *)param_1[0x9d] + 0x40))
                      ((longlong *)param_1[0x9d],*(int *)((longlong)param_1 + 0x4cc) + -1,local_48);
          }
        }
        if (*local_30 == 0xd) {
          psVar3 = local_30 + 1;
          if (local_30[1] == 10) {
            psVar3 = local_30 + 2;
          }
          local_30 = psVar3;
          *(int *)((longlong)param_1 + 0x4cc) = *(int *)((longlong)param_1 + 0x4cc) + 1;
        }
        local_38 = local_30;
      } while (*local_30 != 0);
      if (*(char *)(local_28 + 9) == '\x02') {
        FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
      }
      else {
        local_50 = CONCAT44(*(undefined4 *)(local_28 + 0x10),
                            *(int *)(local_28 + 0xc) - (int)param_1[0xc3]);
        local_78 = FUN_00bb7750(*(int *)(local_28 + 0x14) - local_3c,
                                *(undefined4 *)(local_28 + 0x18));
        FUN_00c0a5f0(param_1,&local_50,&local_50,&local_78);
      }
      local_98 = *(undefined8 *)(local_28 + 0x20);
      local_90 = *(undefined1 *)(local_28 + 9);
      FUN_00bd0e70(param_1[0xaa],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    }
    else if (bVar1 < 5) {
      if (bVar1 == 4) {
LAB_00c0017a:
        FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
        FUN_00bf2ed0(param_1,&local_48);
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,0);
        local_98 = local_48;
        local_90 = *(undefined1 *)(local_28 + 9);
        FUN_00bd0e70(param_1[0xaa],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
      }
      else if (bVar1 < 3) {
        FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0xc);
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,0);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0x14);
        FUN_00bf2ed0(param_1,&local_88);
        local_98 = local_88;
        local_90 = *(undefined1 *)(local_28 + 9);
        FUN_00bd0e70(param_1[0xaa],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
        if (*(char *)(local_28 + 8) == '\x02') {
          FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
        }
      }
      else if (bVar1 == 3) goto LAB_00c0009a;
    }
    else if (bVar1 == 5) {
      local_50 = *(undefined8 *)(local_28 + 0xc);
      FUN_00c0a5f0(param_1,&local_50,&local_50,&local_50);
      (**(code **)(*param_1 + 0x328))(param_1,0x1fd,0xd,0);
    }
    else if (bVar1 == 6) {
      FUN_00c0a5f0(param_1,local_28 + 0x14,local_28 + 0xc,local_28 + 0x14);
      local_98 = *(undefined8 *)(local_28 + 0x20);
      local_90 = *(undefined1 *)(local_28 + 9);
      FUN_00bd0e70(param_1[0xaa],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
    }
  }
  else if (bVar1 < 0x13) {
    if (bVar1 == 0x12) {
      local_78 = FUN_00bfaa10(param_1);
      local_80 = FUN_00bfaa10(param_1);
      local_98 = 0;
      local_90 = *(undefined1 *)((longlong)param_1 + 0x5f5);
      FUN_00bd0e70(lVar2,0x12,&local_78,&local_80);
      (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
    }
    else {
      if (bVar1 == 8) goto LAB_00c0017a;
      if (bVar1 == 9) {
LAB_00c0009a:
        FUN_00c0a5f0(param_1,local_28 + 0xc,local_28 + 0xc,local_28 + 0x14);
        FUN_00bf2ed0(param_1,&local_48);
        uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
        FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,0);
        local_98 = local_48;
        local_90 = *(undefined1 *)(local_28 + 9);
        FUN_00bd0e70(param_1[0xaa],*(undefined1 *)(local_28 + 8),local_28 + 0xc,local_28 + 0x14);
        (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0x14);
      }
    }
  }
  else if (bVar1 == 0x13) {
    local_78 = FUN_00bf2b30(param_1);
    local_80 = FUN_00bf2b90(param_1);
    local_98 = 0;
    local_90 = *(undefined1 *)((longlong)param_1 + 0x5f5);
    FUN_00bd0e70(lVar2,0x13,&local_78,&local_80);
    local_78 = FUN_00bfaa10(param_1);
    FUN_00c0a5f0(param_1,&local_78,local_28 + 0xc,local_28 + 0x14);
  }
  else if (bVar1 == 0x17) {
    local_98 = 0;
    local_90 = *(undefined1 *)(local_28 + 9);
    FUN_00bd0e70(lVar2,0x17,local_28 + 0xc,local_28 + 0x14);
    FUN_00c0a5f0(param_1,local_28 + 0x14,local_28 + 0x14,local_28 + 0x14);
    uVar5 = FUN_00416740(*(undefined8 *)(local_28 + 0x20));
    FUN_00bfcaf0(param_1,*(undefined1 *)(local_28 + 9),uVar5,1);
    (**(code **)(*param_1 + 0x2a8))(param_1,local_28 + 0xc);
  }
  *(undefined1 *)(param_1[0xaa] + 0x30) = 0;
  if (local_19 != '\0') {
    *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) & 0xfffbffff;
  }
  FUN_00410f20(local_28);
  FUN_00bf28a0(param_1);
code_r0x00c006b8:
  FUN_00414480(&local_88);
  FUN_00414480(&local_48);
  return;
}

