/* Ghidra address: 0137cdb0 */
/* Ghidra symbol: FUN_0137cdb0 */


undefined4 FUN_0137cdb0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  int iVar13;
  double dVar14;
  undefined4 local_164;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_110 = 0;
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
  local_80[0] = 0;
  local_70 = 0;
  local_164 = 0xffffffff;
  if ((char)param_1[0x24] == '\0') {
    if (*(char *)((longlong)param_1 + 0x189) == '\0') {
      local_164 = 1;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x189) = 0;
      cVar2 = (char)param_1[0x13];
      uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
      if ((cVar2 == '\x04') || (cVar2 == '\x0f')) {
        uVar4 = (undefined4)CONCAT71(uVar12,4);
        cVar2 = '\x01';
      }
      else {
        if (cVar2 != '\b') {
          local_164 = 0xffffffff;
          goto LAB_0137dc70;
        }
        uVar4 = (undefined4)CONCAT71(uVar12,6);
        cVar2 = '\x05';
      }
      if (*(char *)((longlong)param_1 + 0x59) != '\0') {
        lVar6 = param_1[10];
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x408) != 0)) {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x408) + 0x488);
          param_1[0x32] = *(longlong *)(lVar6 + 0xb0);
          param_1[0x33] = *(longlong *)(lVar6 + 0xb8);
        }
        lVar6 = param_1[0x32];
        if (((lVar6 != 0) && (param_1[1] != 0)) &&
           (*(char *)(*(longlong *)(lVar6 + 8) + 0x434) == (char)uVar4)) {
          lVar10 = param_1[0x32];
          FUN_01cc6020(lVar6);
          lVar6 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_1[0x32]);
          param_1[0x29] = lVar6;
          param_1[0x2a] = -1;
          if (*param_2 != 0) {
            FUN_01cc6030(*param_2);
          }
          lVar6 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,uVar4,1,0);
          *param_2 = lVar6;
          FUN_01cc6020(*param_2);
          lVar6 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*param_2);
          param_1[0xc] = lVar6;
          param_1[0xd] = -1;
          iVar11 = 0;
          iVar13 = 0;
          FUN_01cc5c60(lVar10);
          do {
            lVar6 = FUN_01cc5cc0(lVar10);
            if (lVar6 != 0) {
              if ((*(char *)(lVar6 + 0x3a) == cVar2) && (*(char *)(lVar6 + 0x18) != '\0')) {
                if ((char)param_1[0x13] == '\b') {
                  if (*(int *)((longlong)param_1 + 0x104) == 0) {
                    FUN_01cc0ae0(lVar6,local_80);
                    iVar3 = FUN_004170c0(&DAT_0137dcfc,local_80[0],1);
                    if (iVar3 == 0) {
                      FUN_01cc0ae0(lVar6,&local_88);
                      iVar3 = FUN_004170c0(&DAT_0137dd10,local_88,1);
                      if (iVar3 == 0) goto LAB_0137d10b;
                    }
                  }
                  else {
LAB_0137d10b:
                    if (*(int *)((longlong)param_1 + 0x104) == 1) {
                      FUN_01cc0ae0(lVar6,&local_90);
                      iVar3 = FUN_004170c0(&DAT_0137dd24,local_90,1);
                      if (iVar3 == 0) {
                        FUN_01cc0ae0(lVar6,&local_98);
                        iVar3 = FUN_004170c0(&DAT_0137dd38,local_98,1);
                        if (iVar3 == 0) goto LAB_0137d172;
                      }
                    }
                    else {
LAB_0137d172:
                      if (*(int *)((longlong)param_1 + 0x104) < 2) goto LAB_0137d17f;
                    }
                  }
LAB_0137d195:
                  FUN_01cc0ae0(lVar6,&local_a0);
                  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_a0,&local_64);
                  if (cVar1 != '\0') {
                    uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                      ((longlong *)param_1[1],local_64);
                    lVar8 = FUN_004113f0(uVar7,&PTR_FUN_011051a8);
                    *(int *)(lVar8 + 0xbc) = iVar11;
                    iVar13 = iVar13 + 1;
                  }
                }
                else {
LAB_0137d17f:
                  if (((char)param_1[0x13] == '\x04') || ((char)param_1[0x13] == '\x0f'))
                  goto LAB_0137d195;
                }
                if (iVar11 == 0) {
                  uVar4 = (**(code **)(*(longlong *)param_1[0x29] + 0x20))
                                    ((longlong *)param_1[0x29],lVar6,0);
                  *(undefined4 *)(param_1 + 0x2c) = uVar4;
                  lVar8 = FUN_01cc80a0(param_1[0x29]);
                  param_1[0x2a] = lVar8;
                }
              }
              iVar11 = iVar11 + 1;
            }
          } while (lVar6 != 0);
          if (0 < iVar13) {
            iVar3 = 0;
            FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),iVar13,0,2,1,0,0,cVar2);
            FUN_01cc5c60(*param_2);
            iVar11 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
            iVar13 = 0;
            if (-1 < iVar11 + -1) {
              do {
                uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar13)
                ;
                plVar9 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_011051a8);
                if (*(int *)((longlong)plVar9 + 0xbc) == -1) {
                  if ((char)param_1[0x13] == '\b') {
                    (**(code **)(*plVar9 + 0x10))(plVar9,0,0);
                    *(undefined1 *)((longlong)plVar9 + 0x11) = 0;
                  }
                }
                else {
                  lVar6 = FUN_01cc5cc0(*param_2);
                  if (lVar6 != 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
                    FUN_01cc09f0(plVar9[8],plVar9[1]);
                    lVar10 = plVar9[8];
                    *(undefined1 *)(lVar10 + 0x18) = *(undefined1 *)((longlong)plVar9 + 0x11);
                    if ((char)param_1[0x13] == '\b') {
                      FUN_01cc0ae0(lVar10,&local_70);
                      if (*(int *)((longlong)param_1 + 0x104) == 0) {
                        FUN_01cc0ae0(lVar6,&local_a8);
                        iVar5 = FUN_004170c0(&DAT_0137dcfc,local_a8,1);
                        if (iVar5 == 0) {
                          uVar4 = FUN_004170c0(&DAT_0137dd10,local_70,1);
                          FUN_00416e20(&local_70,uVar4,3);
                          FUN_00416ba0(&local_b8,local_70);
                          FUN_01cc09f0(plVar9[8],local_b8);
                        }
                        else {
                          uVar4 = FUN_004170c0(&DAT_0137dcfc,local_70,1);
                          FUN_00416e20(&local_70,uVar4,3);
                          FUN_00416ba0(&local_b0,local_70);
                          FUN_01cc09f0(plVar9[8],local_b0);
                        }
                      }
                      if (*(int *)((longlong)param_1 + 0x104) == 1) {
                        FUN_01cc0ae0(lVar6,&local_c0);
                        iVar5 = FUN_004170c0(&DAT_0137dd24,local_c0,1);
                        if (iVar5 == 0) {
                          uVar4 = FUN_004170c0(&DAT_0137dd38,local_70,1);
                          FUN_00416e20(&local_70,uVar4,3);
                          FUN_00416ba0(&local_d0,local_70);
                          FUN_01cc09f0(plVar9[8],local_d0);
                        }
                        else {
                          uVar4 = FUN_004170c0(&DAT_0137dd24,local_70,1);
                          FUN_00416e20(&local_70,uVar4,3);
                          FUN_00416ba0(&local_c8,local_70);
                          FUN_01cc09f0(plVar9[8],local_c8);
                        }
                      }
                      if (*(int *)((longlong)param_1 + 0x104) == 2) {
                        FUN_01cc0ae0(lVar6,&local_d8);
                        iVar5 = FUN_004170c0(&DAT_0137dd24,local_d8,1);
                        if (iVar5 == 0) {
                          FUN_01cc0ae0(lVar6,&local_e8);
                          iVar5 = FUN_004170c0(&DAT_0137dd38,local_e8,1);
                          if (iVar5 == 0) {
                            FUN_01cc0ae0(lVar6,&local_f8);
                            iVar5 = FUN_004170c0(&DAT_0137dd10,local_f8,1);
                            if (iVar5 == 0) {
                              FUN_01cc0ae0(lVar6,&local_108);
                              iVar5 = FUN_004170c0(&DAT_0137dcfc,local_108);
                              if (iVar5 != 0) {
                                uVar4 = FUN_004170c0(&DAT_0137dcfc,local_70,1);
                                FUN_00416e20(&local_70,uVar4,3);
                                FUN_00416ba0(&local_110,local_70);
                                FUN_01cc09f0(plVar9[8],local_110);
                              }
                            }
                            else {
                              uVar4 = FUN_004170c0(&DAT_0137dd10,local_70,1);
                              FUN_00416e20(&local_70,uVar4,3);
                              FUN_00416ba0(&local_100,local_70);
                              FUN_01cc09f0(plVar9[8],local_100);
                            }
                          }
                          else {
                            uVar4 = FUN_004170c0(&DAT_0137dd38,local_70,1);
                            FUN_00416e20(&local_70,uVar4,3);
                            FUN_00416ba0(&local_f0,local_70);
                            FUN_01cc09f0(plVar9[8],local_f0);
                          }
                        }
                        else {
                          uVar4 = FUN_004170c0(&DAT_0137dd24,local_70,1);
                          FUN_00416e20(&local_70,uVar4,3);
                          FUN_00416ba0(&local_e0,local_70);
                          FUN_01cc09f0(plVar9[8],local_e0);
                        }
                      }
                    }
                    *(int *)(plVar9 + 0x17) = iVar3;
                    if (iVar3 == 0) {
                      (**(code **)(*(longlong *)param_1[0xc] + 0x10))
                                ((longlong *)param_1[0xc],plVar9[8]);
                      lVar6 = FUN_01cc80a0(param_1[0xc]);
                      param_1[0xd] = lVar6;
                    }
                    iVar3 = iVar3 + 1;
                    if ((char)param_1[0x13] == '\b') {
                      *(undefined1 *)((longlong)plVar9 + 0x11) = 1;
                    }
                  }
                }
                iVar13 = iVar13 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            local_164 = 0;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x59) = 0;
      }
      if ((param_1[0xc] != 0) && (param_1[0xd] != -1)) {
        FUN_01cc80c0(param_1[0xc],param_1[0xd]);
        if ((param_1[0x29] != 0) && (param_1[0x2a] != -1)) {
          lVar6 = FUN_004095c0((longlong)(int)param_1[0x2c]);
          FUN_01cc80c0(param_1[0x29],param_1[0x2a]);
          while (cVar2 = (**(code **)(*(longlong *)param_1[0x29] + 0x40))
                                   ((longlong *)param_1[0x29],&local_60,lVar6), cVar2 != '\0') {
            FUN_01cc47e0(*param_2,local_60);
            iVar11 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
            iVar13 = 0;
            if (-1 < iVar11 + -1) {
              do {
                uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar13)
                ;
                lVar10 = FUN_004113f0(uVar7,&PTR_FUN_011051a8);
                if (*(int *)(lVar10 + 0xb8) != -1) {
                  if (((char)param_1[0x13] == '\b') && (*(int *)((longlong)param_1 + 0x104) == 2)) {
                    iVar3 = *(int *)(lVar10 + 0xbc) * 2;
                    local_48 = *(undefined8 *)(lVar6 + (longlong)iVar3 * 8);
                    local_40 = *(undefined8 *)(lVar6 + (longlong)(iVar3 + 1) * 8);
                    FUN_00c44940(&local_120,&local_48);
                    local_48 = local_120;
                    local_40 = uStack_118;
                    if ((*(int *)(lVar10 + 0xbc) == 0) || (*(int *)(lVar10 + 0xbc) == 2)) {
                      FUN_00c44b10(&local_58,PTR_DAT_02002618,&local_48);
                      dVar14 = (double)FUN_00c44590(&local_58);
                      if (dVar14 < 1e-12) {
                        local_50 = FUN_00c445d0(&local_58);
                        local_58 = 0x3d719799812dea11;
                        FUN_00c44940(&local_120,&local_58);
                        local_58 = local_120;
                        local_50 = uStack_118;
                      }
                      FUN_00c44460(local_130,0x4049000000000000,0);
                      FUN_00c44ac0(&local_120,PTR_DAT_02002618,&local_48);
                      FUN_00c44b10(local_150,PTR_DAT_02002618,&local_48);
                      FUN_00c44b60(local_140,&local_120,local_150);
                      FUN_00c44a50(&local_120,local_130,local_140);
                    }
                    else {
                      local_58 = local_120;
                      local_50 = uStack_118;
                      dVar14 = (double)FUN_00c44590(&local_58);
                      if (dVar14 < 1e-12) {
                        local_50 = FUN_00c445d0(&local_58);
                        local_58 = 0x3d719799812dea11;
                        FUN_00c44940(&local_120,&local_58);
                        local_58 = local_120;
                        local_50 = uStack_118;
                      }
                      FUN_00c44460(local_130,0x4059000000000000,0);
                      FUN_00c44b10(&local_120,PTR_DAT_02002618,&local_48);
                      FUN_00c44b60(local_140,&local_120,&local_48);
                      FUN_00c44a50(&local_120,local_130,local_140);
                    }
                    FUN_00c44900(&local_120,&local_48);
                    local_48 = local_120;
                    local_40 = uStack_118;
                    FUN_01cc48a0(*param_2,*(undefined4 *)(lVar10 + 0xb8),local_120,uStack_118);
                  }
                  else {
                    iVar3 = *(int *)(lVar10 + 0xbc) * 2;
                    FUN_01cc48a0(*param_2,*(undefined4 *)(lVar10 + 0xb8),
                                 *(undefined8 *)(lVar6 + (longlong)iVar3 * 8),
                                 *(undefined8 *)(lVar6 + (longlong)(iVar3 + 1) * 8));
                  }
                }
                iVar13 = iVar13 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
          lVar10 = FUN_01cc80a0(param_1[0x29]);
          param_1[0x2a] = lVar10;
          FUN_004095f0(lVar6,(longlong)(int)param_1[0x2c]);
          local_164 = 0;
        }
        lVar6 = FUN_01cc80a0(param_1[0xc]);
        param_1[0xd] = lVar6;
      }
    }
  }
LAB_0137dc70:
  FUN_00414560(&local_110,0x13);
  FUN_00414480(&local_70);
  return local_164;
}

