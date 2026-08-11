/* Ghidra address: 00f19c70 */
/* Ghidra symbol: FUN_00f19c70 */


void FUN_00f19c70(longlong *param_1,undefined8 param_2,char param_3,undefined1 param_4,
                 undefined4 param_5,double param_6,double param_7,undefined1 param_8,
                 undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 longlong *param_13)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  FUN_00414610(param_12);
  if (*param_13 == 0) {
    bVar1 = true;
    lVar3 = FUN_01cea850(&PTR_FUN_01cdf058,1);
    *param_13 = lVar3;
    *(char *)(*param_13 + 0x58) = param_3;
    *(undefined8 *)(*param_13 + 0x50) = 0;
    if (((param_3 == '\0') || (param_3 == '\x02')) || (param_3 == '\x04')) {
      *(undefined1 *)(*param_13 + 0x59) = 0;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(longlong *)(lVar3 + 0x68) = *param_13;
      *(undefined1 *)(lVar3 + 0xf0) = 0;
      *(undefined1 *)(lVar3 + 0x70) = param_4;
      FUN_00414480(lVar3 + 0xd8);
      *(undefined1 *)(lVar3 + 0x80) = 1;
      *(undefined4 *)(lVar3 + 0x90) = 2;
      *(undefined1 *)(lVar3 + 0x11) = 0;
      (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x80))
                (*(longlong **)(*param_13 + 0x70),&DAT_00f1acbc,lVar3);
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(longlong *)(lVar3 + 0x68) = *param_13;
      *(undefined1 *)(lVar3 + 0xf0) = 1;
      *(undefined1 *)(lVar3 + 0x70) = param_8;
      FUN_00414480(lVar3 + 0xd8);
      *(undefined1 *)(lVar3 + 0x80) = 1;
      *(undefined4 *)(lVar3 + 0x90) = 2;
      *(undefined1 *)(lVar3 + 0x11) = 0;
      (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x80))
                (*(longlong **)(*param_13 + 0x78),&DAT_00f1accc,lVar3);
      uVar6 = 1;
      iVar7 = 0;
      FUN_01cc5c60(param_2);
      do {
        lVar3 = FUN_01cc5cc0(param_2);
        if (lVar3 != 0) {
          FUN_01cc0ae0(lVar3,&local_70);
          iVar2 = FUN_00416db0(local_70,param_12);
          if (iVar2 != 0) {
            FUN_01cc0ae0(lVar3,&local_78);
            FUN_00416ba0(&local_80,param_12,L"_Ch1");
            iVar2 = FUN_00416db0(local_78,local_80);
            if (iVar2 != 0) {
              FUN_01cc0ae0(lVar3,&local_88);
              FUN_00416ba0(&local_90,param_12,L"_Ch2");
              iVar2 = FUN_00416db0(local_88,local_90);
              if (iVar2 != 0) goto LAB_00f1a944;
            }
          }
          if (param_3 == '\0') {
            lVar4 = FUN_01ab5c10(&PTR_FUN_01aaf918,1);
            *(int *)(lVar4 + 0xe8) = iVar7;
            iVar7 = iVar7 + 1;
            FUN_01ab28d0(lVar4,0);
            *(longlong *)(lVar4 + 0x78) = *param_13;
            FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x60),
                         *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar6 * 4));
            uVar6 = (longlong)((int)uVar6 + 1) % 0xb & 0xffffffff;
            *(longlong **)(lVar4 + 200) = param_1;
            FUN_01cc8360();
            *(undefined8 *)(lVar4 + 0xd0) = param_2;
            *(longlong *)(lVar4 + 0xe0) = lVar3;
            uVar8 = (**(code **)(*param_1 + 0x58))(param_1,lVar3);
            *(undefined8 *)(lVar4 + 0x80) = uVar8;
            uVar8 = (**(code **)(*param_1 + 0x60))(param_1,lVar3);
            *(undefined8 *)(lVar4 + 0x88) = uVar8;
            uVar8 = (**(code **)(*param_1 + 0x68))(param_1,lVar3);
            *(undefined8 *)(lVar4 + 0x90) = uVar8;
            uVar8 = (**(code **)(*param_1 + 0x70))(param_1,lVar3);
            *(undefined8 *)(lVar4 + 0x98) = uVar8;
            *(double *)(lVar4 + 0x148) = param_6;
            *(double *)(lVar4 + 0x150) = param_7;
            if (bVar1) {
              local_b8 = FUN_01ab2a30(lVar4);
              local_b0 = FUN_01ab2a60(lVar4);
              local_a8 = *(undefined8 *)(lVar4 + 0x90);
              local_a0 = *(undefined8 *)(lVar4 + 0x98);
              bVar1 = false;
            }
            else {
              uVar8 = FUN_01ab2a30(lVar4);
              local_b8 = FUN_00b90650(local_b8,uVar8);
              uVar8 = FUN_01ab2a60(lVar4);
              local_b0 = FUN_00b90620(local_b0,uVar8);
              local_a8 = FUN_00b90650(local_a8,*(undefined8 *)(lVar4 + 0x90));
              local_a0 = FUN_00b90620(local_a0,*(undefined8 *)(lVar4 + 0x98));
            }
            uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                              (*(longlong **)(*param_13 + 0x70),0);
            uVar8 = FUN_004113f0(uVar8,&DAT_01ccbf00);
            *(undefined8 *)(lVar4 + 0xf8) = uVar8;
            uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                              (*(longlong **)(*param_13 + 0x78),0);
            uVar8 = FUN_004113f0(uVar8,&DAT_01ccbf00);
            *(undefined8 *)(lVar4 + 0x100) = uVar8;
            FUN_01ab2940(lVar4,&local_98);
            (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x80))
                      (*(longlong **)(*param_13 + 0x80),local_98,lVar4);
          }
        }
LAB_00f1a944:
      } while (lVar3 != 0);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                        (*(longlong **)(*param_13 + 0x70),0);
      lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
      *(double *)(lVar3 + 0xb8) = param_6;
      *(double *)(lVar3 + 0xc0) = param_6 + param_7;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      FUN_01cd6740(lVar3,param_5);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                        (*(longlong **)(*param_13 + 0x78),0);
      lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
      *(undefined8 *)(lVar3 + 0xb8) = param_10;
      *(undefined8 *)(lVar3 + 0xc0) = param_11;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      FUN_01cd6740(lVar3,param_9);
      uVar8 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x80))
                (*(longlong **)(*param_13 + 0x88),L"Grid",uVar8);
      lVar3 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      *(longlong *)(lVar3 + 0x78) = *param_13;
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                        (*(longlong **)(*param_13 + 0x70),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd9880(uVar8,uVar5);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                        (*(longlong **)(*param_13 + 0x78),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd98a0(uVar8,uVar5);
      iVar7 = (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x28))
                        (*(longlong **)(*param_13 + 0x80));
      iVar2 = 1;
      if (0 < iVar7) {
        do {
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                            (*(longlong **)(*param_13 + 0x70),0);
          lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x30))
                            (*(longlong **)(*param_13 + 0x80),iVar2 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar3 + 0xf8),uVar8);
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                            (*(longlong **)(*param_13 + 0x78),0);
          lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x30))
                    (*(longlong **)(*param_13 + 0x80),iVar2 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar3 + 0xf8));
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if (param_3 == '\x05') {
      *(undefined1 *)(*param_13 + 0x59) = 0;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(longlong *)(lVar3 + 0x68) = *param_13;
      *(undefined1 *)(lVar3 + 0xf0) = 4;
      *(undefined1 *)(lVar3 + 0x70) = 3;
      FUN_00414480(lVar3 + 0xd8);
      *(undefined1 *)(lVar3 + 0x80) = 0;
      *(undefined4 *)(lVar3 + 0x90) = 1;
      *(undefined1 *)(lVar3 + 0x11) = 1;
      (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x80))
                (*(longlong **)(*param_13 + 0x70),&DAT_00f1acbc,lVar3);
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(longlong *)(lVar3 + 0x68) = *param_13;
      *(undefined1 *)(lVar3 + 0xf0) = 5;
      *(undefined1 *)(lVar3 + 0x70) = 3;
      FUN_00414480(lVar3 + 0xd8);
      *(undefined1 *)(lVar3 + 0x80) = 0;
      *(undefined4 *)(lVar3 + 0x90) = 1;
      *(undefined1 *)(lVar3 + 0x11) = 1;
      (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x80))
                (*(longlong **)(*param_13 + 0x78),&DAT_00f1accc,lVar3);
      uVar6 = 1;
      iVar7 = 0;
      FUN_01cc5c60(param_2);
      do {
        lVar3 = FUN_01cc5cc0(param_2);
        if (lVar3 != 0) {
          FUN_01cc0ae0(lVar3,local_40);
          iVar2 = FUN_00416db0(local_40[0],param_12);
          if (iVar2 != 0) {
            FUN_01cc0ae0(lVar3,&local_48);
            FUN_00416ba0(&local_50,param_12,L"_Port1");
            iVar2 = FUN_00416db0(local_48,local_50);
            if (iVar2 != 0) {
              FUN_01cc0ae0(lVar3,&local_58);
              FUN_00416ba0(&local_60,param_12,L"_Port2");
              iVar2 = FUN_00416db0(local_58,local_60);
              if (iVar2 != 0) goto LAB_00f1a225;
            }
          }
          lVar4 = FUN_01ab5c10(&PTR_FUN_01aaf918,1);
          *(int *)(lVar4 + 0xe8) = iVar7;
          iVar7 = iVar7 + 1;
          FUN_01ab28d0(lVar4,0);
          *(longlong *)(lVar4 + 0x78) = *param_13;
          FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x60),
                       *(undefined4 *)(PTR_DAT_02003c00 + (longlong)(int)uVar6 * 4));
          uVar6 = (longlong)((int)uVar6 + 1) % 0xb & 0xffffffff;
          *(longlong **)(lVar4 + 200) = param_1;
          FUN_01cc8360();
          *(undefined8 *)(lVar4 + 0xd0) = param_2;
          *(longlong *)(lVar4 + 0xe0) = lVar3;
          uVar8 = (**(code **)(*param_1 + 0x58))(param_1,lVar3);
          *(undefined8 *)(lVar4 + 0x80) = uVar8;
          uVar8 = (**(code **)(*param_1 + 0x60))(param_1,lVar3);
          *(undefined8 *)(lVar4 + 0x88) = uVar8;
          uVar8 = (**(code **)(*param_1 + 0x68))(param_1,lVar3);
          *(undefined8 *)(lVar4 + 0x90) = uVar8;
          uVar8 = (**(code **)(*param_1 + 0x70))(param_1,lVar3);
          *(undefined8 *)(lVar4 + 0x98) = uVar8;
          *(double *)(lVar4 + 0x148) = param_6;
          *(double *)(lVar4 + 0x150) = param_7;
          if (bVar1) {
            uVar8 = FUN_01ab2a30(lVar4);
            local_b8 = FUN_00b90650(0xbff0000000000000,uVar8);
            uVar8 = FUN_01ab2a60(lVar4);
            local_b0 = FUN_00b90620(0x3ff0000000000000,uVar8);
            local_a8 = FUN_00b90650(0xbff0000000000000,*(undefined8 *)(lVar4 + 0x90));
            local_a0 = FUN_00b90620(0x3ff0000000000000,*(undefined8 *)(lVar4 + 0x98));
            bVar1 = false;
          }
          else {
            uVar8 = FUN_01ab2a30(lVar4);
            local_b8 = FUN_00b90650(local_b8,uVar8);
            uVar8 = FUN_01ab2a60(lVar4);
            local_b0 = FUN_00b90620(local_b0,uVar8);
            local_a8 = FUN_00b90650(local_a8,*(undefined8 *)(lVar4 + 0x90));
            local_a0 = FUN_00b90620(local_a0,*(undefined8 *)(lVar4 + 0x98));
          }
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                            (*(longlong **)(*param_13 + 0x70),0);
          uVar8 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          *(undefined8 *)(lVar4 + 0xf8) = uVar8;
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                            (*(longlong **)(*param_13 + 0x78),0);
          uVar8 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          *(undefined8 *)(lVar4 + 0x100) = uVar8;
          FUN_01ab2940(lVar4,&local_68);
          (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x80))
                    (*(longlong **)(*param_13 + 0x80),local_68,lVar4);
        }
LAB_00f1a225:
      } while (lVar3 != 0);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                        (*(longlong **)(*param_13 + 0x70),0);
      lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
      *(undefined8 *)(lVar3 + 0xb8) = local_b8;
      *(undefined8 *)(lVar3 + 0xc0) = local_b0;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      FUN_01cd6740(lVar3,param_5);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                        (*(longlong **)(*param_13 + 0x78),0);
      lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
      *(undefined8 *)(lVar3 + 0xb8) = local_a8;
      *(undefined8 *)(lVar3 + 0xc0) = local_a8;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      FUN_01cd6740(lVar3,param_9);
      uVar8 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x80))
                (*(longlong **)(*param_13 + 0x88),L"Grid",uVar8);
      lVar3 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      *(longlong *)(lVar3 + 0x78) = *param_13;
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                        (*(longlong **)(*param_13 + 0x70),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd9880(uVar8,uVar5);
      uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x88) + 0x30))
                        (*(longlong **)(*param_13 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                        (*(longlong **)(*param_13 + 0x78),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd98a0(uVar8,uVar5);
      iVar7 = (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x28))
                        (*(longlong **)(*param_13 + 0x80));
      iVar2 = 1;
      if (0 < iVar7) {
        do {
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x70) + 0x30))
                            (*(longlong **)(*param_13 + 0x70),0);
          lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x30))
                            (*(longlong **)(*param_13 + 0x80),iVar2 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar3 + 0xf8),uVar8);
          uVar8 = (**(code **)(**(longlong **)(*param_13 + 0x78) + 0x30))
                            (*(longlong **)(*param_13 + 0x78),0);
          lVar3 = FUN_004113f0(uVar8,&DAT_01ccbf00);
          (**(code **)(**(longlong **)(*param_13 + 0x80) + 0x30))
                    (*(longlong **)(*param_13 + 0x80),iVar2 + -1);
          FUN_004ae7e0(*(undefined8 *)(lVar3 + 0xf8));
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  FUN_00414560(&local_98,0xc);
  FUN_00414480(&param_12);
  return;
}

