/* Ghidra address: 00af3dc0 */
/* Ghidra symbol: FUN_00af3dc0 */


void FUN_00af3dc0(longlong *param_1,undefined8 param_2,char param_3,ushort param_4,
                 undefined4 param_5,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int *local_c0;
  int local_b8;
  undefined4 local_b0;
  int local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_80;
  longlong local_70;
  int local_64;
  int local_60;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_42;
  byte local_41;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_90 = auStack_e8;
  local_98 = 0;
  local_50 = 0;
  if ((*(ushort *)(param_1 + 0x114) & 0x100) != 0) {
    if ((param_3 != '\x02') || (local_90 = auStack_e8, param_6 != (int)param_1[0x12a])) {
      *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xfeff;
      local_90 = auStack_e8;
      uVar2 = FUN_00af6df0(param_1);
      FUN_0064e140(param_1[0xe8],uVar2);
    }
    goto LAB_00af456d;
  }
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,param_6);
  FUN_00650ea0(param_1,param_3,param_4,param_5);
  if (param_1[0x110] != 0) {
    local_c8 = (undefined8 *)&local_3c;
    local_c0 = &local_40;
    cVar1 = FUN_00af3590(param_1,param_5,param_6,&local_38);
    if ((cVar1 != '\0') && (cVar1 = FUN_004113d0(local_38,&PTR_FUN_00a7e788), cVar1 != '\0')) {
      local_c8 = (undefined8 *)CONCAT62(local_c8._2_6_,param_4);
      local_c0 = (int *)CONCAT44(local_c0._4_4_,param_5);
      local_b8 = param_6;
      local_b0 = local_3c;
      local_a8 = local_40;
      (*(code *)param_1[0x110])(param_1[0x111],param_1,local_38,param_3);
    }
  }
  if ((param_1[0xb1] != 0) || (param_1[0x10c] != 0)) {
    local_c8 = (undefined8 *)&local_3c;
    local_c0 = &local_40;
    cVar1 = FUN_00af3590(param_1,param_5,param_6,&local_38);
    if (cVar1 == '\0') {
LAB_00af3ff7:
      local_41 = 0;
    }
    else {
      cVar1 = FUN_004113d0(local_38,&PTR_FUN_00a83768);
      if (cVar1 == '\0') goto LAB_00af3ff7;
      local_41 = 1;
    }
    if ((local_41 & param_1[0xb1] != 0) != 0) {
      local_c8 = (undefined8 *)CONCAT62(local_c8._2_6_,param_4);
      local_c0 = (int *)CONCAT44(local_c0._4_4_,local_3c);
      local_b8 = local_40;
      (*(code *)param_1[0xb1])(param_1[0xb2],param_1,local_38,param_3);
    }
    if ((param_3 == '\x01') && (param_1[0x10c] != 0)) {
      local_20 = FUN_00410e60(&DAT_00ae81a0,1);
      if (local_41 != 0) {
        uVar3 = FUN_004113f0(local_38,&PTR_FUN_00a83768);
        *(undefined8 *)(local_20 + 0x18) = uVar3;
        *(undefined4 *)(local_20 + 0x20) = local_3c;
        *(int *)(local_20 + 0x24) = local_40;
      }
      local_c0 = (int *)FUN_00414480(param_1 + 0x129);
      local_c8 = &local_30;
      uVar4 = FUN_00af5250(param_1,param_5,param_6,&local_28);
      if ((uVar4 & 1) != 0) {
        FUN_00414ad0(local_20 + 8,*(undefined8 *)(local_28 + 8));
        FUN_00414ad0(local_20 + 0x10,*(undefined8 *)(local_28 + 0x10));
        FUN_00410f20(local_28);
      }
      local_c0 = (int *)FUN_00414480(&local_50);
      local_c8 = &local_58;
      cVar1 = FUN_00af4910(param_1,param_5,param_6,(longlong)&local_58 + 4);
      if (cVar1 != '\0') {
        FUN_00414ad0(local_20 + 0x28,local_50);
      }
      FUN_00742eb0(param_1[0xe9],0);
      (*(code *)param_1[0x10c])(param_1[0x10d],param_1,local_20);
      FUN_00742eb0(param_1[0xe9],1);
      FUN_00410f20(local_20);
    }
  }
  if ((param_3 == '\0') && ((param_4 & 1) == 0)) {
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xffbf;
    (**(code **)(*param_1 + 0x468))(param_1,param_5,param_6);
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xfdff;
    FUN_00aa63b0(param_1[0x116],0);
    local_42 = (*(ushort *)(param_1 + 0x114) & 0x80) != 0;
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xff7f;
    if (((bool)local_42) && (*(int *)(param_1[0x116] + 0xa0) <= *(int *)(param_1[0x116] + 0x9c))) {
      local_c0 = (int *)FUN_00414480(param_1 + 0x129);
      local_c8 = &local_30;
      local_59 = FUN_00af5250(param_1,param_5,param_6,&local_28);
      if ((local_59 & 2) == 0) {
        if ((local_59 & 1) != 0) {
          FUN_00414ad0(param_1 + 0x128,*(undefined8 *)(local_28 + 8));
          if ((param_4 & 4) != 0) {
            FUN_00414ad0(local_28 + 0x10,L"_blank");
          }
          FUN_00414ad0(param_1 + 0x127,*(undefined8 *)(local_28 + 0x10));
          (**(code **)(*(longlong *)param_1[0x11e] + 0x60))
                    ((longlong *)param_1[0x11e],*(undefined8 *)(local_28 + 0x20));
          FUN_00af3740(param_1,&local_98,*(undefined4 *)(local_28 + 0x28),
                       *(undefined4 *)(local_28 + 0x2c));
          FUN_00414ad0(param_1 + 0x120,local_98);
          local_64 = *(int *)(local_28 + 0x18);
          lVar5 = FUN_00af6c00();
          iVar7 = *(int *)(lVar5 + 0x10);
          local_60 = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar3 = FUN_00af6c00(param_1);
              local_80 = FUN_00a94970(uVar3,local_60);
              if ((local_64 == *(int *)(*(longlong *)(local_80 + 8) + 0x18)) &&
                 (*(longlong *)(local_80 + 0x60) != 0)) {
                local_70 = FUN_007f9b70(*(undefined8 *)(local_80 + 0x60),1);
                if (local_70 != 0) {
                  uVar3 = *(undefined8 *)(local_80 + 0x60);
                  pcVar6 = (code *)FUN_00411550(uVar3,0xffb3);
                  cVar1 = (*pcVar6)(uVar3);
                  if (cVar1 != '\0') {
                    *(undefined1 *)((longlong)param_1 + 0x954) = 1;
                    FUN_00801e40(local_70,*(undefined8 *)(local_80 + 0x60));
                    *(undefined1 *)((longlong)param_1 + 0x954) = 0;
                  }
                }
                break;
              }
              local_60 = local_60 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_00410f20(local_28);
          if ((*(ushort *)((longlong)param_1 + 0x79a) & 0x400) == 0) {
            *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x20;
          }
          FUN_00af2a90(param_1);
        }
      }
      else {
        FUN_00a9a2a0(local_30,0);
      }
    }
  }
LAB_00af456d:
  FUN_00414480(&local_98);
  FUN_00414480(&local_50);
  return;
}

