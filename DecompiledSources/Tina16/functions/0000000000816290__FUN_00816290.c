/* Ghidra address: 00816290 */
/* Ghidra symbol: FUN_00816290 */


void FUN_00816290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong local_90;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong *local_70;
  char local_66;
  char local_65;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40 [12];
  undefined4 local_34;
  longlong *local_30;
  
  local_a0 = auStack_108;
  iVar3 = FUN_004230a0(param_1 + 0xc);
  if ((iVar3 != 0) && (iVar3 = FUN_004230c0(param_1 + 0xc), iVar3 != 0)) {
    local_70 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*local_70 + 0x90))(local_70);
    if ((cVar2 != '\0') &&
       (local_48 = (longlong *)FUN_00814f80(param_1), local_48 != (longlong *)0x0)) {
      local_50 = 0;
      lVar7 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
      local_78 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x500) + 0x80) + 0xd0);
      if ((local_78 != 0) && (iVar3 = FUN_007e2ef0(local_78), 0 < iVar3)) {
        uVar8 = FUN_007e3880(local_78);
        cVar2 = FUN_004113d0(uVar8,&PTR_FUN_007db330);
        if (cVar2 != '\0') {
          local_50 = FUN_007e3880(local_78);
        }
      }
      local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      uVar4 = FUN_004230a0(param_1 + 0xc);
      uVar5 = FUN_004230c0(param_1 + 0xc);
      (**(code **)(*local_30 + 0xe0))(local_30,uVar4,uVar5);
      uVar8 = FUN_00609e10(local_30);
      uVar8 = FUN_005ffa40(uVar8);
      local_34 = thunk_FUN_03b57162(uVar8);
      (**(code **)(*local_70 + 0x158))(local_70,local_40,10);
      uVar8 = FUN_00609e10(local_30);
      uVar8 = FUN_005ffa40(uVar8);
      uVar4 = (**(code **)(*local_30 + 0x60))(local_30);
      uVar5 = (**(code **)(*local_30 + 0x48))(local_30);
      local_e8 = CONCAT44(local_e8._4_4_,uVar5);
      FUN_004238d0(&local_b0,0,0,uVar4);
      local_e8 = 0;
      local_e0 = 0;
      FUN_00778dc0(local_70,uVar8,local_40,&local_b0);
      uVar8 = FUN_00609e10(local_30);
      uVar8 = FUN_005ffa40(uVar8);
      thunk_FUN_0402759f(uVar8,local_34);
      lVar7 = FUN_00609e10(local_30);
      (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x10))
                (*(longlong **)(lVar7 + 0x70),*(undefined8 *)(DAT_02012670 + 0x110));
      uVar8 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
      uVar8 = FUN_0065b870(uVar8);
      cVar2 = FUN_00647eb0(uVar8);
      if (cVar2 != '\0') {
        local_98 = FUN_00609e10(local_30);
        lVar7 = FUN_00609e10(local_30);
        local_90 = *(longlong *)(lVar7 + 0x70);
        plVar9 = (longlong *)FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
        uVar4 = (**(code **)(*plVar9 + 0x98))(plVar9);
        uVar4 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(local_90 + 0x18) + 0x28),uVar4,
                                   *(undefined4 *)(DAT_02012670 + 0x98));
        FUN_005fcc80(*(undefined8 *)(local_98 + 0x70),uVar4);
      }
      lVar7 = FUN_00609e10(local_30);
      FUN_005fdcb0(*(undefined8 *)(lVar7 + 0x80),1);
      if ((*(char *)(param_1 + 0xc1) == '\0') || (cVar2 = FUN_00813d90(param_1), cVar2 == '\0')) {
        local_65 = '\0';
      }
      else {
        local_65 = '\x01';
      }
      if (local_65 != '\0') {
        uVar8 = FUN_00609e10(local_30);
        uVar8 = FUN_005ffa40(uVar8);
        uVar10 = FUN_00813d20(param_1);
        uVar10 = FUN_0060ce20(uVar10);
        local_e8 = local_e8 & 0xffffffff00000000;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 3;
        thunk_FUN_041a8a5c(uVar8,2,2,uVar10);
      }
      uVar4 = FUN_00815fa0(auStack_108,local_48,local_50);
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      local_66 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01';
      local_64 = FUN_00813d00(param_1,0xf);
      local_5c = 0;
      if (*(char *)(param_1 + 0xc1) == '\0') {
        local_7c = FUN_004230a0(param_1 + 0xc);
      }
      else {
        local_7c = FUN_004230a0(param_1 + 0xc);
        local_7c = local_7c + local_64 * -3;
      }
      if (local_66 == '\0') {
        if (local_65 == '\0') {
          local_58 = 0;
        }
        else {
          local_58 = local_64;
        }
      }
      else {
        local_58 = local_7c;
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      local_54 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar7 = (longlong)local_54;
          *(int *)(*(longlong *)(param_1 + 0x40) + lVar7 * 0x20) = local_54;
          uVar8 = FUN_00609e10(local_30);
          local_60 = FUN_008156c0(param_1,*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x40) + 8 + lVar7 * 0x20),uVar8)
          ;
          if (local_60 == 0) {
            local_e8 = local_e8 & 0xffffffff00000000;
            FUN_004238d0(&local_b0,0,0,0);
            puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20);
            *puVar1 = local_b0;
            puVar1[1] = uStack_a8;
          }
          else {
            if (local_66 == '\0') {
              *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) = local_58;
              *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) =
                   *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) + local_60;
              lVar7 = (longlong)local_54;
              iVar6 = FUN_004230a0(param_1 + 0xc);
              if ((iVar6 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20)) &&
                 (local_58 != 0)) {
                iVar6 = FUN_00813d00(param_1,0xf);
                local_5c = local_5c + iVar6;
                *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) = 0;
                *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) = local_60;
              }
              local_58 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20);
            }
            else {
              *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) = local_58 - local_60;
              *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) =
                   *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) + local_60;
              lVar7 = (longlong)local_54;
              if ((*(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) < 0) &&
                 (local_58 != 0)) {
                iVar6 = FUN_00813d00(param_1,0xf);
                local_5c = local_5c + iVar6;
                if (*(char *)(param_1 + 0xc1) == '\0') {
                  uVar4 = FUN_004230a0(param_1 + 0xc);
                  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) = uVar4;
                }
                else {
                  iVar6 = FUN_004230a0(param_1 + 0xc);
                  *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) =
                       iVar6 + local_64 * -3;
                }
                *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) =
                     *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) - local_60;
              }
              local_58 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20);
            }
            lVar7 = (longlong)local_54;
            *(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + lVar7 * 0x20) = local_5c;
            iVar6 = FUN_00813d00(param_1,0xf);
            *(int *)(*(longlong *)(param_1 + 0x40) + 0x1c + lVar7 * 0x20) =
                 *(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + lVar7 * 0x20) + iVar6;
          }
          local_54 = local_54 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (local_66 == '\0') {
        local_80 = -1;
        local_54 = *(int *)(param_1 + 0x3c) + -1;
        if (-1 < local_54) {
          do {
            uVar8 = (**(code **)(*local_48 + 0x90))(local_48);
            cVar2 = FUN_00816210(auStack_108,uVar8,local_54);
            if (cVar2 != '\0') {
              *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)local_54 * 0x20) = local_54;
              local_60 = FUN_004230a0(*(longlong *)(param_1 + 0x40) + 0x10 +
                                      (longlong)local_54 * 0x20);
              if ((0 < local_60) &&
                 ((local_80 == -1 ||
                  ((-1 < local_80 &&
                   (*(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + (longlong)local_54 * 0x20) ==
                    *(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + (longlong)local_80 * 0x20)))))))
              {
                lVar7 = (longlong)local_54;
                *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20) = local_7c - local_60;
                *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar7 * 0x20) = local_7c;
                local_7c = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20);
                local_80 = local_54;
              }
            }
            local_54 = local_54 + -1;
          } while (local_54 != -1);
        }
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      local_54 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar7 = (longlong)local_54;
          iVar6 = FUN_004230a0(*(longlong *)(param_1 + 0x40) + 0x10 + lVar7 * 0x20);
          if (0 < iVar6) {
            uVar8 = FUN_00609e10(local_30);
            FUN_008157c0(param_1,*(longlong *)(param_1 + 0x40) + lVar7 * 0x20,uVar8);
          }
          local_54 = local_54 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_58 = (**(code **)(*local_30 + 0x60))(local_30);
      local_5c = (**(code **)(*local_30 + 0x48))(local_30);
      local_5c = local_5c - local_64;
      if (*(char *)(param_1 + 0xc1) != '\0') {
        local_54 = 0;
        do {
          *(int *)(param_1 + 0x50 + (longlong)local_54 * 0x18) = local_54;
          if (local_54 == 0) {
            if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
              *(undefined1 *)(param_1 + 0x54) = 0x3e;
            }
            else if (*(int *)(param_1 + 0x48) == 0) {
              *(undefined1 *)(param_1 + 0x54) = 0x3d;
            }
            else {
              *(undefined1 *)(param_1 + 0x54) = 0x3c;
            }
          }
          else if (local_54 == 1) {
            if ((*(int *)(param_1 + 0x48) == 1) && (*(int *)(param_1 + 0xbc) == 1)) {
              *(undefined1 *)(param_1 + 0x6c) = 0x46;
            }
            else if (*(int *)(param_1 + 0x48) == 1) {
              *(undefined1 *)(param_1 + 0x6c) = 0x45;
            }
            else {
              *(undefined1 *)(param_1 + 0x6c) = 0x44;
            }
          }
          else if (local_54 == 2) {
            if ((*(int *)(param_1 + 0x48) == 2) && (*(int *)(param_1 + 0xbc) == 2)) {
              *(undefined1 *)(param_1 + 0x84) = 0x2e;
            }
            else if (*(int *)(param_1 + 0x48) == 2) {
              *(undefined1 *)(param_1 + 0x84) = 0x2d;
            }
            else {
              *(undefined1 *)(param_1 + 0x84) = 0x2c;
            }
          }
          lVar7 = (longlong)local_54;
          local_e8 = CONCAT44(local_e8._4_4_,local_5c + local_64);
          FUN_004238d0(&local_b0,local_58 - local_64,local_5c,local_58);
          puVar1 = (undefined8 *)(param_1 + 0x58 + lVar7 * 0x18);
          *puVar1 = local_b0;
          puVar1[1] = uStack_a8;
          (**(code **)(*local_70 + 0x228))
                    (local_70,local_40,*(undefined1 *)(param_1 + 0x54 + lVar7 * 0x18));
          uVar8 = FUN_00609e10(local_30);
          uVar8 = FUN_005ffa40(uVar8);
          local_e8 = 0;
          local_e0 = 0;
          FUN_00778dc0(local_70,uVar8,local_40,param_1 + 0x58 + lVar7 * 0x18);
          local_58 = local_58 - local_64;
          local_54 = local_54 + 1;
        } while (local_54 != 3);
      }
      (**(code **)(*param_2 + 0x88))
                (param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),local_30);
      FUN_00410f20(local_30);
    }
  }
  return;
}

