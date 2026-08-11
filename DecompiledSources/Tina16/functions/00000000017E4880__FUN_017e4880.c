/* Ghidra address: 017e4880 */
/* Ghidra symbol: FUN_017e4880 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017e4880(longlong param_1,undefined1 param_2)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  double *pdVar12;
  char *pcVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_ed8 [32];
  undefined8 ****local_eb8;
  ulonglong local_eb0;
  undefined1 local_ea8;
  undefined1 local_ea0;
  undefined1 local_e8a;
  char local_e89;
  longlong local_e88;
  char local_e7d;
  char local_e7c;
  char local_e7b;
  char local_e7a;
  undefined1 local_e79;
  longlong local_e78;
  int local_e6c;
  longlong local_e68;
  double local_e60;
  undefined8 ****local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined1 local_e38 [256];
  undefined8 local_d38;
  undefined8 local_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  ulonglong local_cb8;
  undefined8 local_cb0;
  ulonglong local_ca8;
  undefined8 local_ca0 [2];
  longlong local_c90;
  undefined8 local_c88;
  undefined1 local_c7c [4];
  undefined8 local_c78;
  undefined8 local_c70;
  undefined1 local_c68 [16];
  undefined1 local_c58 [8];
  double local_c50;
  undefined8 ***local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  char local_c28 [83];
  undefined2 local_bd5 [41];
  undefined1 local_b83 [75];
  uint local_b38;
  int local_9e8;
  undefined8 local_9e4;
  double local_7b8;
  longlong *local_7b0;
  byte local_7a0;
  int local_760;
  undefined4 local_75c;
  undefined8 local_750;
  undefined8 local_748;
  longlong local_740;
  double local_738 [6];
  double local_708 [12];
  undefined8 local_6a8 [6];
  undefined8 ****local_678 [100];
  undefined8 local_358 [32];
  byte local_258;
  int local_254;
  int local_250;
  char local_248;
  undefined8 local_240 [11];
  char local_1e8;
  undefined2 local_1e0;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  char local_188;
  ushort local_180 [48];
  undefined2 local_120;
  undefined4 local_c0;
  undefined4 local_64;
  undefined2 local_60 [2];
  int local_5c;
  
  local_e50 = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_d38 = 0;
  local_d30 = 0;
  local_d10 = 0;
  local_d18 = 0;
  local_d20 = 0;
  local_d28 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cc0 = 0;
  local_cc8 = 0;
  local_cf0 = 0;
  local_cf8 = 0;
  local_cb8 = 0;
  local_ca8 = 0;
  local_cb0 = 0;
  local_ca0[0] = 0;
  local_748 = 0;
  local_c90 = 0;
  local_e7a = '\0';
  local_e79 = *(undefined1 *)(param_1 + 0x509);
  local_e78 = *(longlong *)(param_1 + 0x4f8);
  local_e8a = param_2;
LAB_017e7cbe:
  do {
    while( true ) {
      if ((*(int *)(local_e78 + 0x10) + -1 < *(int *)(param_1 + 0x55c)) ||
         (*(char *)(param_1 + 0x508) != '\0')) goto LAB_017e7ced;
      FUN_010d3290(local_e78,*(int *)(param_1 + 0x55c),local_358);
      if (*(char *)(param_1 + 0x359) != '\0') {
        if ((DAT_02110118 != '\0') && (*(char *)(param_1 + 0x358) == '\0')) {
          uVar7 = FUN_007f94c0(0);
          *(undefined8 *)(param_1 + 0x378) = uVar7;
          uVar7 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)(param_1 + 0x380) = uVar7;
          lVar10 = *(longlong *)(param_1 + 0x380);
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,local_ca0,0x3ec);
          FUN_0064de00(lVar10,local_ca0[0]);
          if (*(int *)(param_1 + 0x35c) == 1) {
            uVar7 = FUN_00b89270();
            FUN_0041ddd0(&local_cb0,PTR_PTR_02001978);
            FUN_00b8e650(uVar7,&local_ca8,L"HDLStrings.Msg_ProcessingCurve",local_cb0);
            FUN_00c54370(lVar10,local_ca8);
          }
          else {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_cb8,0x3ed);
            FUN_00c54370(lVar10,local_cb8);
          }
          *(undefined1 *)(lVar10 + 0x6c1) = 1;
          *(longlong *)(lVar10 + 0x6d0) = param_1;
          *(code **)(lVar10 + 0x6c8) = FUN_017e32d0;
          FUN_008059a0(*(undefined8 *)(param_1 + 0x380));
          *(undefined1 *)(param_1 + 0x358) = 1;
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      iVar6 = local_250;
      uVar8 = (ulonglong)local_258;
      if (0xb < uVar8) break;
      if (uVar8 == 0xb) {
        local_e60 = 0.0;
        if (*(char *)(param_1 + 0x50b) != '\0') {
          if (*(int *)(param_1 + 0x8c4) == 0) {
            if (local_c28[0] == '\0') {
              local_e7c = '\x01';
              local_e60 = ((*(double *)(param_1 + 0x418 + (longlong)*(int *)(param_1 + 0x370) * 8) -
                           *(double *)(param_1 + 0x468 + (longlong)*(int *)(param_1 + 0x370) * 8)) /
                          (double)(*(int *)(param_1 + 0x4b8 +
                                           (longlong)*(int *)(param_1 + 0x370) * 4) + -1)) *
                          (double)local_5c +
                          *(double *)(param_1 + 0x468 + (longlong)*(int *)(param_1 + 0x370) * 8);
              if (*(int *)(param_1 + 0x4b8 + (longlong)*(int *)(param_1 + 0x370) * 4) < 2) {
                FUN_017e2900(param_1,0x101);
                goto LAB_017e7ced;
              }
            }
            else if (local_c28[0] == '\x05') {
              if (local_7b8 != 0.0) {
                local_e7c = '\x01';
                local_e60 = (double)FUN_017e4180(param_1,local_5c,(longlong)&local_9e4 + 4);
                if (*(int *)(param_1 + 0x4b8 + (longlong)*(int *)(param_1 + 0x370) * 4) < 2) {
                  FUN_017e2900(param_1,0x101);
                  goto LAB_017e7ced;
                }
              }
            }
            else {
              local_e7c = '\x01';
              dVar18 = (double)FUN_0040c850(*(undefined8 *)
                                             (param_1 + 0x468 +
                                             (longlong)*(int *)(param_1 + 0x370) * 8));
              if (dVar18 < 1e-30) {
                FUN_017e2900(param_1,0x101);
                goto LAB_017e7ced;
              }
              local_eb8 = (undefined8 ****)CONCAT44(local_eb8._4_4_,local_5c);
              local_eb0 = CONCAT71(local_eb0._1_7_,1);
              local_ea8 = 0;
              local_e60 = (double)FUN_017c58f0(*(undefined8 *)
                                                (param_1 + 0x468 +
                                                (longlong)*(int *)(param_1 + 0x370) * 8),
                                               *(undefined8 *)
                                                (param_1 + 0x418 +
                                                (longlong)*(int *)(param_1 + 0x370) * 8),0);
            }
          }
          else {
            cVar4 = FUN_004113d0(*(undefined8 *)(param_1 + 0x510),&PTR_FUN_01cb9c30);
            if (cVar4 == '\0') {
              local_e7b = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))
                                    (*(longlong **)(param_1 + 0x510),&local_c50,local_c58);
            }
            else {
              local_e7b = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x88))
                                    (*(longlong **)(param_1 + 0x510),&local_c50,local_c68);
            }
            local_e60 = local_c50;
          }
          if (local_c28[0] == '\x04') {
            FUN_010c7a40(local_738,local_e60);
          }
          else {
            iVar6 = FUN_00414f50(local_bd5,&DAT_017e7f30,(ulonglong)(byte)local_bd5[0] + 1);
            if (iVar6 == 0) {
              FUN_010c7a60(local_738,0,local_e60 * 6.283185307179586);
            }
            else {
              FUN_010c7a40(local_738,local_e60);
            }
          }
          FUN_013b4700(*(undefined8 *)(param_1 + 0x4e8),local_bd5,local_738);
        }
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (uVar8 < 6) {
        if (uVar8 == 5) {
          *(uint *)(param_1 + 0x55c) = CONCAT22(uStack_1de,local_1e0);
        }
        else if (uVar8 < 3) {
          if (uVar8 == 2) {
            FUN_017e26a0(param_1);
          }
          else if (uVar8 == 0) {
            cVar4 = FUN_017e2800(param_1,local_250);
            if (cVar4 != '\0') {
              FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_240[0],local_678);
              FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_1e0,local_6a8);
              cVar4 = FUN_010c7d50(local_678,local_6a8);
              if (cVar4 == '\0') {
                FUN_010c7a80(local_678);
                FUN_010c7a80(local_6a8);
              }
            }
            uVar3 = local_c0;
            if (iVar6 == 0x105) {
              puVar14 = local_240;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*puVar14;
                puVar14 = puVar14 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),uVar3,local_678);
            }
            if (iVar6 == 0x108) {
              FUN_00415020(param_1 + 0x898,local_240,0x28);
              if (((local_248 == '\x02') && (local_1e8 == '\x02')) && (local_188 == '\x03')) {
                FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_180[0],local_678);
                cVar4 = FUN_010c7e80(local_678);
                if (cVar4 != '\0') {
                  FUN_017e2900(param_1,0x102);
                  goto LAB_017e7ced;
                }
                lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
                if (lVar10 != 0) {
                  cVar4 = FUN_013b27a0(lVar10,&local_1e0,1);
                  if (cVar4 == '\0') {
                    FUN_017e2900(param_1,0x103);
                    goto LAB_017e7ced;
                  }
                  FUN_013b2990(lVar10,&local_1e0,local_678 + 1);
                }
              }
              else if (((local_248 == '\x02') && (local_1e8 == '\x02')) && (local_188 == '\x01')) {
                lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
                if (lVar10 != 0) {
                  cVar4 = FUN_013b27a0(lVar10,&local_1e0,1);
                  if (cVar4 == '\0') {
                    FUN_017e2900(param_1,0x103);
                    goto LAB_017e7ced;
                  }
                  FUN_013b2cc0(lVar10,&local_1e0,local_180);
                }
              }
              else {
                FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_1e0,local_678);
                lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_240);
                if (lVar10 == 0) {
                  cVar4 = FUN_017e1b60(*(undefined8 *)(param_1 + 0x500));
                  if (cVar4 == '\0') {
                    lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
                    if (lVar10 == 0) {
                      FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_240,local_678);
                    }
                    else {
                      cVar4 = FUN_013b2f60(*(undefined8 *)(param_1 + 0x550),lVar10,local_e79);
                      if (cVar4 == '\0') {
                        FUN_017e2900(param_1,0x201);
                        goto LAB_017e7ced;
                      }
                      local_eb8 = &local_c48;
                      cVar4 = FUN_013b3000(*(undefined8 *)(param_1 + 0x550),lVar10,local_678,
                                           &local_c40);
                      if (cVar4 == '\0') {
                        FUN_0041ddd0(&local_d18,PTR_PTR_02005120);
                        local_eb8._0_1_ = 1;
                        FUN_00b8fd60(&local_d20,local_c40,*(undefined1 *)(param_1 + 0x398),0);
                        local_ce8 = local_d20;
                        local_ce0 = 0x11;
                        local_eb8 = (undefined8 ****)CONCAT71(local_eb8._1_7_,1);
                        FUN_00b8fd60(&local_d28,local_c48,*(undefined1 *)(param_1 + 0x398),0);
                        local_cd8 = local_d28;
                        local_cd0 = 0x11;
                        FUN_00442f70(&local_d10,local_d18,&local_ce8,1);
                        FUN_017e29e0(param_1,local_d10);
                        goto LAB_017e7ced;
                      }
                      if (*(char *)(lVar10 + 8) == '\a') {
                        FUN_013b4630(*(undefined8 *)(param_1 + 0x550),local_240,local_678);
                      }
                      else {
                        FUN_013b3ec0(*(undefined8 *)(param_1 + 0x550),lVar10,local_678);
                      }
                    }
                  }
                  else {
                    FUN_017e1ad0(*(undefined8 *)(param_1 + 0x500),&local_748,&local_64);
                    FUN_004169a0(&local_d00,local_240);
                    iVar5 = FUN_00416db0(local_748,local_d00);
                    if (iVar5 == 0) {
                      FUN_013b38e0(*(undefined8 *)(param_1 + 0x4e8),local_678,local_748);
                      FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_64,local_678);
                    }
                    else {
                      lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x500),local_240);
                      if (lVar10 == 0) {
                        lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
                        if (lVar10 == 0) {
                          FUN_004169a0(&local_d08,local_240);
                          FUN_017e1940(*(undefined8 *)(param_1 + 0x500),local_d08,local_678);
                        }
                        else {
                          cVar4 = FUN_013b2f60(*(undefined8 *)(param_1 + 0x550),lVar10,local_e79);
                          if (cVar4 == '\0') {
                            FUN_017e2900(param_1,0x201);
                            goto LAB_017e7ced;
                          }
                          FUN_013b3ec0(*(undefined8 *)(param_1 + 0x550),lVar10,local_678);
                        }
                      }
                      else {
                        FUN_013b3ec0(*(undefined8 *)(param_1 + 0x500),lVar10,local_678);
                      }
                    }
                  }
                }
                else {
                  cVar4 = FUN_013b2f60(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_e79);
                  if (cVar4 == '\0') {
                    FUN_017e2900(param_1,0x201);
                    goto LAB_017e7ced;
                  }
                  local_eb8 = &local_c48;
                  cVar4 = FUN_013b3000(*(undefined8 *)(param_1 + 0x550),lVar10,local_678,&local_c40)
                  ;
                  if (cVar4 == '\0') {
                    FUN_0041ddd0(&local_cc8,PTR_PTR_02005120);
                    local_eb8._0_1_ = 1;
                    FUN_00b8fd60(&local_cf0,local_c40,*(undefined1 *)(param_1 + 0x398),0);
                    local_ce8 = local_cf0;
                    local_ce0 = 0x11;
                    local_eb8 = (undefined8 ****)CONCAT71(local_eb8._1_7_,1);
                    FUN_00b8fd60(&local_cf8,local_c48,*(undefined1 *)(param_1 + 0x398),0);
                    local_cd8 = local_cf8;
                    local_cd0 = 0x11;
                    FUN_00442f70(&local_cc0,local_cc8,&local_ce8,1);
                    FUN_017e29e0(param_1,local_cc0);
                    goto LAB_017e7ced;
                  }
                  FUN_013b3ec0(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_678);
                }
              }
            }
            if (iVar6 == 0x104) {
              FUN_00415020(param_1 + 0x898,local_240,0x28);
              lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_240);
              if (lVar10 == 0) {
                lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
                if (lVar10 == 0) {
                  cVar4 = FUN_017e1b60(*(undefined8 *)(param_1 + 0x500));
                  if ((cVar4 == '\0') ||
                     (lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x500),local_240), lVar10 == 0
                     )) {
                    if (*(char *)(param_1 + 0x540) != '\0') {
                      FUN_004169a0(&local_d30,local_240);
                      cVar4 = FUN_00c53800(local_d30,&local_9e4);
                      if (cVar4 != '\0') {
                        FUN_004169a0(&local_d38,local_240);
                        cVar4 = FUN_017e9f10(param_1,local_d38,local_678);
                        if (cVar4 != '\0') {
                          lVar10 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x4f0),local_c0);
                          ppppuVar11 = local_678;
                          puVar14 = (undefined8 *)(lVar10 + 0x10);
                          for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
                            *puVar14 = *ppppuVar11;
                            ppppuVar11 = ppppuVar11 + 1;
                            puVar14 = puVar14 + 1;
                          }
                          goto LAB_017e56e1;
                        }
                        FUN_017e2900(param_1,0x103);
                        goto LAB_017e7ced;
                      }
                    }
                    FUN_017e2900(param_1,0x103);
                    goto LAB_017e7ced;
                  }
                  lVar9 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x4f0),local_c0);
                  FUN_013b4b70(*(undefined8 *)(param_1 + 0x500),lVar10,local_678);
                  ppppuVar11 = local_678;
                  puVar14 = (undefined8 *)(lVar9 + 0x10);
                  for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar14 = *ppppuVar11;
                    ppppuVar11 = ppppuVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                }
                else {
                  cVar4 = FUN_013b4c40(*(undefined8 *)(param_1 + 0x550),lVar10);
                  if (cVar4 == '\b') {
                    FUN_017e2900(param_1,0x102);
                    goto LAB_017e7ced;
                  }
                  lVar9 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x4f0),local_c0);
                  FUN_013b4b70(*(undefined8 *)(param_1 + 0x550),lVar10,local_678);
                  ppppuVar11 = local_678;
                  puVar14 = (undefined8 *)(lVar9 + 0x10);
                  for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar14 = *ppppuVar11;
                    ppppuVar11 = ppppuVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                }
              }
              else {
                lVar9 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x4f0),local_c0);
                FUN_013b4b70(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_678);
                ppppuVar11 = local_678;
                puVar14 = (undefined8 *)(lVar9 + 0x10);
                for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar14 = *ppppuVar11;
                  ppppuVar11 = ppppuVar11 + 1;
                  puVar14 = puVar14 + 1;
                }
              }
            }
LAB_017e56e1:
            if (iVar6 == 400) {
              FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_c0,local_678);
              local_750 = *(undefined8 *)(param_1 + 0x628);
              FUN_010cc470(local_678,&local_750,&local_748);
              FUN_017e2fa0(param_1,local_748,(undefined4)local_240[0]);
            }
            cVar4 = FUN_017e2800(param_1,iVar6);
            if (cVar4 != '\0') {
              FUN_017e2ae0(param_1,local_678,local_6a8,iVar6);
              cVar4 = FUN_017e28e0(param_1);
              if (cVar4 != '\0') goto LAB_017e7ced;
              FUN_010c8e00(iVar6,local_678,local_6a8);
              FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_c0,local_738);
            }
            cVar4 = FUN_017e2830(param_1,iVar6);
            if (cVar4 != '\0') {
              FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_240[0],local_678);
              cVar4 = FUN_010c7eb0(iVar6);
              if (cVar4 == '\0') {
                FUN_017e8660(param_1,iVar6,local_678);
              }
              else {
                local_eb8 = local_678;
                FUN_017e89e0(param_1,iVar6,local_358);
              }
              cVar4 = FUN_017e28e0(param_1);
              if (cVar4 != '\0') goto LAB_017e7ced;
              FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_c0,local_678);
            }
            *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
          }
          else if (uVar8 == 1) goto LAB_017e774a;
        }
        else {
          if (uVar8 == 3) {
            FUN_017e26a0(param_1);
            goto LAB_017e7ced;
          }
          if (uVar8 == 4) {
            FUN_017e26c0(param_1,(undefined4)local_240[0]);
          }
        }
      }
      else if (uVar8 == 6) {
        if (*(short *)(param_1 + 0x558) == 0) {
          *(uint *)(param_1 + 0x55c) = CONCAT22(uStack_1de,local_1e0);
        }
        else {
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
      }
      else if (uVar8 == 7) {
LAB_017e774a:
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (uVar8 == 8) {
        FUN_017e3330(param_1,local_e8a);
        cVar4 = FUN_017e28e0(param_1);
        if (cVar4 != '\0') {
LAB_017e7ced:
          if (((*(char *)(param_1 + 0x50b) != '\0') &&
              ((cVar4 = FUN_017e28e0(param_1), cVar4 == '\0' ||
               (*(int *)(*(longlong *)(param_1 + 0x8d8) + 0x10) < 1)))) &&
             (*(int *)(param_1 + 0x8c4) == 0)) {
            FUN_017e1330(*(undefined8 *)(param_1 + 0x8d8));
          }
          FUN_00414560(&local_e50,3);
          FUN_00414560(&local_d38,10);
          FUN_00414560(&local_cc8,6);
          FUN_00414480(&local_c90);
          FUN_00414480(&local_748);
          return;
        }
      }
      else if (uVar8 == 10) {
        *(undefined1 *)(param_1 + 0x50a) = 1;
        local_7b8 = 0.0;
        local_e7c = '\0';
        local_e7d = '\0';
        cVar4 = FUN_01695f00(param_1);
        if (((cVar4 == '\0') || (*(char *)(param_1 + 0x350) == '\0')) ||
           (iVar6 = FUN_010d1220(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 0x4e8)),
           local_254 == iVar6)) {
          if (*(char *)(param_1 + 0x50b) != '\0') {
            *(undefined2 *)(param_1 + 0x55a) = 0xf;
            local_e7a = '\x01';
            local_e89 = '\0';
            local_e7b = *(int *)(param_1 + 0x8c4) != 1;
            if (*(int *)(param_1 + 0x8c4) == 1) {
              (**(code **)(**(longlong **)(param_1 + 0x510) + 0x10))
                        (*(longlong **)(param_1 + 0x510),*(undefined8 *)(param_1 + 0x518),0);
              FUN_010c8ff0(1,(longlong)*(int *)(*(longlong *)(param_1 + 0x518) + 0x2c) / 100 &
                             0xffffffff);
            }
            FUN_013b4c70(*(undefined8 *)(param_1 + 0x550),local_c28,&local_9e8);
            if (0 < local_9e8) {
              FUN_017e2900(param_1,(undefined2)local_9e8);
              goto LAB_017e7ced;
            }
            FUN_017e4370(auStack_ed8,local_c28,1);
            pcVar13 = local_c28;
            puVar14 = (undefined8 *)(param_1 + 0x650);
            for (lVar10 = 0x48; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar14 = *(undefined8 *)pcVar13;
              pcVar13 = pcVar13 + 8;
              puVar14 = puVar14 + 1;
            }
            FUN_00415020(param_1 + 0x6f5,local_240,0x28);
            FUN_00415020(local_b83,param_1 + 0x6f5,0x28);
            if (*(int *)(param_1 + 0x8c4) == 1) {
              iVar6 = *(int *)PTR_DAT_02002a28;
              if (iVar6 == 0) {
                local_c28[0] = '\0';
                local_bd5[0] = 0x7401;
              }
              else if (iVar6 == 1) {
                local_c28[0] = '\x02';
                local_bd5[0] = 0x7301;
              }
              else if (iVar6 == 2) {
                local_c28[0] = '\0';
                local_bd5[0] = 0x7801;
              }
              else if (iVar6 == 3) {
                local_c28[0] = '\x04';
                local_bd5[0] = 0x7301;
              }
              FUN_017e3310(param_1,local_c28[0]);
            }
            FUN_004169a0(&local_748,local_bd5);
            FUN_010c7a40(local_738,0);
            FUN_00416910(local_e38,local_748,0xff);
            local_e88 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_e38);
            if (local_e88 == 0) {
              FUN_00416910(local_e38,local_748,0xff);
              FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_e38,local_738);
            }
            if (*(int *)(param_1 + 0x8c4) == 0) {
              lVar10 = FUN_017e4620(auStack_ed8);
              FUN_017e32e0(param_1,lVar10);
              puVar14 = (undefined8 *)(param_1 + 0x650);
              puVar16 = (undefined8 *)(lVar10 + 0x68);
              for (lVar9 = 0x48; lVar9 != 0; lVar9 = lVar9 + -1) {
                *puVar16 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              }
            }
            else if (*(longlong *)(param_1 + 0x360) == 0) {
              FUN_017e32e0(param_1,*(undefined8 *)PTR_DAT_02005188);
            }
            cVar4 = '\0';
            if (*(int *)(param_1 + 0x8c4) != 0) {
              FUN_004169a0(&local_e40,local_240);
              cVar4 = FUN_013c0c30(*(undefined8 *)(param_1 + 0x360),local_e40,local_c7c);
            }
            if ((cVar4 == '\0') || (*(int *)(param_1 + 0x8c4) != 1)) {
              if (*(char *)(param_1 + 0x8c8) == '\0') {
                if (*(longlong *)(param_1 + 0x360) == 0) {
                  FUN_016fd940(L"IprWriter = NIL, no analysis performed!");
                }
                else {
                  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x360) + 8) + 0x4464) = 0;
                  FUN_01cc6510(*(undefined8 *)(param_1 + 0x360));
                  FUN_004169a0(&local_c90,local_240);
                  if (local_c28[0] == '\x05') {
                    FUN_00419260(param_1 + 0x3b8,&DAT_017df760,1,1000);
                    FUN_00419260(param_1 + 0x3c0,&DAT_017df760,1);
                  }
                }
                if ((*(int *)(param_1 + 0x8c4) == 1) && (*(int *)(param_1 + 0x8e0) == 1)) {
                  FUN_01cc64e0(*(undefined8 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x8e4),
                               *(undefined8 *)(param_1 + 0x8f0));
                }
                *(undefined4 *)(param_1 + 0x8e0) = 0;
              }
            }
            else if (*(char *)(param_1 + 0x8c8) == '\0') {
              if (((cVar4 != '\0') && (*(int *)(param_1 + 0x8c4) == 1)) &&
                 (FUN_01cc6430(*(undefined8 *)(param_1 + 0x360),local_c88,param_1 + 0x8e8),
                 *(int *)(param_1 + 0x8e0) == 0)) {
                *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x8e8);
                *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(param_1 + 0x8f8);
              }
              *(undefined4 *)(param_1 + 0x8e0) = 1;
            }
          }
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
        else {
          *(undefined2 *)(param_1 + 0x55a) = 0;
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
      }
    }
    if (uVar8 < 0x13) {
      if (uVar8 == 0x12) {
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (uVar8 < 0xf) {
        if (uVar8 == 0xe) {
          FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_1e0,param_1 + 0x568);
          FUN_00415020(param_1 + 0x5f9,local_240,10);
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
        else if (uVar8 == 0xc) {
          if (*(char *)(param_1 + 0x50b) != '\0') {
            if ((local_e7d == '\0') && (local_c90 != 0)) {
              if ((local_c28[0] == '\x05') && (cVar4 = FUN_01116810(local_7a0), cVar4 == '\0')) {
                uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                     L"Fourier spectrum curve not specified in the draw instruction!"
                                    );
                FUN_004134c0(uVar7);
              }
              uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x360) + 8);
              if (((local_c28[0] == '\0') || (local_c28[0] == '\x01')) ||
                 ((local_c28[0] == '\x05' && (cVar4 = FUN_01116850(local_7a0), cVar4 != '\0')))) {
                local_eb8 = (undefined8 ****)((ulonglong)local_eb8 & 0xffffffffffffff00);
                local_eb0 = 0;
                local_ea8 = 1;
                local_ea0 = 0;
                uVar7 = FUN_01cc2930(uVar7,local_c90,3);
                *(undefined8 *)(param_1 + 0x520) = uVar7;
              }
              else {
                local_eb8 = (undefined8 ****)((ulonglong)local_eb8 & 0xffffffffffffff00);
                local_eb0 = 0;
                local_ea8 = 1;
                local_ea0 = 0;
                uVar7 = FUN_01cc2930(uVar7,local_c90,3);
                *(undefined8 *)(param_1 + 0x520) = uVar7;
              }
              local_e7d = '\x01';
            }
            cVar4 = FUN_017e28e0(param_1);
            if (cVar4 != '\0') {
              if (*(char *)(param_1 + 0x8c8) == '\0') {
                lVar10 = FUN_01d34b90(*(undefined8 *)(*(longlong *)(param_1 + 0x360) + 8));
                *(undefined1 *)(lVar10 + 0x18) = 0;
              }
              goto LAB_017e7ced;
            }
            FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_c0,local_738);
            if (local_e89 != '\0') {
              local_e89 = '\0';
            }
            if (local_c28[0] == '\0') {
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              cVar4 = FUN_010c7e80(local_678);
              if (cVar4 != '\0') {
                FUN_010c8830(local_678);
              }
              local_e58 = local_678[1];
              if (local_e7b != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  FUN_01cc6510(*(undefined8 *)(param_1 + 0x360));
                  FUN_01cc4620(*(undefined8 *)(param_1 + 0x360),local_e60);
                  FUN_01cc46b0(*(undefined8 *)(param_1 + 0x360),0,local_e58);
                }
                else {
                  local_eb8 = (undefined8 ****)0x0;
                  local_eb0 = local_eb0 & 0xffffffff00000000;
                  uVar7 = FUN_017e1730(&DAT_017df5e8,1,local_e60,local_678[1]);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8d0),uVar7);
                }
              }
            }
            if ((local_c28[0] == '\x05') && (cVar4 = FUN_01116830(local_7a0), cVar4 != '\0')) {
              if (local_e7c == '\0') {
                uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                     L"Fourier spectrum curve not specified in the draw instruction!"
                                    );
                FUN_004134c0(uVar7);
              }
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              FUN_017e94d0(param_1,local_678,1);
              ppppuVar11 = local_678[1];
              FUN_010c8830(local_738);
              dVar18 = local_738[1];
              if (local_e7b != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  FUN_01cc6510(*(undefined8 *)(param_1 + 0x360));
                  FUN_01cc5240(*(undefined8 *)(param_1 + 0x360),local_e60);
                  FUN_01cc52d0(*(undefined8 *)(param_1 + 0x360),dVar18,ppppuVar11);
                  lVar10 = 0;
                  if (*(longlong *)(param_1 + 0x3b8) != 0) {
                    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x3b8) + -8);
                  }
                  if (lVar10 <= *(int *)(param_1 + 0x36c)) {
                    lVar10 = 0;
                    if (*(longlong *)(param_1 + 0x3b8) != 0) {
                      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x3b8) + -8);
                    }
                    FUN_00419260(param_1 + 0x3b8,&DAT_017df760,1,lVar10 + 1000);
                    FUN_00419260(param_1 + 0x3c0,&DAT_017df760,1);
                  }
                  uVar7 = FUN_00c44470(dVar18 / *(double *)(*(longlong *)(param_1 + 0x360) + 0x60),
                                       0x3ff0000000000000);
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x3b8) + (longlong)*(int *)(param_1 + 0x36c) * 8) =
                       uVar7;
                  *(double *)
                   (*(longlong *)(param_1 + 0x3c0) + (longlong)*(int *)(param_1 + 0x36c) * 8) =
                       local_e60;
                  *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + 1;
                }
                else {
                  local_eb8 = (undefined8 ****)0x0;
                  local_eb0 = local_eb0 & 0xffffffff00000000;
                  uVar7 = FUN_017e1730(&DAT_017df5e8,1,local_e60,local_e58);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8d0),uVar7);
                }
              }
            }
            if ((local_c28[0] == '\x05') && (cVar4 = FUN_01116850(local_7a0), cVar4 != '\0')) {
              if (local_e7c == '\0') {
                uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                     L"Fourier spectrum curve not specified in the draw instruction!"
                                    );
                FUN_004134c0(uVar7);
              }
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              cVar4 = FUN_010c7e80(local_678);
              if (cVar4 != '\0') {
                FUN_010c8830(local_678);
              }
              local_e58 = local_678[1];
              if (local_e7b != '\0') {
                FUN_01cc6510(*(undefined8 *)(param_1 + 0x360));
                FUN_01cc4620(*(undefined8 *)(param_1 + 0x360),local_e60);
                FUN_01cc46b0(*(undefined8 *)(param_1 + 0x360),0,local_e58);
              }
            }
            if (local_c28[0] == '\x04') {
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              cVar4 = FUN_010c7e80(local_678);
              if (cVar4 != '\0') {
                FUN_010c8830(local_678);
              }
              local_e58 = local_678[1];
              if (local_e7b != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  FUN_017e1700(*PTR_DAT_02001af0);
                  FUN_01cc4620(*(undefined8 *)(param_1 + 0x360),local_e60);
                  FUN_01cc51c0(*(undefined8 *)(param_1 + 0x360),0,local_e58);
                }
                else {
                  local_eb8 = (undefined8 ****)0x0;
                  local_eb0 = local_eb0 & 0xffffffff00000000;
                  uVar7 = FUN_017e1730(&DAT_017df5e8,1,local_e60,local_678[1]);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8d0),uVar7);
                }
              }
            }
            if (local_c28[0] == '\x01') {
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              cVar4 = FUN_010c7e80(local_678);
              if (cVar4 != '\0') {
                FUN_010c8830(local_678);
              }
              local_e58 = local_678[1];
              if (local_e7b != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  FUN_01cc4620(*(undefined8 *)(param_1 + 0x360),local_e60);
                  FUN_01cc46b0(*(undefined8 *)(param_1 + 0x360),0,local_e58);
                }
                else {
                  local_eb8 = (undefined8 ****)0x0;
                  local_eb0 = local_eb0 & 0xffffffff00000000;
                  uVar7 = FUN_017e1730(&DAT_017df5e8,1,local_e60,local_678[1]);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8d0),uVar7);
                }
              }
            }
            if ((local_c28[0] == '\x02') || (local_c28[0] == '\x03')) {
              pdVar12 = local_738;
              ppppuVar11 = local_678;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *ppppuVar11 = (undefined8 ***)*pdVar12;
                pdVar12 = pdVar12 + 1;
                ppppuVar11 = ppppuVar11 + 1;
              }
              pdVar12 = local_738;
              pdVar15 = local_708;
              for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
                *pdVar15 = *pdVar12;
                pdVar12 = pdVar12 + 1;
                pdVar15 = pdVar15 + 1;
              }
              FUN_017e2d40(param_1,local_678,0x135);
              cVar4 = FUN_017e28e0(param_1);
              if (cVar4 != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  lVar10 = FUN_01d34b90(*(undefined8 *)(*(longlong *)(param_1 + 0x360) + 8));
                  *(undefined1 *)(lVar10 + 0x18) = 0;
                }
                goto LAB_017e7ced;
              }
              FUN_017e94d0(param_1,local_678,1);
              ppppuVar11 = local_678[1];
              FUN_010c8830(local_738);
              dVar18 = local_738[1];
              if (local_e7b != '\0') {
                if (*(char *)(param_1 + 0x8c8) == '\0') {
                  FUN_01cc47e0(*(undefined8 *)(param_1 + 0x360),local_e60);
                  cVar4 = FUN_004113d0(*(undefined8 *)(param_1 + 0x510),&PTR_FUN_01cba328);
                  if (cVar4 == '\0') {
                    FUN_01cc48a0(*(undefined8 *)(param_1 + 0x360),0,dVar18,ppppuVar11);
                  }
                  else {
                    FUN_01cc4e50(*(undefined8 *)(param_1 + 0x360),0,local_708[1],local_708[2]);
                  }
                }
                else {
                  local_eb8 = ppppuVar11;
                  local_eb0 = CONCAT44(local_eb0._4_4_,1);
                  uVar7 = FUN_017e1730(&DAT_017df5e8,1,local_e60,local_738[1]);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8d0),uVar7);
                }
              }
            }
            local_5c = local_5c + 1;
            if (*(int *)(param_1 + 0x8c4) == 0) {
              if (local_5c < *(int *)(param_1 + 0x4b8 + (longlong)*(int *)(param_1 + 0x370) * 4)) {
                *(undefined2 *)(param_1 + 0x55a) = 0;
              }
              else if (*(int *)(param_1 + 0x370) < *(int *)(param_1 + 0x4e0) + -1) {
                FUN_017e4370(auStack_ed8,local_c28,0);
              }
              else {
                *(undefined2 *)(param_1 + 0x55a) = 0xf;
              }
            }
            else if (local_e7b == '\0') {
              *(undefined2 *)(param_1 + 0x55a) = 0xf;
            }
            else {
              *(undefined2 *)(param_1 + 0x55a) = 0;
            }
          }
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
        else if (uVar8 == 0xd) {
          if (*(char *)(param_1 + 0x50b) != '\0') {
            if (local_e88 == 0) {
              FUN_00c53170(*(undefined8 *)(param_1 + 0x4e8));
            }
            local_e7a = '\0';
            FUN_017e3310(param_1,local_c28[0]);
            if (local_c28[0] == '\x05') {
              FUN_00419430(param_1 + 0x3b8,&DAT_017df760);
              FUN_00419430(param_1 + 0x3c0,&DAT_017df760);
              *(undefined4 *)(param_1 + 0x36c) = 0;
            }
          }
          *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
        }
      }
      else if (uVar8 == 0xf) {
        FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_180[0],param_1 + 0x598);
        FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_120,param_1 + 0x5c8);
        FUN_00415020(param_1 + 0x604,local_240,10);
        FUN_00415020(param_1 + 0x60f,&local_1e0,10);
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (uVar8 - 0x10 < 2) {
        FUN_00415020(param_1 + 0x898,local_240,0x28);
        if (local_258 == 0x10) {
          iVar6 = 1;
        }
        else {
          iVar6 = -1;
        }
        lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_240);
        if (lVar10 == 0) {
          lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
          if (lVar10 != 0) {
            FUN_017e2900(param_1,0x201);
            goto LAB_017e7ced;
          }
          cVar4 = FUN_017e1b60(*(undefined8 *)(param_1 + 0x500));
          if ((cVar4 == '\0') ||
             (lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x500),local_240), lVar10 == 0)) {
            FUN_017e2900(param_1,0x103);
            goto LAB_017e7ced;
          }
          FUN_013b4b70(*(undefined8 *)(param_1 + 0x500),lVar10,local_678);
          local_678[1] = (undefined8 ****)((double)local_678[1] + (double)iVar6);
          FUN_013b3ec0(*(undefined8 *)(param_1 + 0x500),lVar10,local_678);
        }
        else {
          cVar4 = FUN_013b2f60(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_e79);
          if (cVar4 == '\0') {
            FUN_017e2900(param_1,0x201);
            goto LAB_017e7ced;
          }
          FUN_013b4b70(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_678);
          local_678[1] = (undefined8 ****)((double)local_678[1] + (double)iVar6);
          FUN_013b3ec0(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_678);
        }
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      goto LAB_017e7cbe;
    }
    if (uVar8 == 0x13) {
      FUN_00415020(param_1 + 0x898,local_240,0x28);
      FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_1e0,local_678);
      lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_240);
      if (lVar10 == 0) {
        cVar4 = FUN_017e1b60(*(undefined8 *)(param_1 + 0x500));
        if (cVar4 == '\0') {
          lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
          if (lVar10 != 0) {
            FUN_017e2900(param_1,0x201);
            goto LAB_017e7ced;
          }
          FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_240,local_678);
        }
        else {
          FUN_017e1ad0(*(undefined8 *)(param_1 + 0x500),&local_748,&local_64);
          FUN_004169a0(&local_e48,local_240);
          iVar6 = FUN_00416db0(local_748,local_e48);
          if (iVar6 == 0) {
            FUN_013b38e0(*(undefined8 *)(param_1 + 0x4e8),local_678,local_748);
            FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_64,local_678);
          }
          else {
            lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x500),local_240);
            if (lVar10 == 0) {
              lVar10 = FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_240);
              if (lVar10 != 0) {
                FUN_017e2900(param_1,0x201);
                goto LAB_017e7ced;
              }
              FUN_004169a0(&local_e50,local_240);
              FUN_017e1940(*(undefined8 *)(param_1 + 0x500),local_e50,local_678);
            }
            else {
              FUN_013b3ec0(*(undefined8 *)(param_1 + 0x500),lVar10,local_678,local_e79);
            }
          }
        }
      }
      else {
        cVar4 = FUN_013b2f60(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_e79);
        if (cVar4 == '\0') {
          FUN_017e2900(param_1,0x201);
          goto LAB_017e7ced;
        }
        FUN_013b3ec0(*(undefined8 *)(param_1 + 0x4e8),lVar10,local_678,local_e79);
      }
      *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
    }
    else if (uVar8 == 0x14) {
      FUN_00415020(param_1 + 0x898,local_240,0x28);
      lVar10 = FUN_013b3e30(*(undefined8 *)(param_1 + 0x4e8),local_240,3);
      if (lVar10 == 0) {
        lVar10 = FUN_013b3e30(*(undefined8 *)(param_1 + 0x550),local_240,8);
        if (lVar10 == 0) {
          FUN_017e2900(param_1,0x103);
          goto LAB_017e7ced;
        }
        lVar9 = CONCAT44(uStack_1dc,CONCAT22(uStack_1de,local_1e0));
        if (*(int *)(lVar9 + 0x10) != 1) {
          FUN_017e2900(param_1,0x10b);
          goto LAB_017e7ced;
        }
        FUN_013b4b90(lVar9,0,local_60);
        FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_60[0],local_738);
        FUN_013b49d0(lVar10,lVar10,(longlong)&local_9e4 + 4);
        if ((local_c28[0] == '\x05') && (cVar4 = FUN_01116810(local_7a0), cVar4 == '\0')) {
          uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,
                               L"The specified curve in the draw instruction is not a Fourier curve!"
                              );
          FUN_004134c0(uVar7);
        }
        if (local_c28[0] == '\x05') {
          local_eb8 = (undefined8 ****)(param_1 + 0x418 + (longlong)*(int *)(param_1 + 0x370) * 8);
          local_eb0 = *(longlong *)(param_1 + 0x360) + 0x60;
          FUN_017e4120(param_1,(longlong)&local_9e4 + 4,
                       param_1 + 0x4b8 + (longlong)*(int *)(param_1 + 0x370) * 4,
                       param_1 + 0x468 + (longlong)*(int *)(param_1 + 0x370) * 8);
          *(uint *)(param_1 + 0x740) = (uint)local_7a0;
          local_b38 = (uint)local_7a0;
          lVar10 = FUN_017e4620(auStack_ed8);
          puVar14 = (undefined8 *)(param_1 + 0x650);
          puVar16 = (undefined8 *)(lVar10 + 0x68);
          for (lVar9 = 0x48; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
          local_e60 = (double)FUN_017e4180(param_1,local_5c,(longlong)&local_9e4 + 4,&local_c78);
          if (*(int *)(param_1 + 0x4b8 + (longlong)*(int *)(param_1 + 0x370) * 4) < 2) {
            FUN_017e2900(param_1,0x101);
            goto LAB_017e7ced;
          }
          iVar6 = FUN_00414f50(local_bd5,&DAT_017e7f30,(ulonglong)(byte)local_bd5[0] + 1);
          if (iVar6 == 0) {
            FUN_010c7a60(local_738,0,local_e60 * 6.283185307179586);
          }
          else {
            FUN_010c7a40(local_738,local_e60);
          }
          local_e7c = '\x01';
        }
        FUN_01cc7fc0(local_7b0,local_7b8);
        (**(code **)(*local_7b0 + 0x10))(local_7b0,local_7b8,0);
        if ((*(int *)((longlong)local_7b8 + 0x2c) == 1) &&
           (cVar4 = FUN_004113d0(local_7b0,&PTR_FUN_01cb9c30), cVar4 != '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          (**(code **)(*local_7b0 + 0x30))(local_7b0,&local_c30,&local_c38,0);
          FUN_010c7a60(local_738,local_c30,local_c38);
        }
        else {
          if (local_7a0 == 0) {
            dVar18 = (double)FUN_01cc92d0(local_7b0,local_7b8);
            dVar17 = (double)(**(code **)(*local_7b0 + 0xa0))(local_7b0,local_7b8);
          }
          else {
            dVar18 = (double)(**(code **)(*local_7b0 + 0x58))(local_7b0,local_7b8);
            dVar17 = (double)(**(code **)(*local_7b0 + 0x60))(local_7b0,local_7b8);
          }
          cVar4 = FUN_011167f0(local_7a0);
          dVar1 = local_738[1];
          if (cVar4 != '\0') {
            dVar1 = local_738[2];
          }
          local_e89 = '\0';
          cVar4 = FUN_011167f0(local_7a0);
          if (cVar4 == '\0') {
            if ((1e-09 < dVar18 - dVar1) || (1e-09 < dVar1 - dVar17)) {
              local_e89 = '\x01';
            }
          }
          else if ((0.0001 < dVar18 - dVar1 / 6.283185307179586) ||
                  (0.0001 < dVar1 / 6.283185307179586 - dVar17)) {
            local_e89 = '\x01';
          }
          if ((local_e89 != '\0') && (FUN_010c7a40(local_738,0), local_e7a == '\0')) {
            local_e89 = '\0';
          }
          if (local_7a0 == 0) {
            (**(code **)(*local_7b0 + 0x90))
                      (local_7b0,local_738[2] / 6.283185307179586,&local_c30,&local_c38);
            FUN_010c7a60(local_738,local_c30,local_c38);
          }
          else {
            cVar4 = FUN_01116830(local_7a0);
            if (cVar4 == '\0') {
              cVar4 = FUN_01116850(local_7a0);
              if (cVar4 == '\0') {
                cVar4 = FUN_010c7e80(local_738);
                if (cVar4 != '\0') {
                  FUN_010c8830(local_738);
                }
                uVar7 = (**(code **)(*local_7b0 + 0x48))(local_7b0,local_738[1]);
                FUN_010c7a40(local_738,uVar7);
              }
              else {
                FUN_010c7a40(local_738,local_c78);
                if (local_e7a != '\0') {
                  iVar6 = FUN_00414f50(local_bd5,&DAT_017e7f30,(ulonglong)(byte)local_bd5[0] + 1);
                  if (iVar6 == 0) {
                    FUN_010c7a60(local_678,0,local_e60 * 6.283185307179586);
                  }
                  else {
                    FUN_010c7a40(local_678,local_e60);
                  }
                  FUN_013b4700(*(undefined8 *)(param_1 + 0x4e8),local_bd5,local_678);
                }
              }
            }
            else {
              dVar18 = local_738[2] / 6.283185307179586;
              FUN_010c7a60(local_738,local_c78,local_c70);
              if (local_e7a != '\0') {
                iVar6 = FUN_00414f50(local_bd5,&DAT_017e7f30,(ulonglong)(byte)local_bd5[0] + 1);
                if (iVar6 == 0) {
                  FUN_010c7a60(local_678,0,dVar18 * 6.283185307179586);
                }
                else {
                  FUN_010c7a40(local_678,dVar18);
                }
                FUN_013b4700(*(undefined8 *)(param_1 + 0x4e8),local_bd5,local_678);
              }
            }
          }
        }
        FUN_01cc8000(local_7b0,local_7b8);
        FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_c0,local_738);
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else {
        FUN_013b4c10(*(undefined8 *)(param_1 + 0x4e8),lVar10,&local_740);
        local_e68 = CONCAT44(uStack_1dc,CONCAT22(uStack_1de,local_1e0));
        if (*(int *)(local_740 + 0x10) != *(int *)(local_e68 + 0x10)) {
          FUN_017e2900(param_1,0x10b);
          goto LAB_017e7ced;
        }
        FUN_013b4bb0(*(undefined8 *)(param_1 + 0x4e8),lVar10,&local_64);
        local_9e4._4_1_ = 6;
        FUN_00414ff0((longlong)&local_9e4 + 5,local_240);
        local_760 = *(int *)(param_1 + 0x55c) + 1;
        local_75c = local_c0;
        FUN_017e19f0(*(undefined8 *)(param_1 + 0x500),(longlong)&local_9e4 + 4);
        iVar6 = *(int *)(local_740 + 0x10);
        local_e6c = 0;
        if (-1 < iVar6 + -1) {
          do {
            FUN_013b49f0(local_740,local_e6c,(longlong)&local_9e4 + 4);
            FUN_013b4b90(local_e68,local_e6c,local_60);
            FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),local_60[0],local_738);
            pdVar12 = local_738;
            pdVar15 = &local_7b8;
            for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
              *pdVar15 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar15 = pdVar15 + 1;
            }
            FUN_017e19f0(*(undefined8 *)(param_1 + 0x500),(longlong)&local_9e4 + 4);
            local_e6c = local_e6c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        *(undefined4 *)(param_1 + 0x55c) = local_64;
      }
    }
    else if (uVar8 == 0x15) {
      FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_240[0],local_678);
      dVar18 = (double)FUN_0040c850((double)local_678[1] - 1.0);
      if (1e-30 <= dVar18) {
        *(undefined2 *)(param_1 + 0x558) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x558) = 0xf;
      }
      *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
    }
    else if (uVar8 == 0x16) {
      if (*(short *)(param_1 + 0x55a) == 0) {
        *(uint *)(param_1 + 0x55c) = CONCAT22(uStack_1de,local_1e0);
      }
      else {
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
    }
  } while( true );
}

