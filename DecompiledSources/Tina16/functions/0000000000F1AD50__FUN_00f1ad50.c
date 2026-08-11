/* Ghidra address: 00f1ad50 */
/* Ghidra symbol: FUN_00f1ad50 */


void FUN_00f1ad50(longlong *param_1,undefined8 param_2,char param_3,undefined1 param_4,
                 undefined4 param_5,double param_6,double param_7,undefined1 param_8,
                 undefined4 param_9,double param_10,double param_11,undefined1 param_12,
                 undefined4 param_13,double param_14,double param_15,undefined8 param_16,
                 longlong *param_17)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  FUN_00414610(param_16);
  if (*param_17 == 0) {
    bVar2 = true;
    if ((param_10 == param_14) && (param_11 == param_15)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = FUN_01cea850(&PTR_FUN_01cdf058,1);
    *param_17 = lVar4;
    *(char *)(*param_17 + 0x58) = param_3;
    *(undefined8 *)(*param_17 + 0x50) = 0;
    if (((param_3 == '\0') || (param_3 == '\x02')) || (param_3 == '\x04')) {
      *(undefined1 *)(*param_17 + 0x59) = 0;
      lVar4 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(longlong *)(lVar4 + 0x68) = *param_17;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      *(undefined1 *)(lVar4 + 0x70) = param_4;
      FUN_00414480(lVar4 + 0xd8);
      *(undefined1 *)(lVar4 + 0x80) = 1;
      *(undefined4 *)(lVar4 + 0x90) = 2;
      *(undefined1 *)(lVar4 + 0x11) = 0;
      (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x80))
                (*(longlong **)(*param_17 + 0x70),&DAT_00f1b85c,lVar4);
      lVar4 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar4 + 0x60) = 0;
      *(longlong *)(lVar4 + 0x68) = *param_17;
      *(undefined1 *)(lVar4 + 0xf0) = 1;
      *(undefined1 *)(lVar4 + 0x70) = param_8;
      FUN_00414480(lVar4 + 0xd8);
      *(undefined1 *)(lVar4 + 0x80) = 1;
      *(undefined4 *)(lVar4 + 0x90) = 2;
      *(undefined1 *)(lVar4 + 0x11) = 0;
      if (bVar1) {
        FUN_005fc860(*(undefined8 *)(lVar4 + 0xa0),0xff);
      }
      else {
        FUN_005fc860(*(undefined8 *)(lVar4 + 0xa0),0);
      }
      (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                (*(longlong **)(*param_17 + 0x78),&DAT_00f1b86c,lVar4);
      if (bVar1) {
        lVar4 = FUN_01ccd700(&DAT_01ccbf00,1);
        *(undefined8 *)(lVar4 + 0x60) = 0;
        *(longlong *)(lVar4 + 0x68) = *param_17;
        *(undefined1 *)(lVar4 + 0xf0) = 1;
        *(undefined1 *)(lVar4 + 0x70) = param_12;
        FUN_00414480(lVar4 + 0xd8);
        *(undefined1 *)(lVar4 + 0x80) = 1;
        *(undefined4 *)(lVar4 + 0x90) = 2;
        *(undefined1 *)(lVar4 + 0x11) = 0;
        FUN_005fc860(*(undefined8 *)(lVar4 + 0xa0),0xff0000);
        (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                  (*(longlong **)(*param_17 + 0x78),&DAT_00f1b86c,lVar4);
      }
      uVar8 = 1;
      iVar9 = 0;
      FUN_01cc5c60(param_2);
      do {
        lVar4 = FUN_01cc5cc0(param_2);
        if (lVar4 != 0) {
          FUN_01cc0ae0(lVar4,local_40);
          iVar3 = FUN_00416db0(local_40[0],param_16);
          if (iVar3 != 0) {
            FUN_01cc0ae0(lVar4,&local_48);
            FUN_00416ba0(&local_50,param_16,L"_Ch1");
            iVar3 = FUN_00416db0(local_48,local_50);
            if (iVar3 != 0) {
              FUN_01cc0ae0(lVar4,&local_58);
              FUN_00416ba0(&local_60,param_16,L"_Ch2");
              iVar3 = FUN_00416db0(local_58,local_60);
              if (iVar3 != 0) goto LAB_00f1b3a8;
            }
          }
          if (param_3 == '\0') {
            lVar5 = FUN_01ab5c10(&PTR_FUN_01aaf918,1);
            *(int *)(lVar5 + 0xe8) = iVar9;
            iVar9 = iVar9 + 1;
            FUN_01ab28d0(lVar5,0);
            *(longlong *)(lVar5 + 0x78) = *param_17;
            FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x60),
                         *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar8 * 4));
            uVar8 = (longlong)((int)uVar8 + 1) % 0xb & 0xffffffff;
            *(longlong **)(lVar5 + 200) = param_1;
            FUN_01cc8360();
            *(undefined8 *)(lVar5 + 0xd0) = param_2;
            *(longlong *)(lVar5 + 0xe0) = lVar4;
            uVar10 = (**(code **)(*param_1 + 0x58))(param_1,lVar4);
            *(undefined8 *)(lVar5 + 0x80) = uVar10;
            uVar10 = (**(code **)(*param_1 + 0x60))(param_1,lVar4);
            *(undefined8 *)(lVar5 + 0x88) = uVar10;
            uVar10 = (**(code **)(*param_1 + 0x68))(param_1,lVar4);
            *(undefined8 *)(lVar5 + 0x90) = uVar10;
            uVar10 = (**(code **)(*param_1 + 0x70))(param_1,lVar4);
            *(undefined8 *)(lVar5 + 0x98) = uVar10;
            *(double *)(lVar5 + 0x148) = param_6;
            *(double *)(lVar5 + 0x150) = param_7;
            if (bVar2) {
              local_88 = FUN_01ab2a30(lVar5);
              local_80 = FUN_01ab2a60(lVar5);
              local_78 = *(undefined8 *)(lVar5 + 0x90);
              local_70 = *(undefined8 *)(lVar5 + 0x98);
              bVar2 = false;
            }
            else {
              uVar10 = FUN_01ab2a30(lVar5);
              local_88 = FUN_00b90650(local_88,uVar10);
              uVar10 = FUN_01ab2a60(lVar5);
              local_80 = FUN_00b90620(local_80,uVar10);
              local_78 = FUN_00b90650(local_78,*(undefined8 *)(lVar5 + 0x90));
              local_70 = FUN_00b90620(local_70,*(undefined8 *)(lVar5 + 0x98));
            }
            uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                               (*(longlong **)(*param_17 + 0x70),0);
            uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
            *(undefined8 *)(lVar5 + 0xf8) = uVar10;
            if (bVar1) {
              uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                                 (*(longlong **)(*param_17 + 0x78),*(undefined4 *)(lVar5 + 0xe8));
              uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
              *(undefined8 *)(lVar5 + 0x100) = uVar10;
            }
            else {
              uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                                 (*(longlong **)(*param_17 + 0x78),0);
              uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
              *(undefined8 *)(lVar5 + 0x100) = uVar10;
            }
            FUN_01ab2940(lVar5,&local_68);
            (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x80))
                      (*(longlong **)(*param_17 + 0x80),local_68,lVar5);
          }
        }
LAB_00f1b3a8:
      } while (lVar4 != 0);
      uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                         (*(longlong **)(*param_17 + 0x70),0);
      lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
      *(double *)(lVar4 + 0xb8) = param_6;
      *(double *)(lVar4 + 0xc0) = param_6 + param_7;
      *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0xc0);
      FUN_01cd6740(lVar4,param_5);
      uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                         (*(longlong **)(*param_17 + 0x78),0);
      lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
      *(double *)(lVar4 + 0xb8) = param_10;
      *(double *)(lVar4 + 0xc0) = param_11;
      *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0xc0);
      FUN_01cd6740(lVar4,param_9);
      if (bVar1) {
        uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                           (*(longlong **)(*param_17 + 0x78),1);
        lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
        *(double *)(lVar4 + 0xb8) = param_14;
        *(double *)(lVar4 + 0xc0) = param_15;
        *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0xb8);
        *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0xc0);
        FUN_01cd6740(lVar4,param_13);
      }
      uVar10 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x80))
                (*(longlong **)(*param_17 + 0x88),L"Grid",uVar10);
      lVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      *(longlong *)(lVar4 + 0x78) = *param_17;
      uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                         (*(longlong **)(*param_17 + 0x88),0);
      uVar6 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                        (*(longlong **)(*param_17 + 0x70),0);
      uVar6 = FUN_004113f0(uVar6,&DAT_01ccbf00);
      FUN_01cd9880(uVar10,uVar6);
      uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                         (*(longlong **)(*param_17 + 0x88),0);
      uVar6 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                        (*(longlong **)(*param_17 + 0x78),0);
      uVar6 = FUN_004113f0(uVar6,&DAT_01ccbf00);
      FUN_01cd98a0(uVar10,uVar6);
      iVar9 = (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x28))
                        (*(longlong **)(*param_17 + 0x80));
      iVar3 = 1;
      if (0 < iVar9) {
        do {
          uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                             (*(longlong **)(*param_17 + 0x70),0);
          lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
          iVar7 = iVar3 + -1;
          uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x30))
                             (*(longlong **)(*param_17 + 0x80),iVar7);
          FUN_004ae7e0(*(undefined8 *)(lVar4 + 0xf8),uVar10);
          if (bVar1) {
            uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                               (*(longlong **)(*param_17 + 0x78),iVar7);
            lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
            (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x30))
                      (*(longlong **)(*param_17 + 0x80),iVar7);
            FUN_004ae7e0(*(undefined8 *)(lVar4 + 0xf8));
          }
          else {
            uVar10 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                               (*(longlong **)(*param_17 + 0x78),0);
            lVar4 = FUN_004113f0(uVar10,&DAT_01ccbf00);
            (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x30))
                      (*(longlong **)(*param_17 + 0x80),iVar7);
            FUN_004ae7e0(*(undefined8 *)(lVar4 + 0xf8));
          }
          iVar3 = iVar3 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x28))
                        (*(longlong **)(*param_17 + 0x80));
      if (1 < iVar9) {
        lVar4 = (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x30))
                          (*(longlong **)(*param_17 + 0x80),0);
        FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x60),0xff);
        lVar4 = (**(code **)(**(longlong **)(*param_17 + 0x80) + 0x30))
                          (*(longlong **)(*param_17 + 0x80),1);
        FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x60),0xff0000);
      }
    }
  }
  FUN_00414560(&local_68,6);
  FUN_00414480(&param_16);
  return;
}

