/* Ghidra address: 0137e930 */
/* Ghidra symbol: FUN_0137e930 */


undefined1 FUN_0137e930(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong local_a8;
  undefined1 local_9d;
  int local_9c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64 [5];
  double local_50 [5];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_a8 = 0;
  if (((char)param_1[0x31] == '\0') && ((char)param_1[0x24] == '\0')) {
    if (*(char *)((longlong)param_1 + 0x16e) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x16e) = 1;
      lVar8 = param_1[10];
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x408) != 0)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x408) + 0x488);
        param_1[0x32] = *(longlong *)(lVar8 + 0xb0);
        param_1[0x33] = *(longlong *)(lVar8 + 0xb8);
      }
      lVar8 = param_1[0x32];
      if (((lVar8 != 0) && (param_1[1] != 0)) &&
         (*(char *)(*(longlong *)(lVar8 + 8) + 0x434) == '\x03')) {
        FUN_01cc6020(lVar8);
        if (param_1[0x2b] != 0) {
          FUN_01cc6030(param_1[0x2b]);
        }
        uVar14 = 0;
        lVar8 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,1,0);
        param_1[0x2b] = lVar8;
        FUN_01cc6020(lVar8);
        FUN_00410f20(param_1[0xc]);
        lVar8 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1[0x2b]);
        param_1[0xc] = lVar8;
        FUN_00410f20(param_1[0x29]);
        lVar8 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1[0x32]);
        param_1[0x29] = lVar8;
        iVar12 = 0;
        iVar13 = 0;
        *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
        iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_9c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c);
            lVar8 = FUN_004113f0(uVar9,&PTR_FUN_011051a8);
            *(undefined8 *)(lVar8 + 0x58) = 0;
            local_9c = local_9c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_1[0xd] = 0;
        lVar8 = param_1[0x32];
        FUN_01cc5c60(lVar8);
        do {
          lVar10 = FUN_01cc5cc0(lVar8);
          if (lVar10 != 0) {
            if (iVar12 == 0) {
              param_1[0x28] = lVar10;
            }
            if ((*(char *)(lVar10 + 0x3a) == '\x01') && (*(char *)(lVar10 + 0x18) != '\0')) {
              FUN_01cc0ae0(lVar10,&local_70);
              cVar4 = (**(code **)(*param_1 + 0x40))(param_1,local_70,local_64);
              if (cVar4 != '\0') {
                uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                  ((longlong *)param_1[1],local_64[0]);
                lVar11 = FUN_004113f0(uVar9,&PTR_FUN_011051a8);
                if (*(longlong *)(lVar11 + 0x58) == 0) {
                  *(longlong *)(lVar11 + 0x58) = lVar10;
                  *(int *)(lVar11 + 0xbc) = iVar12;
                  (**(code **)(*(longlong *)param_1[0x11] + 0x18))
                            ((longlong *)param_1[0x11],&local_78,(int)param_1[0x20]);
                  iVar6 = FUN_00416db0(local_78,*(undefined8 *)(lVar11 + 8));
                  if (iVar6 == 0) {
                    *(int *)(param_1 + 0x1f) = iVar12;
                  }
                  iVar13 = iVar13 + 1;
                }
              }
            }
            iVar12 = iVar12 + 1;
          }
        } while (lVar10 != 0);
        iVar12 = 0;
        lVar8 = param_1[0x2b];
        FUN_01cc31d0(*(undefined8 *)(lVar8 + 8),iVar13,0,2,uVar14 & 0xffffffffffffff00,0,0,1);
        FUN_01cc5c60(lVar8);
        iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_9c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c);
            lVar10 = FUN_004113f0(uVar9,&PTR_FUN_011051a8);
            if (*(longlong *)(lVar10 + 0x58) != 0) {
              uVar9 = FUN_01cc5cc0(lVar8);
              FUN_01cc09f0(uVar9,*(undefined8 *)(lVar10 + 8));
              *(int *)(lVar10 + 0xb8) = iVar12;
              if (iVar12 == 0) {
                (**(code **)(*(longlong *)param_1[0xc] + 0x10))((longlong *)param_1[0xc],uVar9,0);
                lVar10 = FUN_01cc80a0(param_1[0xc]);
                param_1[0xd] = lVar10;
              }
              iVar12 = iVar12 + 1;
            }
            local_9c = local_9c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_1[0x2e] = 0;
        (**(code **)(*(longlong *)param_1[0x11] + 0x18))
                  ((longlong *)param_1[0x11],&local_80,(int)param_1[0x20]);
        iVar6 = FUN_00416db0(local_80,L"Ext.-Func.Gen.");
        if (iVar6 == 0) {
          lVar8 = *(longlong *)(param_1[10] + 0x88 + (longlong)(int)param_1[3] * 8);
          if (lVar8 == 0) {
            param_1[0x26] = 0;
          }
          else {
            uVar9 = FUN_004113f0(lVar8,&PTR_FUN_01133e90);
            lVar8 = FUN_01136fb0(uVar9,param_1[0x27],*(undefined1 *)((longlong)param_1 + 0x99));
            param_1[0x26] = lVar8;
          }
        }
      }
    }
    local_9d = 1;
    lVar8 = param_1[0x18];
    dVar2 = (double)param_1[0x15];
    if ((param_1[0x29] != 0) && (0 < *(int *)(*(longlong *)(param_1[0x2b] + 8) + 0x44c))) {
      local_50[0] = 0.0;
      if ((*(char *)((longlong)param_1 + 0x59) == '\0') &&
         ((*(char *)((longlong)param_1 + 0x16d) == '\0' || (param_1[0x28] == 0)))) {
        FUN_01cc80c0(param_1[0x29],param_1[0x2a]);
      }
      else {
        uVar7 = (**(code **)(*(longlong *)param_1[0x29] + 0x20))
                          ((longlong *)param_1[0x29],param_1[0x28],1);
        *(undefined4 *)((longlong)param_1 + 0x164) = uVar7;
        FUN_013411f0(*(undefined8 *)(*(longlong *)(param_1[10] + 0x408) + 0x488));
      }
      local_a8 = FUN_004095c0((longlong)*(int *)((longlong)param_1 + 0x164));
      FUN_01cc80c0(param_1[0xc],param_1[0xd]);
      while (cVar4 = (**(code **)(*(longlong *)param_1[0x29] + 0x40))
                               ((longlong *)param_1[0x29],local_50,local_a8), cVar4 != '\0') {
        lVar10 = param_1[0x2b];
        iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_9c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c);
            lVar11 = FUN_004113f0(uVar9,&PTR_FUN_011051a8);
            if (*(longlong *)(lVar11 + 0x58) != 0) {
              uVar9 = *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8);
              if (*(char *)((longlong)param_1 + 0x59) != '\0') {
                if ((int)param_1[0x1f] != -1) {
                  param_1[0x25] = *(longlong *)(local_a8 + (longlong)(int)param_1[0x1f] * 8);
                }
                *(undefined8 *)(lVar11 + 0xd0) =
                     *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8);
                *(undefined8 *)(lVar11 + 200) =
                     *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8);
                *(double *)(lVar11 + 0xc0) = local_50[0];
              }
              if (*(char *)(lVar11 + 0x38) == '\x01') {
                uVar9 = FUN_010c14c0(*(undefined8 *)
                                      (local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8),
                                     *(undefined8 *)(lVar11 + 200),*(undefined8 *)(lVar11 + 0xd0),
                                     local_50[0] - *(double *)(lVar11 + 0xc0),
                                     ((double)(int)lVar8 / 2.0) / dVar2);
              }
              if (*(char *)((longlong)param_1 + 0x16c) == '\0') {
                if (*(uint *)((longlong)param_1 + 0xfc) < 2) {
                  (**(code **)(*(longlong *)param_1[0x11] + 0x18))
                            ((longlong *)param_1[0x11],&local_88,(int)param_1[0x20]);
                  iVar12 = FUN_00416db0(local_88,L"Source");
                  if (iVar12 == 0) {
                    *(bool *)((longlong)param_1 + 0x16c) = (double)param_1[0x26] <= local_50[0];
                  }
                  else {
                    if ((((*(char *)((longlong)param_1 + 0x99) == '\0') &&
                         (dVar3 = *(double *)(local_a8 + (longlong)(int)param_1[0x1f] * 8),
                         (double)param_1[0x1e] <= dVar3 && dVar3 != (double)param_1[0x1e])) &&
                        ((double)param_1[0x25] <= (double)param_1[0x1e])) ||
                       (((*(char *)((longlong)param_1 + 0x99) == '\x01' &&
                         (pdVar1 = (double *)(local_a8 + (longlong)(int)param_1[0x1f] * 8),
                         *pdVar1 <= (double)param_1[0x1e] && (double)param_1[0x1e] != *pdVar1)) &&
                        ((double)param_1[0x1e] <= (double)param_1[0x25])))) {
                      uVar5 = 1;
                    }
                    else {
                      uVar5 = 0;
                    }
                    *(undefined1 *)((longlong)param_1 + 0x16c) = uVar5;
                  }
                  if (*(char *)((longlong)param_1 + 0x16c) != '\0') {
                    param_1[0x2f] = (longlong)local_50[0];
                  }
                }
                else if (*(uint *)((longlong)param_1 + 0xfc) == 2) {
                  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
                  param_1[0x2f] = (longlong)local_50[0];
                }
              }
              if ((int)param_1[0x1f] != -1) {
                param_1[0x25] = *(longlong *)(local_a8 + (longlong)(int)param_1[0x1f] * 8);
              }
              *(double *)(lVar11 + 0xc0) = local_50[0];
              *(undefined8 *)(lVar11 + 200) =
                   *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8);
              *(undefined8 *)(lVar11 + 0xd0) = uVar9;
              *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8) = uVar9;
            }
            local_9c = local_9c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (*(char *)((longlong)param_1 + 0x16c) != '\0') {
          FUN_01cc4620(lVar10,local_50[0] - (double)param_1[0x2f]);
          iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
          local_9c = 0;
          if (-1 < iVar6 + -1) {
            do {
              uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c)
              ;
              lVar11 = FUN_004113f0(uVar9,&PTR_FUN_011051a8);
              if (*(longlong *)(lVar11 + 0x58) != 0) {
                FUN_01cc46b0(lVar10,*(undefined4 *)(lVar11 + 0xb8),
                             *(undefined8 *)(local_a8 + (longlong)*(int *)(lVar11 + 0xbc) * 8));
              }
              local_9c = local_9c + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x59) = 0;
        param_1[0x27] = (longlong)local_50[0];
      }
      lVar8 = FUN_01cc80a0(param_1[0xc]);
      param_1[0xd] = lVar8;
      lVar8 = FUN_01cc80a0(param_1[0x29]);
      param_1[0x2a] = lVar8;
    }
    if (*(char *)((longlong)param_1 + 0x16c) == '\0') {
      param_1[0x2e] = -0x39d6c1a6c65f7316;
    }
    else {
      param_1[0x2e] = (longlong)((double)param_1[0x27] - (double)param_1[0x2f]);
    }
    *(undefined1 *)((longlong)param_1 + 0x59) = 0;
    *(undefined1 *)((longlong)param_1 + 0x16d) = 0;
    if (local_a8 != 0) {
      FUN_004095f0(local_a8,(longlong)*(int *)((longlong)param_1 + 0x164));
    }
  }
  else {
    local_9d = 0;
  }
  FUN_00414560(&local_88,4);
  return local_9d;
}

