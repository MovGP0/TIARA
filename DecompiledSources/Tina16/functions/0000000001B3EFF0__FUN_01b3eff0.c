/* Ghidra address: 01b3eff0 */
/* Ghidra symbol: FUN_01b3eff0 */


void FUN_01b3eff0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                 undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar16;
  int iVar17;
  undefined8 local_res18 [2];
  ulonglong in_stack_fffffffffffffea8;
  ulonglong in_stack_fffffffffffffeb0;
  ulonglong in_stack_fffffffffffffeb8;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffed0;
  int *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  ulonglong local_30;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_30 = 0;
  local_38 = (undefined *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_01995600(param_1,0,0);
  in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffffffffff00;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar9 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffec8 >> 8),*PTR_DAT_02005310);
  FUN_0198d580(param_1,local_60,*PTR_DAT_02002480,1,in_stack_fffffffffffffea8 & 0xffffffffffffff00,
               in_stack_fffffffffffffeb0 & 0xffffffffffffff00,in_stack_fffffffffffffeb8,
               in_stack_fffffffffffffec0,uVar9,CONCAT44(uVar5,0x1c7));
  plVar7 = (longlong *)FUN_01995660(param_1,1,0);
  do {
    if (plVar7 == (longlong *)0x0) {
      FUN_00414560(&local_108,0x14);
      FUN_00419430(&local_50,&DAT_004066f0);
      FUN_00414560(&local_48,4);
      FUN_00419430(local_res18,&DAT_004066f0);
      return;
    }
    FUN_017ff5f0(plVar7,param_5);
    FUN_01b3ee60(plVar7,param_5,*(undefined8 *)(param_1 + 0x210),local_60);
    FUN_01d04330(plVar7,local_70);
    FUN_0043ea00(&local_38,local_70[0]);
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    cVar2 = FUN_01d04d50(plVar7);
    if ((((cVar2 != '\0') && (*(char *)(plVar7[0x35] + 0xb0) == '\0')) && (param_4 == '\0')) &&
       (((*(longlong *)(plVar7[0x35] + 8) != 0 &&
         (cVar2 = FUN_019af180(*(undefined8 *)(plVar7[0x35] + 8)), cVar2 == '\0')) &&
        ((local_38 == (undefined *)0x0 || (iVar4 = FUN_004170c0(L"NOPCB",local_38,1), 0 < iVar4)))))
       ) {
      FUN_01b3eff0(*(undefined8 *)(plVar7[0x35] + 8),param_2,local_res18[0],0,plVar7);
      FUN_00414b50(&local_38,L"NOPCB");
    }
    iVar4 = FUN_004170c0(L"NOPCB",local_38,1);
    if (iVar4 == 0) {
      lVar8 = FUN_00418560(0x60,&DAT_00ea9440);
      FUN_0040d200(lVar8,0x60,0);
      FUN_004ae7e0(param_2,lVar8);
      *(longlong **)(lVar8 + 0x48) = plVar7;
      uVar5 = FUN_0040c770(plVar7[0xa9]);
      *(undefined4 *)(lVar8 + 0x3c) = uVar5;
      uVar5 = FUN_0040c770(plVar7[0xaa]);
      *(undefined4 *)(lVar8 + 0x40) = uVar5;
      *(uint *)(lVar8 + 0x44) = (uint)*(byte *)((longlong)plVar7 + 0xd1);
      FUN_017ff4f0(plVar7,&local_78);
      FUN_00414ad0(lVar8 + 0x20,local_78);
      FUN_01b20150(&local_80,plVar7);
      FUN_00414ad0(lVar8 + 0x28,local_80);
      *(undefined1 *)(lVar8 + 0x58) = 0;
      *(uint *)(lVar8 + 0x30) = uVar3 & 0xffff;
      (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
      uVar5 = (undefined4)(in_stack_fffffffffffffeb8 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
      bVar1 = false;
      uVar12 = uVar3 & 0xffff;
      uVar13 = uVar3 & 0xffff;
      uVar14 = uVar3 & 0xffff;
      uVar15 = uVar3 & 0xffff;
      uVar16 = uVar3 & 0xffff;
      uVar6 = (undefined4)(in_stack_fffffffffffffec0 >> 0x20);
      if ((uVar3 & 0xffff) < 0x74) {
        if (uVar12 < 0x3b) {
          if (uVar16 == 0x3a) {
LAB_01b3fcb3:
            FUN_004aee50(param_2,lVar8,0);
            FUN_00418590(lVar8,&DAT_00ea9440);
            bVar1 = true;
          }
          else if (uVar16 < 0x1a) {
            if (uVar15 < 0x10) {
              if (uVar15 == 0xf) {
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3b7c0(param_1,plVar7,local_res18[0],5,lVar8,&local_50,local_30);
              }
              else if (uVar15 < 0xb) {
                if (uVar15 == 10) goto LAB_01b3fe3d;
                if (uVar15 != 4) {
                  if ((uVar15 - 5 < 2) || (uVar15 == 8)) goto LAB_01b3fd13;
                  if (uVar15 == 9) goto LAB_01b3fe03;
                  goto LAB_01b415da;
                }
LAB_01b3fcd9:
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3b630(param_1,plVar7,local_res18[0],0xb,lVar8,&local_50,local_30);
              }
              else {
                if (uVar15 == 0xb) goto LAB_01b3fe77;
                if (uVar15 == 0xc) {
                  in_stack_fffffffffffffec0 = 0;
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3c3f0(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,0);
                }
                else {
                  if (uVar15 != 0xd) {
                    if (uVar15 == 0xe) goto LAB_01b4099b;
                    goto LAB_01b415da;
                  }
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3b7c0(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30);
                }
              }
            }
            else if (uVar16 < 0x15) {
              if (uVar16 == 0x14) {
                in_stack_fffffffffffffec0 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c3f0(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,0);
              }
              else {
                if (uVar16 == 0x10) goto LAB_01b40a0f;
                if (uVar16 == 0x11) {
                  in_stack_fffffffffffffec0 = 0;
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3c3f0(param_1,plVar7,local_res18[0],4,lVar8,&local_50,local_30,0);
                }
                else if (uVar16 == 0x12) {
                  in_stack_fffffffffffffec0 = 0;
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3c3f0(param_1,plVar7,local_res18[0],5,lVar8,&local_50,local_30,0);
                }
                else {
                  if (uVar16 != 0x13) goto LAB_01b415da;
                  in_stack_fffffffffffffec0 = 0;
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3c3f0(param_1,plVar7,local_res18[0],6,lVar8,&local_50,local_30,0);
                }
              }
            }
            else {
              if (uVar16 != 0x15) {
                if (uVar16 != 0x16) {
                  if (uVar16 != 0x17) {
                    uVar16 = uVar16 - 0x18;
                    goto joined_r0x01b3f7b2;
                  }
                  goto LAB_01b40602;
                }
                goto LAB_01b407e5;
              }
LAB_01b40787:
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_d0,uVar10);
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
              in_stack_fffffffffffffeb8 = local_d0;
              FUN_01b3c960(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,local_d0,
                           in_stack_fffffffffffffec0);
            }
          }
          else if (uVar16 < 0x2a) {
            if (uVar15 == 0x29) {
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_e8,uVar10);
              in_stack_fffffffffffffeb8 = local_e8;
              FUN_01b3d0f0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,local_e8);
            }
            else if (uVar16 < 0x25) {
              if (uVar16 != 0x24) {
                if (uVar16 < 0x21) {
                  if (uVar15 == 0x20) goto LAB_01b40074;
                  if (uVar15 - 0x1a < 4) goto LAB_01b406cd;
                  if (uVar15 - 0x1e < 2) goto LAB_01b4072a;
                }
                else {
                  if (uVar15 - 0x21 < 2) goto LAB_01b3fd13;
                  if (uVar15 == 0x23) goto LAB_01b3fdc1;
                }
                goto LAB_01b415da;
              }
LAB_01b4092e:
              FUN_01b3d2f0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30);
            }
            else if (uVar16 == 0x25) {
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],1,lVar8,&local_50,local_30);
            }
            else if (uVar16 == 0x26) {
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],8,lVar8,&local_50,local_30);
            }
            else {
              if (uVar16 == 0x27) goto LAB_01b3fcd9;
              if (uVar16 != 0x28) goto LAB_01b415da;
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_d8,uVar10);
              in_stack_fffffffffffffeb8 = local_d8;
              FUN_01b3cd10(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,local_d8);
            }
          }
          else if (uVar16 < 0x30) {
            if (uVar15 == 0x2f) {
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,0,L"TRANSFORMER");
            }
            else if (uVar15 == 0x2a) {
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_e0,uVar10);
              in_stack_fffffffffffffeb8 = local_e0;
              FUN_01b3cf10(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,local_e0);
            }
            else {
              if (uVar15 - 0x2b < 2) goto LAB_01b40602;
              if (uVar15 == 0x2d) {
LAB_01b40526:
                uVar9 = FUN_01cfd6a0(plVar7);
                FUN_004169a0(&local_a0,uVar9);
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,8);
                in_stack_fffffffffffffeb8 = local_30;
                uVar9 = local_a0;
                FUN_01b3c620(param_1,plVar7,local_res18[0],0xd,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,local_a0,0);
              }
              else {
                if (uVar15 != 0x2e) goto LAB_01b415da;
                in_stack_fffffffffffffec0 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c3f0(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,L"TRANSFORMER"
                            );
              }
            }
          }
          else if (uVar15 == 0x31) {
LAB_01b40161:
            in_stack_fffffffffffffec0 = 0;
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c3f0(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,0);
          }
          else {
            if (uVar15 - 0x32 < 2) goto LAB_01b3fe03;
            if (uVar15 == 0x34) goto LAB_01b3fdc1;
            if (uVar15 != 0x35) goto LAB_01b415da;
LAB_01b40602:
            uVar9 = FUN_01cfd6a0(plVar7);
            FUN_004169a0(&local_b0,uVar9);
            uVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
            uVar9 = CONCAT44(uVar18,uVar5);
            in_stack_fffffffffffffeb8 = local_30;
            in_stack_fffffffffffffec0 = local_b0;
            FUN_01b3bf90(param_1,plVar7,local_res18[0],2,lVar8,&local_50,local_30,local_b0,uVar9);
          }
        }
        else if (uVar13 < 0x57) {
          if (uVar15 == 0x56) {
LAB_01b407e5:
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c960(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,local_30,
                         in_stack_fffffffffffffec0);
          }
          else if (uVar13 < 0x46) {
            if (uVar16 < 0x41) {
              if (uVar16 == 0x40) goto LAB_01b40602;
              if (uVar16 != 0x3b) {
                if (uVar16 == 0x3c) goto LAB_01b3fe03;
                if (uVar16 - 0x3d < 2) goto LAB_01b40241;
                if (uVar16 == 0x3f) goto LAB_01b400b6;
                goto LAB_01b415da;
              }
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,0,L"SWITCH");
            }
            else if (uVar16 - 0x41 < 2) {
LAB_01b402d7:
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,0,L"TRANSFORMER");
            }
            else if (uVar16 == 0x43) {
LAB_01b4099b:
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],4,lVar8,&local_50,local_30);
            }
            else {
              if (uVar16 != 0x44) {
                if (uVar16 != 0x45) goto LAB_01b415da;
                goto LAB_01b402d7;
              }
LAB_01b4032e:
              uVar9 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_88,uVar9);
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
              in_stack_fffffffffffffeb8 = local_30;
              uVar9 = local_88;
              FUN_01b3c620(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,local_88,0);
            }
          }
          else if (uVar13 < 0x4c) {
            if (uVar14 < 0x4a) {
              if (uVar14 == 0x49) {
                uVar9 = FUN_01cfd6a0(plVar7);
                FUN_004169a0(&local_98,uVar9);
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,6);
                in_stack_fffffffffffffeb8 = local_30;
                uVar9 = local_98;
                FUN_01b3c620(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,local_98,0);
              }
              else {
                if (uVar14 - 0x46 < 2) goto LAB_01b4032e;
                if (uVar14 != 0x48) goto LAB_01b415da;
LAB_01b403f3:
                uVar9 = FUN_01cfd6a0(plVar7);
                FUN_004169a0(&local_90,uVar9);
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
                in_stack_fffffffffffffeb8 = local_30;
                uVar9 = local_90;
                FUN_01b3c620(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,local_90,0);
              }
            }
            else if (uVar14 == 0x4a) {
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,0,L"TRANSFORMER");
            }
            else {
              if (uVar14 != 0x4b) goto LAB_01b415da;
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,6);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,0,L"TRANSFORMER");
            }
          }
          else {
            if (0x4f < uVar14) {
              if (uVar14 == 0x50) goto LAB_01b3fe77;
              if (uVar14 == 0x55) goto LAB_01b40787;
              goto LAB_01b415da;
            }
            if (uVar14 == 0x4f) goto LAB_01b3fe3d;
            if (uVar14 - 0x4c < 2) {
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],0xf,lVar8,&local_50,local_30);
            }
            else {
              if (uVar14 != 0x4e) goto LAB_01b415da;
              uVar9 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_a8,uVar9);
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,8);
              in_stack_fffffffffffffeb8 = local_30;
              uVar9 = local_a8;
              FUN_01b3c620(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,local_a8,0);
            }
          }
        }
        else {
          if (0x68 < uVar13) {
            if (uVar14 < 0x6e) {
              if (uVar14 == 0x6d) goto LAB_01b3fe3d;
              if (uVar14 == 0x69) goto LAB_01b40787;
              if (uVar14 == 0x6a) goto LAB_01b3fd13;
              if (uVar14 == 0x6b) goto LAB_01b3fe03;
              if (uVar14 == 0x6c) goto LAB_01b4092e;
            }
            else {
              if (uVar14 == 0x6e) goto LAB_01b3fe77;
              if (uVar14 == 0x6f) goto LAB_01b3fe03;
              if (uVar14 - 0x70 < 2) goto LAB_01b40602;
              uVar16 = uVar14 - 0x72;
joined_r0x01b3f7b2:
              if (uVar16 < 2) goto LAB_01b40670;
            }
            goto LAB_01b415da;
          }
          if (uVar13 == 0x68) goto LAB_01b3fcb3;
          if (uVar13 < 99) {
            if (uVar12 == 0x62) {
LAB_01b3fd13:
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],0xf,lVar8,&local_50,local_30);
            }
            else {
              if (uVar15 - 0x57 < 2) goto LAB_01b40670;
              if (uVar15 - 0x59 < 4) goto LAB_01b406cd;
              if (1 < uVar15 - 0x5d) {
                if (uVar15 - 0x5f < 3) goto LAB_01b3fd4d;
                goto LAB_01b415da;
              }
LAB_01b4072a:
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_c8,uVar10);
              in_stack_fffffffffffffeb8 = local_30;
              in_stack_fffffffffffffec0 = local_c8;
              FUN_01b3bc80(param_1,plVar7,local_res18[0],7,lVar8,&local_50,local_30,local_c8);
            }
          }
          else if (uVar12 == 99) {
LAB_01b40295:
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c180(param_1,plVar7,local_res18[0],0xc,lVar8,&local_50,local_30,
                         in_stack_fffffffffffffec0);
          }
          else if (uVar12 == 100) {
LAB_01b40241:
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            uVar9 = 0;
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                         in_stack_fffffffffffffec0,0,0);
          }
          else {
            if (1 < uVar12 - 0x65) {
              if (uVar12 == 0x67) goto LAB_01b403f3;
              goto LAB_01b415da;
            }
LAB_01b400b6:
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
            uVar9 = 0;
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                         in_stack_fffffffffffffec0,0,0);
          }
        }
      }
      else if (uVar16 < 0x19a) {
        if (uVar14 < 0xd1) {
          if (uVar15 != 0xd0) {
            if (uVar14 < 0x9f) {
              if (uVar14 == 0x9e) goto LAB_01b40a9d;
              if (uVar14 < 0x84) {
                if (uVar12 != 0x83) {
                  if (uVar13 < 0x7d) {
                    if (uVar12 - 0x74 < 2) goto LAB_01b406cd;
                    if (uVar12 == 0x76) goto LAB_01b40526;
                  }
                  else {
                    if (uVar13 - 0x7d < 2) {
LAB_01b3fdc1:
                      in_stack_fffffffffffffec0 = CONCAT44(uVar6,2);
                      in_stack_fffffffffffffeb8 = local_30;
                      FUN_01b3c180(param_1,plVar7,local_res18[0],0xc,lVar8,&local_50,local_30,
                                   in_stack_fffffffffffffec0);
                      goto LAB_01b417f2;
                    }
                    if (uVar13 == 0x7f) goto LAB_01b41158;
                    if (uVar13 == 0x80) goto LAB_01b40295;
                  }
                  goto LAB_01b415da;
                }
LAB_01b41108:
                uVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,uVar5);
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3e3a0(param_1,plVar7,local_res18[0],lVar8,&local_50,&DAT_01b41aa4,local_30,
                             in_stack_fffffffffffffec0);
              }
              else {
                if (uVar12 == 0x91) goto LAB_01b3fd13;
                if (uVar12 == 0x92) goto LAB_01b40161;
                if (uVar12 != 0x93) {
                  if (uVar12 == 0x96) goto LAB_01b3fcb3;
                  goto LAB_01b415da;
                }
LAB_01b40074:
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c180(param_1,plVar7,local_res18[0],0xc,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0);
              }
            }
            else if (uVar14 < 0xbe) {
              if (uVar15 == 0xa4) {
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,0x1d);
                uVar9 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,L"TinaLabII",0);
              }
              else {
                if (uVar15 - 0xa6 < 2) goto LAB_01b3fe03;
                if (uVar15 != 0xa8) {
                  if (uVar15 == 0xb0) goto LAB_01b3fdc1;
                  goto LAB_01b415da;
                }
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,0x14);
                uVar9 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c620(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,0,0);
              }
            }
            else {
              if (uVar14 < 0xca) {
                if (uVar15 - 0xbe < 4) {
LAB_01b406cd:
                  uVar10 = FUN_01cfd6a0(plVar7);
                  FUN_004169a0(&local_c0,uVar10);
                  in_stack_fffffffffffffeb8 = local_30;
                  in_stack_fffffffffffffec0 = local_c0;
                  FUN_01b3bc80(param_1,plVar7,local_res18[0],9,lVar8,&local_50,local_30,local_c0);
                  goto LAB_01b417f2;
                }
                if (uVar15 == 200) goto LAB_01b3fe03;
              }
              else {
                if (uVar14 - 0xca < 2) goto LAB_01b3fe3d;
                if (uVar14 - 0xcc < 2) goto LAB_01b3fe77;
                if (uVar14 == 0xce) goto LAB_01b40602;
              }
LAB_01b415da:
              if ((*(int *)(lVar8 + 0x30) == 0x39) || (cVar2 = FUN_01d01970(plVar7), cVar2 != '\0'))
              {
                FUN_01d03640(plVar7,&local_f0,*(undefined8 *)PTR_DAT_02001f18);
                FUN_00414ad0(lVar8 + 8,local_f0);
                FUN_01d04330(plVar7,&local_f8);
                FUN_00414ad0(lVar8 + 0x18,local_f8);
                cVar2 = (char)plVar7[0x34];
                if ((*(int *)(lVar8 + 0x30) == 0x39) &&
                   (((cVar2 == '\x02' || (cVar2 == '\x03')) || (cVar2 == '\x04')))) {
                  FUN_01b3b450(&local_100,local_30);
                  FUN_00414ad0(lVar8,local_100);
                  FUN_00414b50(&local_48,*(undefined8 *)(lVar8 + 0x18));
                  if (cVar2 == '\x03') {
                    *(undefined4 *)(lVar8 + 0x38) = 0x12;
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined4 *)(lVar8 + 0x38) = 0x13;
                  }
                  else {
                    *(undefined4 *)(lVar8 + 0x38) = 0x10;
                  }
                  uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
                  in_stack_fffffffffffffeb8 = CONCAT44(uVar5,uVar6);
                  FUN_01b3dc10(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                               in_stack_fffffffffffffeb8);
                }
                else if ((*(int *)(lVar8 + 0x30) == 0x39) && (cVar2 == '\x01')) {
                  FUN_01b3b450(&local_108,local_30);
                  FUN_00414ad0(lVar8,local_108);
                  FUN_00414b50(&local_48,*(undefined8 *)(lVar8 + 0x18));
                  *(undefined4 *)(lVar8 + 0x38) = 0x11;
                  uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
                  in_stack_fffffffffffffeb8 = CONCAT44(uVar5,uVar6);
                  FUN_01b3dc10(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                               in_stack_fffffffffffffeb8);
                }
                else {
                  uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
                  in_stack_fffffffffffffeb8 = CONCAT44(uVar5,uVar6);
                  FUN_01b3d880(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                               in_stack_fffffffffffffeb8);
                }
              }
              else {
                uVar6 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
                in_stack_fffffffffffffeb8 = CONCAT44(uVar5,uVar6);
                FUN_01b3dee0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                             in_stack_fffffffffffffeb8);
              }
            }
            goto LAB_01b417f2;
          }
        }
        else {
          if (0xfa < uVar14) {
            if (uVar14 < 0x107) {
              if (uVar15 - 0xfb < 2) {
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,1);
                uVar9 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,0,0);
              }
              else {
                if (1 < uVar15 - 0xfd) {
                  if (uVar15 - 0xff < 3) goto LAB_01b40a9d;
                  if (4 < uVar15 - 0x102) goto LAB_01b415da;
                }
                in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
                uVar9 = 0;
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                             in_stack_fffffffffffffec0,0,0);
              }
            }
            else if (uVar14 < 0x191) {
              if (uVar15 - 0x107 < 5) goto LAB_01b40a9d;
              if (uVar15 != 400) goto LAB_01b415da;
LAB_01b3fd4d:
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3b7c0(param_1,plVar7,local_res18[0],0xe,lVar8,&local_50,local_30);
            }
            else {
              if (uVar15 - 0x191 < 2) goto LAB_01b40602;
              if (uVar15 != 0x193) {
                if (uVar15 == 0x194) goto LAB_01b3fd4d;
                goto LAB_01b415da;
              }
LAB_01b40670:
              uVar10 = FUN_01cfd6a0(plVar7);
              FUN_004169a0(&local_b8,uVar10);
              in_stack_fffffffffffffeb8 = local_30;
              in_stack_fffffffffffffec0 = local_b8;
              FUN_01b3bc80(param_1,plVar7,local_res18[0],10,lVar8,&local_50,local_30,local_b8);
            }
            goto LAB_01b417f2;
          }
          if (uVar15 != 0xfa) {
            if (uVar14 < 0xd9) {
              if (uVar15 == 0xd2) {
LAB_01b3fe03:
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3b7c0(param_1,plVar7,local_res18[0],0xb,lVar8,&local_50,local_30);
                goto LAB_01b417f2;
              }
              if (uVar15 - 0xd4 < 2) {
LAB_01b3fe3d:
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3b7c0(param_1,plVar7,local_res18[0],1,lVar8,&local_50,local_30);
                goto LAB_01b417f2;
              }
              if (uVar15 - 0xd6 < 2) {
LAB_01b3fe77:
                in_stack_fffffffffffffeb8 = local_30;
                FUN_01b3b7c0(param_1,plVar7,local_res18[0],8,lVar8,&local_50,local_30);
                goto LAB_01b417f2;
              }
              if (uVar15 != 0xd8) goto LAB_01b415da;
            }
            else {
              if (uVar14 < 0xde) {
                if (uVar15 - 0xd9 < 2) {
LAB_01b40a0f:
                  in_stack_fffffffffffffeb8 = local_30;
                  FUN_01b3b7c0(param_1,plVar7,local_res18[0],6,lVar8,&local_50,local_30);
                  goto LAB_01b417f2;
                }
                if (uVar15 != 0xdc) goto LAB_01b415da;
                goto LAB_01b3fe03;
              }
              if (uVar15 - 0xde < 2) goto LAB_01b3fe3d;
              if (uVar15 - 0xe0 < 2) goto LAB_01b3fe77;
              if (uVar15 != 0xe2) goto LAB_01b415da;
            }
          }
        }
LAB_01b40a9d:
        in_stack_fffffffffffffec0 = CONCAT44(uVar6,2);
        uVar9 = 0;
        in_stack_fffffffffffffeb8 = local_30;
        FUN_01b3c620(param_1,plVar7,local_res18[0],3,lVar8,&local_50,local_30,
                     in_stack_fffffffffffffec0,0,0);
      }
      else if (uVar16 < 0x45e) {
        if (uVar16 == 0x45d) {
          in_stack_fffffffffffffeb8 = 0;
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,2);
          FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b419fc,
                       in_stack_fffffffffffffec0);
        }
        else if (uVar16 < 0x3f2) {
          if (uVar15 == 0x3f1) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a90,
                         in_stack_fffffffffffffec0);
          }
          else if (uVar15 < 0x3ed) {
            if (uVar15 == 0x3ec) {
              in_stack_fffffffffffffeb8 = CONCAT44(uVar5,2);
              FUN_01b3e610(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                           in_stack_fffffffffffffeb8);
            }
            else if (uVar16 < 0x3ea) {
              if (uVar16 != 0x3e9) {
                if ((uVar16 - 0x19a < 4) || (uVar16 - 0x19f < 2)) goto LAB_01b40602;
                goto LAB_01b415da;
              }
              in_stack_fffffffffffffeb8 = 0;
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,2);
              FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a10,
                           in_stack_fffffffffffffec0);
            }
            else if (uVar16 == 0x3ea) {
              in_stack_fffffffffffffeb8 = 0;
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
              FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a50,
                           in_stack_fffffffffffffec0);
            }
            else {
              if (uVar16 != 0x3eb) goto LAB_01b415da;
              in_stack_fffffffffffffeb8 = 0;
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
              FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&PTR_LAB_01b41a7c,
                           in_stack_fffffffffffffec0);
            }
          }
          else if (uVar15 == 0x3ed) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,L"NAND",
                         in_stack_fffffffffffffec0);
          }
          else if (uVar15 == 0x3ee) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,2);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a10,
                         in_stack_fffffffffffffec0);
          }
          else if (uVar15 == 0x3ef) {
            in_stack_fffffffffffffeb8 = CONCAT44(uVar5,0xffffffff);
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,6);
            FUN_01b3e0a0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                         in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0);
          }
          else {
            if (uVar15 != 0x3f0) goto LAB_01b415da;
            in_stack_fffffffffffffeb8 = CONCAT44(uVar5,0xffffffff);
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,7);
            FUN_01b3e0a0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                         in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0);
          }
        }
        else if (uVar16 < 0x3f7) {
          if (uVar15 == 0x3f6) {
            in_stack_fffffffffffffeb8 = CONCAT44(uVar5,3);
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,7);
            FUN_01b3e0a0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                         in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0);
          }
          else if (uVar15 == 0x3f2) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a50,
                         in_stack_fffffffffffffec0);
          }
          else if (uVar15 == 0x3f3) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,L"NAND",
                         in_stack_fffffffffffffec0);
          }
          else if (uVar15 == 0x3f4) {
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&PTR_LAB_01b41a7c,
                         in_stack_fffffffffffffec0);
          }
          else {
            if (uVar15 != 0x3f5) goto LAB_01b415da;
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a90,
                         in_stack_fffffffffffffec0);
          }
        }
        else if (uVar16 == 0x3f7) {
          in_stack_fffffffffffffeb8 = CONCAT44(uVar5,3);
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,6);
          FUN_01b3e0a0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                       in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0);
        }
        else if (uVar16 == 0x3f8) {
          in_stack_fffffffffffffeb8 = 0;
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
          FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,L"NAND",
                       in_stack_fffffffffffffec0);
        }
        else if (uVar16 == 0x3f9) {
          in_stack_fffffffffffffeb8 = 0;
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
          FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a3c,
                       in_stack_fffffffffffffec0);
        }
        else {
          if (uVar16 != 0x3fe) goto LAB_01b415da;
          in_stack_fffffffffffffeb8 = CONCAT44(uVar5,2);
          FUN_01b3e7d0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                       in_stack_fffffffffffffeb8);
        }
      }
      else if (uVar16 < 0x4b1) {
        if (uVar15 == 0x4b0) {
          in_stack_fffffffffffffeb8 = CONCAT44(uVar5,1);
          FUN_01b3e610(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                       in_stack_fffffffffffffeb8);
        }
        else if (uVar16 < 0x469) {
          if (uVar16 == 0x468) {
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,6);
            uVar9 = 0;
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                         in_stack_fffffffffffffec0,L"DIP3",0);
          }
          else {
            if (uVar16 == 0x462) goto LAB_01b3fe03;
            if (uVar16 == 0x463) {
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,8);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,L"DIP4",0);
            }
            else {
              if (uVar16 == 0x464) goto LAB_01b3fe03;
              if (uVar16 != 0x467) goto LAB_01b415da;
              in_stack_fffffffffffffec0 = CONCAT44(uVar6,4);
              uVar9 = 0;
              in_stack_fffffffffffffeb8 = local_30;
              FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                           in_stack_fffffffffffffec0,L"DIP2",0);
            }
          }
        }
        else if (uVar16 == 0x469) {
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,10);
          uVar9 = 0;
          in_stack_fffffffffffffeb8 = local_30;
          FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                       in_stack_fffffffffffffec0,L"DIP5",0);
        }
        else if (uVar16 == 0x46a) {
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,0xc);
          uVar9 = 0;
          in_stack_fffffffffffffeb8 = local_30;
          FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                       in_stack_fffffffffffffec0,L"DIP6",0);
        }
        else if (uVar16 == 0x46b) {
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,0xe);
          uVar9 = 0;
          in_stack_fffffffffffffeb8 = local_30;
          FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                       in_stack_fffffffffffffec0,L"DIP7",0);
        }
        else {
          if (uVar16 != 0x46c) goto LAB_01b415da;
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,0x10);
          uVar9 = 0;
          in_stack_fffffffffffffeb8 = local_30;
          FUN_01b3c620(param_1,plVar7,local_res18[0],0x11,lVar8,&local_50,local_30,
                       in_stack_fffffffffffffec0,L"DIP8",0);
        }
      }
      else if (uVar16 < 0x8ee) {
        if (uVar15 == 0x8ed) {
          in_stack_fffffffffffffeb8 = 0;
          in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
          FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a50,
                       in_stack_fffffffffffffec0);
        }
        else if (uVar15 == 0x4b1) {
          in_stack_fffffffffffffeb8 = CONCAT44(uVar5,1);
          FUN_01b3e7d0(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,
                       in_stack_fffffffffffffeb8);
        }
        else {
          if (uVar15 - 0x578 < 5) goto LAB_01b41108;
          if (uVar15 - 0x57d < 5) {
LAB_01b41158:
            uVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,uVar5);
            in_stack_fffffffffffffeb8 = local_30;
            FUN_01b3e3a0(param_1,plVar7,local_res18[0],lVar8,&local_50,&DAT_01b41ab8,local_30,
                         in_stack_fffffffffffffec0);
          }
          else {
            if (uVar15 != 0x889) goto LAB_01b415da;
            in_stack_fffffffffffffeb8 = 0;
            in_stack_fffffffffffffec0 = CONCAT44(uVar6,3);
            FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,L"BUF3",
                         in_stack_fffffffffffffec0);
          }
        }
      }
      else if (uVar15 == 0x8f5) {
        in_stack_fffffffffffffeb8 = 0;
        in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
        FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&PTR_LAB_01b41a7c,
                     in_stack_fffffffffffffec0);
      }
      else if (uVar15 == 0x901) {
        in_stack_fffffffffffffeb8 = 0;
        in_stack_fffffffffffffec0 = CONCAT44(uVar6,5);
        FUN_01b3d530(param_1,plVar7,local_res18[0],lVar8,&local_50,local_30,&DAT_01b41a90,
                     in_stack_fffffffffffffec0);
      }
      else {
        if (1 < uVar15 - 0x2901) {
          if (uVar15 == 0x2903) goto LAB_01b3fcd9;
          goto LAB_01b415da;
        }
        in_stack_fffffffffffffeb8 = local_30;
        FUN_01b3b630(param_1,plVar7,local_res18[0],0xb,lVar8,&local_50,local_30);
      }
LAB_01b417f2:
      if (!bVar1) {
        iVar4 = *(int *)(lVar8 + 0x34);
        iVar17 = 0;
        if (-1 < iVar4 + -1) {
          do {
            piVar11 = (int *)FUN_00418560(0x20,&DAT_00ea9378);
            if (*(longlong *)(lVar8 + 0x50) == 0) {
              *(int **)(lVar8 + 0x50) = piVar11;
            }
            else {
              *(int **)(local_110 + 6) = piVar11;
            }
            piVar11[6] = 0;
            piVar11[7] = 0;
            piVar11[1] = *(int *)(local_50 + (longlong)iVar17 * 4);
            FUN_01b38990(*(undefined4 *)(local_50 + (longlong)iVar17 * 4),&local_40);
            FUN_00414ad0(piVar11 + 4,local_40);
            *piVar11 = iVar17 + 1;
            FUN_00414480(piVar11 + 2);
            iVar17 = iVar17 + 1;
            iVar4 = iVar4 + -1;
            local_110 = piVar11;
          } while (iVar4 != 0);
        }
      }
      FUN_00419430(&local_50,&DAT_004066f0);
    }
    FUN_01995800(param_1,1,0);
    plVar7 = (longlong *)FUN_01995660(param_1,1,0);
  } while( true );
}

