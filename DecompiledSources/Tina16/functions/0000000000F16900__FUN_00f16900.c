/* Ghidra address: 00f16900 */
/* Ghidra symbol: FUN_00f16900 */


void FUN_00f16900(longlong *param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                 undefined1 param_9,undefined1 param_10,undefined4 param_11,longlong *param_12,
                 longlong param_13,uint param_14,undefined4 param_15)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_res20;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (undefined *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_8);
  if (*param_12 == 0) {
    FUN_01ade6a0(param_13,param_2);
    bVar13 = true;
    lVar5 = FUN_01cdf400(&DAT_01cdd500,1);
    *param_12 = lVar5;
    *(byte *)(*param_12 + 0x58) = param_3;
    *(longlong *)(*param_12 + 0x50) = param_13;
    FUN_00414ad0(*param_12 + 0x60,param_8);
    if (param_3 < 5) {
      if ((param_3 != 4) && (param_3 != 0)) {
        if (param_3 == 1) {
          *(undefined1 *)(*param_12 + 0x59) = 1;
          lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
          *(longlong *)(lVar5 + 0x60) = param_13;
          *(longlong *)(lVar5 + 0x68) = *param_12;
          *(undefined1 *)(lVar5 + 0xf0) = 0;
          *(undefined1 *)(lVar5 + 0x70) = param_5;
          FUN_01cd64a0(lVar5,local_res20);
          *(undefined1 *)(lVar5 + 0x80) = param_6;
          *(undefined4 *)(lVar5 + 0x90) = param_7;
          (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x80))
                    (*(longlong **)(*param_12 + 0x70),&DAT_00f18d44,lVar5);
          uVar12 = 1;
          FUN_01cc5c60(param_2);
          do {
            lVar5 = FUN_01cc5cc0(param_2);
            if (lVar5 != 0) {
              lVar6 = FUN_01ab6b60(&PTR_FUN_01aaff18,1);
              FUN_01ab6ed0(lVar6,param_13);
              *(longlong *)(lVar6 + 0x70) = *param_12;
              FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x78),
                           *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar12 * 4));
              uVar12 = (longlong)((int)uVar12 + 1) % 0xb & 0xffffffff;
              *(longlong **)(lVar6 + 0x80) = param_1;
              FUN_01cc8360();
              *(undefined8 *)(lVar6 + 0x88) = param_2;
              *(undefined4 *)(lVar6 + 0x90) = param_15;
              *(longlong *)(lVar6 + 0x98) = lVar5;
              cVar1 = FUN_004113d0(lVar5,&PTR_FUN_01cb46a8);
              if (cVar1 != '\0') {
                if (*(longlong *)(lVar5 + 0x48) == 0) {
                  iVar4 = *(int *)(*(longlong *)(lVar5 + 0x38) + 0x10);
                  iVar10 = 0;
                  if (-1 < iVar4 + -1) {
                    do {
                      uVar14 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0x38),iVar10);
                      FUN_01cc0ae0(uVar14,&local_80);
                      FUN_00416cd0(lVar6 + 0xe0,3,*(undefined8 *)(lVar6 + 0xe0),local_80,
                                   &LAB_00f18d80);
                      iVar10 = iVar10 + 1;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                }
                else {
                  FUN_00416ba0(lVar6 + 0xe0,*(undefined8 *)(lVar5 + 0x48),&LAB_00f18d80);
                }
                *(undefined1 *)(lVar6 + 0xd8) = *(undefined1 *)(lVar5 + 0x50);
              }
              uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
              *(undefined8 *)(lVar6 + 0xb8) = uVar14;
              uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
              *(undefined8 *)(lVar6 + 0xc0) = uVar14;
              if (bVar13) {
                local_b0 = *(undefined8 *)(lVar6 + 0xb8);
                local_a8 = *(undefined8 *)(lVar6 + 0xc0);
                bVar13 = false;
              }
              else {
                local_b0 = FUN_00b90650(local_b0,*(undefined8 *)(lVar6 + 0xb8));
                local_a8 = FUN_00b90620(local_a8,*(undefined8 *)(lVar6 + 0xc0));
              }
              uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                                 (*(longlong **)(*param_12 + 0x70),0);
              uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
              *(undefined8 *)(lVar6 + 0xe8) = uVar14;
              FUN_01ab6de0(lVar6,&local_88);
              (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                        (*(longlong **)(*param_12 + 0x80),local_88,lVar6);
              lVar9 = FUN_01ccd700(&DAT_01ccbf00,1);
              *(longlong *)(lVar6 + 0xf0) = lVar9;
              *(longlong *)(lVar9 + 0x60) = param_13;
              *(longlong *)(lVar9 + 0x68) = *param_12;
              *(undefined1 *)(lVar9 + 0xf0) = 3;
              FUN_01cd6740(lVar9,1);
              uVar2 = FUN_005fd4d0(*(undefined8 *)(lVar6 + 0x78));
              FUN_005fc860(*(undefined8 *)(lVar9 + 0x98),uVar2);
              FUN_01cc0ae0(lVar5,&local_90);
              FUN_00414ad0(lVar9 + 0xd8,local_90);
              FUN_004ae7e0(*(undefined8 *)(lVar9 + 0xf8),lVar6);
              (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x80))
                        (*(longlong **)(*param_12 + 0x78),&DAT_00f18d54,lVar9);
            }
          } while (lVar5 != 0);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          *(undefined8 *)(lVar5 + 0xb8) = local_b0;
          *(undefined8 *)(lVar5 + 0xc0) = local_a8;
          *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
          *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
          uVar2 = FUN_01ccdde0(lVar5);
          uVar3 = FUN_01ccde00(lVar5);
          FUN_01cd43b0(lVar5,uVar2,uVar3);
          *(undefined8 *)(lVar5 + 200) = local_b0;
          *(undefined8 *)(lVar5 + 0xd0) = local_a8;
          iVar4 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x28))
                            (*(longlong **)(*param_12 + 0x78));
          iVar10 = 1;
          if (0 < iVar4) {
            do {
              uVar14 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
              (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x80))
                        (*(longlong **)(*param_12 + 0x88),L"Grid",uVar14);
              iVar11 = iVar10 + -1;
              lVar5 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                                (*(longlong **)(*param_12 + 0x88),iVar11);
              *(longlong *)(lVar5 + 0x78) = *param_12;
              uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                                 (*(longlong **)(*param_12 + 0x88),iVar11);
              uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                                (*(longlong **)(*param_12 + 0x70),0);
              FUN_01cd9880(uVar14,uVar7);
              uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                                 (*(longlong **)(*param_12 + 0x88),iVar11);
              uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                                (*(longlong **)(*param_12 + 0x78),iVar11);
              FUN_01cd98a0(uVar14,uVar7);
              iVar10 = iVar10 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar4 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x28))
                            (*(longlong **)(*param_12 + 0x80));
          iVar10 = 1;
          if (0 < iVar4) {
            do {
              uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                                 (*(longlong **)(*param_12 + 0x70),0);
              lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
              (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                        (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
              FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8));
              iVar10 = iVar10 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          goto LAB_00f18c76;
        }
        if (param_3 != 2) goto LAB_00f18c76;
      }
      *(undefined1 *)(*param_12 + 0x59) = 0;
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 0;
      *(undefined1 *)(lVar5 + 0x70) = param_5;
      FUN_01cd64a0(lVar5,local_res20);
      *(undefined1 *)(lVar5 + 0x80) = param_6;
      *(undefined4 *)(lVar5 + 0x90) = param_7;
      if ((*(char *)(param_13 + 0x10b) == '\0') && (*(char *)(lVar5 + 0x70) != '\0')) {
        uVar2 = FUN_01cd66b0(lVar5);
        uVar2 = FUN_00b905e0(uVar2,2);
        *(undefined4 *)(lVar5 + 0x90) = uVar2;
      }
      (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x80))
                (*(longlong **)(*param_12 + 0x70),&DAT_00f18d44,lVar5);
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 1;
      *(undefined1 *)(lVar5 + 0x70) = param_9;
      FUN_01cd64a0(lVar5,param_8);
      *(undefined1 *)(lVar5 + 0x80) = param_10;
      *(undefined4 *)(lVar5 + 0x90) = param_11;
      if ((*(char *)(param_13 + 0x10c) == '\0') && (*(char *)(lVar5 + 0x70) != '\0')) {
        uVar2 = FUN_01cd66b0(lVar5);
        uVar2 = FUN_00b905e0(uVar2,2);
        *(undefined4 *)(lVar5 + 0x90) = uVar2;
      }
      (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x80))
                (*(longlong **)(*param_12 + 0x78),&DAT_00f18d54,lVar5);
      uVar12 = (ulonglong)param_14;
      FUN_01cc5c60(param_2);
      do {
        lVar5 = FUN_01cc5cc0(param_2);
        if (lVar5 != 0) {
          iVar4 = (int)uVar12;
          if (param_3 == 0) {
            lVar6 = FUN_01ab2610(&PTR_FUN_01aae560,1);
            FUN_01ab28d0(lVar6,param_13);
            *(longlong *)(lVar6 + 0x78) = *param_12;
            FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x60),
                         *(undefined4 *)(PTR_DAT_02003c00 + (longlong)iVar4 * 4));
            uVar12 = (longlong)(iVar4 + 1) % 0xb & 0xffffffff;
            *(longlong **)(lVar6 + 200) = param_1;
            FUN_01cc8360();
            *(undefined8 *)(lVar6 + 0xd0) = param_2;
            *(undefined4 *)(lVar6 + 0xd8) = param_15;
            *(longlong *)(lVar6 + 0xe0) = lVar5;
            uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0x80) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0x88) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0x90) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x70))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0x98) = uVar14;
            if (bVar13) {
              local_b0 = FUN_01ab2a30(lVar6);
              local_a8 = FUN_01ab2a60(lVar6);
              local_a0 = *(undefined8 *)(lVar6 + 0x90);
              local_98 = *(undefined8 *)(lVar6 + 0x98);
              bVar13 = false;
            }
            else {
              uVar14 = FUN_01ab2a30(lVar6);
              local_b0 = FUN_00b90650(local_b0,uVar14);
              uVar14 = FUN_01ab2a60(lVar6);
              local_a8 = FUN_00b90620(local_a8,uVar14);
              local_a0 = FUN_00b90650(local_a0,*(undefined8 *)(lVar6 + 0x90));
              local_98 = FUN_00b90620(local_98,*(undefined8 *)(lVar6 + 0x98));
            }
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                               (*(longlong **)(*param_12 + 0x70),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0xf8) = uVar14;
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                               (*(longlong **)(*param_12 + 0x78),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0x100) = uVar14;
            FUN_01ab2940(lVar6,local_50);
            (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                      (*(longlong **)(*param_12 + 0x80),local_50[0],lVar6);
          }
          else if (param_3 == 2) {
            lVar6 = FUN_01ab6b60(&PTR_FUN_01ab0e08,1);
            FUN_01ab6ed0(lVar6,param_13);
            *(longlong *)(lVar6 + 0x70) = *param_12;
            FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x78),
                         *(undefined4 *)(PTR_DAT_02003c00 + (longlong)iVar4 * 4));
            FUN_005fd6d0(*(undefined8 *)(lVar6 + 0x78),3);
            uVar12 = (longlong)(iVar4 + 1) % 0xb & 0xffffffff;
            *(longlong **)(lVar6 + 0x80) = param_1;
            FUN_01cc8360();
            *(undefined8 *)(lVar6 + 0x88) = param_2;
            *(undefined4 *)(lVar6 + 0x90) = param_15;
            *(longlong *)(lVar6 + 0x98) = lVar5;
            uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xb8) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xc0) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 200) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x70))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xd0) = uVar14;
            if (bVar13) {
              local_b0 = *(undefined8 *)(lVar6 + 0xb8);
              local_a8 = *(undefined8 *)(lVar6 + 0xc0);
              local_a0 = FUN_00b90650(0,*(undefined8 *)(lVar6 + 200));
              local_98 = FUN_00b90620(0,*(undefined8 *)(lVar6 + 0xd0));
              bVar13 = false;
            }
            else {
              local_b0 = FUN_00b90650(local_b0,*(undefined8 *)(lVar6 + 0xb8));
              local_a8 = FUN_00b90620(local_a8,*(undefined8 *)(lVar6 + 0xc0));
              local_a0 = FUN_00b90650(local_a0,*(undefined8 *)(lVar6 + 200));
              local_98 = FUN_00b90620(local_98,*(undefined8 *)(lVar6 + 0xd0));
            }
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                               (*(longlong **)(*param_12 + 0x70),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0xe8) = uVar14;
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                               (*(longlong **)(*param_12 + 0x78),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0xf0) = uVar14;
            FUN_01ab6de0(lVar6,&local_58);
            (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                      (*(longlong **)(*param_12 + 0x80),local_58,lVar6);
          }
          else if (param_3 == 4) {
            lVar6 = FUN_01abb390(&DAT_01ab2000,1);
            FUN_01ab6ed0(lVar6,param_13);
            *(longlong *)(lVar6 + 0x70) = *param_12;
            FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x78),
                         *(undefined4 *)(PTR_DAT_02003c00 + (longlong)iVar4 * 4));
            uVar12 = (longlong)(iVar4 + 1) % 0xb & 0xffffffff;
            *(longlong **)(lVar6 + 0x80) = param_1;
            FUN_01cc8360();
            *(undefined8 *)(lVar6 + 0x88) = param_2;
            *(undefined4 *)(lVar6 + 0x90) = param_15;
            *(longlong *)(lVar6 + 0x98) = lVar5;
            uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xb8) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xc0) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 200) = uVar14;
            uVar14 = (**(code **)(*param_1 + 0x70))(param_1,lVar5);
            *(undefined8 *)(lVar6 + 0xd0) = uVar14;
            if (bVar13) {
              local_b0 = *(undefined8 *)(lVar6 + 0xb8);
              local_a8 = *(undefined8 *)(lVar6 + 0xc0);
              local_a0 = FUN_00b90650(0,*(undefined8 *)(lVar6 + 200));
              local_98 = FUN_00b90620(0,*(undefined8 *)(lVar6 + 0xd0));
              bVar13 = false;
            }
            else {
              local_b0 = FUN_00b90650(local_b0,*(undefined8 *)(lVar6 + 0xb8));
              local_a8 = FUN_00b90620(local_a8,*(undefined8 *)(lVar6 + 0xc0));
              local_a0 = FUN_00b90650(local_a0,*(undefined8 *)(lVar6 + 200));
              local_98 = FUN_00b90620(local_98,*(undefined8 *)(lVar6 + 0xd0));
            }
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                               (*(longlong **)(*param_12 + 0x70),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0xe8) = uVar14;
            uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                               (*(longlong **)(*param_12 + 0x78),0);
            uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
            *(undefined8 *)(lVar6 + 0xf0) = uVar14;
            FUN_01ab6de0(lVar6,&local_60);
            (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                      (*(longlong **)(*param_12 + 0x80),local_60,lVar6);
          }
        }
      } while (lVar5 != 0);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                         (*(longlong **)(*param_12 + 0x70),0);
      lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
      *(undefined8 *)(lVar5 + 0xb8) = local_b0;
      *(undefined8 *)(lVar5 + 0xc0) = local_a8;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      uVar2 = FUN_01ccdde0(lVar5);
      uVar3 = FUN_01ccde00(lVar5);
      FUN_01cd43b0(lVar5,uVar2,uVar3);
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                         (*(longlong **)(*param_12 + 0x78),0);
      lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
      *(undefined8 *)(lVar5 + 0xb8) = local_a0;
      *(undefined8 *)(lVar5 + 0xc0) = local_98;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      uVar2 = FUN_01ccddc0(lVar5);
      uVar3 = FUN_01ccddd0(lVar5);
      FUN_01cd43b0(lVar5,uVar2,uVar3);
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      if (param_3 < 8) {
        bVar13 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(lVar5 + 0xc0) >> 8),1) <<
                  (param_3 & 0x1f) & 0x10U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        uVar2 = FUN_0040c770(*(undefined8 *)(lVar5 + 0xc0));
        uVar2 = FUN_00b905f0(10,uVar2);
        FUN_01cd6740(lVar5,uVar2);
      }
      FUN_01ce6730(*param_12,&local_68);
      FUN_01cd64a0(lVar5,local_68);
      uVar14 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x80))
                (*(longlong **)(*param_12 + 0x88),L"Grid",uVar14);
      lVar5 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                        (*(longlong **)(*param_12 + 0x88),0);
      *(longlong *)(lVar5 + 0x78) = *param_12;
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                        (*(longlong **)(*param_12 + 0x70),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd9880(uVar14,uVar7);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                        (*(longlong **)(*param_12 + 0x78),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd98a0(uVar14,uVar7);
      iVar4 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x28))
                        (*(longlong **)(*param_12 + 0x80));
      iVar10 = 1;
      if (0 < iVar4) {
        do {
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                             (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar14);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                             (*(longlong **)(*param_12 + 0x78),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                    (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8));
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (param_3 == 5) {
      *(undefined1 *)(*param_12 + 0x59) = 0;
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 4;
      FUN_005fce70(*(undefined8 *)(lVar5 + 0xa0),3);
      *(undefined1 *)(lVar5 + 0x70) = 3;
      FUN_01cd64a0(lVar5,local_res20);
      *(undefined1 *)(lVar5 + 0x80) = param_6;
      *(undefined4 *)(lVar5 + 0x90) = param_7;
      *(undefined8 *)(lVar5 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0xc0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x80))
                (*(longlong **)(*param_12 + 0x70),&DAT_00f18d44,lVar5);
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 5;
      *(undefined1 *)(lVar5 + 0x70) = 3;
      FUN_01cd64a0(lVar5,param_8);
      *(undefined1 *)(lVar5 + 0x80) = param_10;
      *(undefined4 *)(lVar5 + 0x90) = param_11;
      *(undefined8 *)(lVar5 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0xc0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x80))
                (*(longlong **)(*param_12 + 0x78),&DAT_00f18d54,lVar5);
      uVar12 = 1;
      FUN_01cc5c60(param_2);
      do {
        lVar5 = FUN_01cc5cc0(param_2);
        if (lVar5 != 0) {
          lVar6 = FUN_01ab2610(&PTR_FUN_01aae560,1);
          FUN_01ab28d0(lVar6,param_13);
          *(longlong *)(lVar6 + 0x78) = *param_12;
          FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x60),
                       *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar12 * 4));
          uVar12 = (longlong)((int)uVar12 + 1) % 0xb & 0xffffffff;
          *(longlong **)(lVar6 + 200) = param_1;
          FUN_01cc8360();
          *(undefined8 *)(lVar6 + 0xd0) = param_2;
          *(undefined4 *)(lVar6 + 0xd8) = param_15;
          *(longlong *)(lVar6 + 0xe0) = lVar5;
          uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x80) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x88) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x90) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x70))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x98) = uVar14;
          if (bVar13) {
            uVar14 = FUN_01ab2a30(lVar6);
            uVar7 = FUN_01ab2a60(lVar6);
            local_b0 = FUN_00b90650(uVar14,uVar7);
            uVar14 = FUN_01ab2a30(lVar6);
            uVar7 = FUN_01ab2a60(lVar6);
            local_a8 = FUN_00b90620(uVar14,uVar7);
            local_a0 = FUN_00b90650(*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x98));
            local_98 = FUN_00b90620(*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x98));
            bVar13 = false;
          }
          else {
            uVar14 = FUN_01ab2a30(lVar6);
            uVar14 = FUN_00b90650(local_b0,uVar14);
            uVar7 = FUN_01ab2a60(lVar6);
            local_b0 = FUN_00b90650(uVar14,uVar7);
            uVar14 = FUN_01ab2a30(lVar6);
            uVar14 = FUN_00b90620(local_a8,uVar14);
            uVar7 = FUN_01ab2a60(lVar6);
            local_a8 = FUN_00b90620(uVar14,uVar7);
            uVar14 = FUN_00b90650(local_a0,*(undefined8 *)(lVar6 + 0x90));
            local_a0 = FUN_00b90650(uVar14,*(undefined8 *)(lVar6 + 0x98));
            uVar14 = FUN_00b90620(local_98,*(undefined8 *)(lVar6 + 0x90));
            local_98 = FUN_00b90620(uVar14,*(undefined8 *)(lVar6 + 0x98));
          }
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          *(undefined8 *)(lVar6 + 0xf8) = uVar14;
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                             (*(longlong **)(*param_12 + 0x78),0);
          uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          *(undefined8 *)(lVar6 + 0x100) = uVar14;
          FUN_01ab2940(lVar6,&local_70);
          (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                    (*(longlong **)(*param_12 + 0x80),local_70,lVar6);
        }
      } while (lVar5 != 0);
      uVar14 = FUN_00b90650(local_b0,0xbff0000000000000);
      uVar7 = FUN_00b90620(local_a8,0x3ff0000000000000);
      uVar15 = FUN_00b90650(local_a0,0xbff0000000000000);
      uVar16 = FUN_00b90620(local_98,0x3ff0000000000000);
      if (*(char *)(param_13 + 0x10b) == '\0') {
        uVar8 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                          (*(longlong **)(*param_12 + 0x70),0);
        lVar5 = FUN_004113f0(uVar8,&DAT_01ccbf00);
        *(undefined8 *)(lVar5 + 0xb8) = uVar14;
        *(undefined8 *)(lVar5 + 0xc0) = uVar7;
        *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
        *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      }
      if (*(char *)(param_13 + 0x10c) == '\0') {
        uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                           (*(longlong **)(*param_12 + 0x78),0);
        lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
        *(undefined8 *)(lVar5 + 0xb8) = uVar15;
        *(undefined8 *)(lVar5 + 0xc0) = uVar16;
        *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
        *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      }
      uVar14 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x80))
                (*(longlong **)(*param_12 + 0x88),L"Grid",uVar14);
      lVar5 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                        (*(longlong **)(*param_12 + 0x88),0);
      *(longlong *)(lVar5 + 0x78) = *param_12;
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                        (*(longlong **)(*param_12 + 0x70),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd9880(uVar14,uVar7);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                        (*(longlong **)(*param_12 + 0x78),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd98a0(uVar14,uVar7);
      iVar4 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x28))
                        (*(longlong **)(*param_12 + 0x80));
      iVar10 = 1;
      if (0 < iVar4) {
        do {
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                             (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar14);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                             (*(longlong **)(*param_12 + 0x78),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                    (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8));
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (param_3 == 6) {
      *(undefined1 *)(*param_12 + 0x59) = 0;
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 6;
      *(undefined1 *)(lVar5 + 0x70) = 0;
      FUN_01cd64a0(lVar5,local_res20);
      *(undefined1 *)(lVar5 + 0x80) = param_6;
      *(undefined4 *)(lVar5 + 0x90) = param_7;
      *(undefined8 *)(lVar5 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0xc0) = 0x3ff0000000000000;
      (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x80))
                (*(longlong **)(*param_12 + 0x70),&DAT_00f18d44,lVar5);
      lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(longlong *)(lVar5 + 0x60) = param_13;
      *(longlong *)(lVar5 + 0x68) = *param_12;
      *(undefined1 *)(lVar5 + 0xf0) = 7;
      *(undefined1 *)(lVar5 + 0x70) = 0;
      FUN_01cd64a0(lVar5,param_8);
      *(undefined1 *)(lVar5 + 0x80) = param_10;
      *(undefined4 *)(lVar5 + 0x90) = param_11;
      *(undefined8 *)(lVar5 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0xc0) = 0x3ff0000000000000;
      (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x80))
                (*(longlong **)(*param_12 + 0x78),&DAT_00f18d54,lVar5);
      uVar12 = 1;
      FUN_01cc5c60(param_2);
      do {
        lVar5 = FUN_01cc5cc0(param_2);
        if (lVar5 != 0) {
          lVar6 = FUN_01ab2610(&PTR_FUN_01aae560,1);
          FUN_01ab28d0(lVar6,param_13);
          *(longlong *)(lVar6 + 0x78) = *param_12;
          FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x60),
                       *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar12 * 4));
          uVar12 = (longlong)((int)uVar12 + 1) % 0xb & 0xffffffff;
          *(longlong **)(lVar6 + 200) = param_1;
          FUN_01cc8360();
          *(undefined8 *)(lVar6 + 0xd0) = param_2;
          *(undefined4 *)(lVar6 + 0xd8) = param_15;
          *(longlong *)(lVar6 + 0xe0) = lVar5;
          uVar14 = (**(code **)(*param_1 + 0x58))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x80) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x60))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x88) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x90) = uVar14;
          uVar14 = (**(code **)(*param_1 + 0x70))(param_1,lVar5);
          *(undefined8 *)(lVar6 + 0x98) = uVar14;
          if (bVar13) {
            local_b0 = FUN_01ab2a30(lVar6);
            local_a8 = FUN_01ab2a60(lVar6);
            local_a0 = *(undefined8 *)(lVar6 + 0x90);
            local_98 = *(undefined8 *)(lVar6 + 0x98);
            bVar13 = false;
          }
          else {
            uVar14 = FUN_01ab2a30(lVar6);
            local_b0 = FUN_00b90650(local_b0,uVar14);
            uVar14 = FUN_01ab2a60(lVar6);
            local_a8 = FUN_00b90620(local_a8,uVar14);
            local_a0 = FUN_00b90650(local_a0,*(undefined8 *)(lVar6 + 0x90));
            local_98 = FUN_00b90620(local_98,*(undefined8 *)(lVar6 + 0x98));
          }
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          *(undefined8 *)(lVar6 + 0xf8) = uVar14;
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                             (*(longlong **)(*param_12 + 0x78),0);
          uVar14 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          *(undefined8 *)(lVar6 + 0x100) = uVar14;
          FUN_01ab2940(lVar6,&local_78);
          (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x80))
                    (*(longlong **)(*param_12 + 0x80),local_78,lVar6);
        }
      } while (lVar5 != 0);
      uVar14 = FUN_0040c850(local_b0);
      uVar7 = FUN_0040c850(local_a8);
      uVar14 = FUN_00b90620(uVar14,uVar7);
      uVar7 = FUN_0040c850(local_a0);
      uVar14 = FUN_00b90620(uVar14,uVar7);
      uVar7 = FUN_0040c850(local_98);
      uVar12 = FUN_00b90620(uVar14,uVar7);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                         (*(longlong **)(*param_12 + 0x70),0);
      lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
      *(ulonglong *)(lVar5 + 0xb8) = uVar12 ^ 0x8000000000000000;
      *(ulonglong *)(lVar5 + 0xc0) = uVar12;
      *(ulonglong *)(lVar5 + 0xb8) = uVar12 ^ 0x8000000000000000;
      *(ulonglong *)(lVar5 + 0xc0) = uVar12;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      FUN_01cd6740(lVar5,5);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                         (*(longlong **)(*param_12 + 0x78),0);
      lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
      *(ulonglong *)(lVar5 + 0xb8) = uVar12 ^ 0x8000000000000000;
      *(ulonglong *)(lVar5 + 0xc0) = uVar12;
      *(ulonglong *)(lVar5 + 0xb8) = uVar12 ^ 0x8000000000000000;
      *(ulonglong *)(lVar5 + 0xc0) = uVar12;
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
      FUN_01cd6740(lVar5,0xc);
      uVar14 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x80))
                (*(longlong **)(*param_12 + 0x88),L"Grid",uVar14);
      lVar5 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                        (*(longlong **)(*param_12 + 0x88),0);
      *(longlong *)(lVar5 + 0x78) = *param_12;
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                        (*(longlong **)(*param_12 + 0x70),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd9880(uVar14,uVar7);
      uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x88) + 0x30))
                         (*(longlong **)(*param_12 + 0x88),0);
      uVar7 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                        (*(longlong **)(*param_12 + 0x78),0);
      uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_01cd98a0(uVar14,uVar7);
      iVar4 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x28))
                        (*(longlong **)(*param_12 + 0x80));
      iVar10 = 1;
      if (0 < iVar4) {
        do {
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x70) + 0x30))
                             (*(longlong **)(*param_12 + 0x70),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                             (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar14);
          uVar14 = (**(code **)(**(longlong **)(*param_12 + 0x78) + 0x30))
                             (*(longlong **)(*param_12 + 0x78),0);
          lVar5 = FUN_004113f0(uVar14,&DAT_01ccbf00);
          (**(code **)(**(longlong **)(*param_12 + 0x80) + 0x30))
                    (*(longlong **)(*param_12 + 0x80),iVar10 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8));
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
LAB_00f18c76:
  FUN_00414560(&local_90,9);
  FUN_00414480(local_40);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_8);
  return;
}

