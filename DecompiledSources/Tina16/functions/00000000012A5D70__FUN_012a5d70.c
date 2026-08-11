/* Ghidra address: 012a5d70 */
/* Ghidra symbol: FUN_012a5d70 */


void FUN_012a5d70(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint7 uVar15;
  longlong local_b0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_b0 = 0;
  *param_3 = 1;
  if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
    if (*(char *)((longlong)param_1 + 0x12e) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x12e) = 1;
      lVar9 = param_1[10];
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x408) != 0)) {
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x408) + 0x488);
        param_1[0x29] = *(longlong *)(lVar9 + 0xb0);
        param_1[0x2a] = *(longlong *)(lVar9 + 0xb8);
      }
      lVar9 = param_1[0x29];
      if (((lVar9 != 0) && (param_1[1] != 0)) &&
         (*(char *)(*(longlong *)(lVar9 + 8) + 0x434) == '\x03')) {
        if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
          FUN_01cc6020(lVar9);
          lVar9 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1[0x29]);
          param_1[0x23] = lVar9;
          if ((param_1[0x2a] != 0) && (0 < *(int *)(*(longlong *)(param_1[0x2a] + 8) + 0x44c))) {
            FUN_01cc6020(param_1[0x2a]);
            lVar9 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1[0x2a]);
            param_1[0x27] = lVar9;
          }
        }
        if (param_1[0x20] != 0) {
          FUN_00410f20(param_1[0x20]);
        }
        param_1[0x20] = param_1[0x12];
        if (*param_2 != 0) {
          FUN_01cc6030(*param_2);
        }
        if ((char)param_1[0xb] == '\0') {
          uVar14 = 0;
          lVar9 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,*(undefined1 *)((longlong)param_1 + 0xa3),0);
          *param_2 = lVar9;
          lVar9 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*param_2);
          param_1[0x12] = lVar9;
        }
        else {
          uVar14 = 0;
          lVar9 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,1,*(undefined1 *)((longlong)param_1 + 0xa3),0);
          *param_2 = lVar9;
          lVar9 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*param_2);
          param_1[0x12] = lVar9;
        }
        param_1[0x13] = -1;
        FUN_01cc6020(*param_2);
        local_98 = 0;
        local_94 = 0;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
        iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_9c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar10 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c);
            lVar9 = FUN_004113f0(uVar10,&PTR_FUN_01105a20);
            *(undefined8 *)(lVar9 + 0x58) = 0;
            *(undefined4 *)(lVar9 + 0xbc) = 0xffffffff;
            *(undefined4 *)(lVar9 + 0xb8) = 0xffffffff;
            local_9c = local_9c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        lVar9 = param_1[0x29];
        FUN_01cc5c60(lVar9);
        do {
          lVar11 = FUN_01cc5cc0(lVar9);
          if (lVar11 != 0) {
            if ((*(char *)(lVar11 + 0x3a) == '\x01') && (*(char *)(lVar11 + 0x18) != '\0')) {
              FUN_01cc0ae0(lVar11,local_70);
              cVar4 = (**(code **)(*param_1 + 0x40))(param_1,local_70[0],&local_5c);
              if (cVar4 != '\0') {
                uVar10 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                   ((longlong *)param_1[1],local_5c);
                lVar12 = FUN_004113f0(uVar10,&PTR_FUN_01105a20);
                if (*(longlong *)(lVar12 + 0x58) == 0) {
                  *(longlong *)(lVar12 + 0x58) = lVar11;
                  *(int *)(lVar12 + 0xbc) = local_98;
                  (**(code **)(*(longlong *)param_1[0x10] + 0x18))
                            ((longlong *)param_1[0x10],&local_78,(int)param_1[0x1d]);
                  iVar6 = FUN_00416db0(local_78,*(undefined8 *)(lVar12 + 8));
                  if (iVar6 == 0) {
                    *(int *)((longlong)param_1 + 0xe4) = local_98;
                  }
                  local_94 = local_94 + 1;
                }
              }
            }
            if (local_98 == 0) {
              param_1[0x22] = lVar11;
            }
            local_98 = local_98 + 1;
          }
        } while (lVar11 != 0);
        if ((param_1[0x2a] != 0) && (param_1[0x27] != 0)) {
          iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1]);
          uVar10 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar6 + -1);
          lVar11 = FUN_004113f0(uVar10,&PTR_FUN_01105a20);
          *(int *)(lVar11 + 0xbc) = local_98;
          local_94 = local_94 + 1;
          lVar9 = param_1[0x2a];
          FUN_01cc5c60(lVar9);
          do {
            lVar12 = FUN_01cc5cc0(lVar9);
            if (((lVar12 != 0) && (*(char *)(lVar12 + 0x3a) == '\x01')) &&
               (*(char *)(lVar12 + 0x18) != '\0')) {
              FUN_01cc0ae0(lVar12,&local_80);
              cVar4 = (**(code **)(*param_1 + 0x40))(param_1,local_80,&local_5c);
              if (((cVar4 != '\0') &&
                  (iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1]),
                  local_5c == iVar6 + -1)) && (*(longlong *)(lVar11 + 0x58) == 0)) {
                *(longlong *)(lVar11 + 0x58) = lVar12;
                break;
              }
            }
          } while (lVar12 != 0);
        }
        *param_3 = 1;
        iVar6 = 0;
        if (local_94 != 0) {
          uVar15 = (uint7)((ulonglong)uVar14 >> 8);
          if ((char)param_1[0xb] == '\0') {
            FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),local_94,0,2,(ulonglong)uVar15 << 8,0,0,1);
          }
          else {
            FUN_01cc31d0(*(undefined8 *)(*param_2 + 8),local_94,0,2,CONCAT71(uVar15,1),0,0,1);
          }
          FUN_01cc5c60(*param_2);
          iVar7 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
          local_9c = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar14 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                 ((longlong *)param_1[1],local_9c);
              plVar13 = (longlong *)FUN_004113f0(uVar14,&PTR_FUN_01105a20);
              if (*(int *)((longlong)plVar13 + 0xbc) != -1) {
                uVar14 = FUN_01cc5cc0(*param_2);
                (**(code **)(*plVar13 + 0x10))(plVar13,uVar14,*param_2);
                FUN_01cc09f0(plVar13[8],plVar13[1]);
                *(undefined1 *)(plVar13[8] + 0x18) = *(undefined1 *)((longlong)plVar13 + 0x11);
                *(int *)(plVar13 + 0x17) = iVar6;
                if ((int)plVar13[0x17] == 0) {
                  (**(code **)(*(longlong *)param_1[0x12] + 0x10))
                            ((longlong *)param_1[0x12],plVar13[8],0);
                  lVar9 = FUN_01cc80a0(param_1[0x12]);
                  param_1[0x13] = lVar9;
                }
                iVar6 = iVar6 + 1;
                if (((char)param_1[0xb] != '\0') && (local_9c == *(int *)((longlong)param_1 + 0x74))
                   ) {
                  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)plVar13 + 0xbc);
                }
              }
              local_9c = local_9c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        param_1[0x26] = 0;
        (**(code **)(*(longlong *)param_1[0x10] + 0x18))
                  ((longlong *)param_1[0x10],&local_88,(int)param_1[0x1d]);
        iVar6 = FUN_00416db0(local_88,L"Ext.-Func.Gen.");
        if (iVar6 == 0) {
          if (*(longlong *)(param_1[10] + 0x88 + (longlong)(int)param_1[3] * 8) == 0) {
            param_1[0x19] = 0;
          }
          else {
            uVar14 = FUN_004113f0(*(undefined8 *)
                                   (param_1[10] + 0x88 + (longlong)(int)param_1[3] * 8),
                                  &PTR_FUN_01133e90);
            lVar9 = FUN_01136fb0(uVar14,param_1[0xd],*(undefined1 *)((longlong)param_1 + 0xb9));
            param_1[0x19] = lVar9;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0x14,&local_38,1);
    if ((param_1[0x23] != 0) && (param_1[0x13] != -1)) {
      local_40 = 0.0;
      plVar13 = (longlong *)param_1[1];
      iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
      uVar14 = (**(code **)(*plVar13 + 0x30))(plVar13,iVar6 + -1);
      lVar9 = FUN_004113f0(uVar14,&PTR_FUN_01105a20);
      if ((*(char *)((longlong)param_1 + 0x59) == '\0') &&
         (*(char *)((longlong)param_1 + 0x12d) == '\0')) {
        if (param_1[0x22] != 0) {
          FUN_01cc80c0(param_1[0x23],param_1[0x24]);
        }
        if (param_1[0x27] != 0) {
          if ((char)param_1[0x1f] != '\0') {
            (**(code **)(*(longlong *)param_1[0x27] + 8))
                      ((longlong *)param_1[0x27],*(undefined8 *)(lVar9 + 0x58));
            *(undefined1 *)(param_1 + 0x1f) = 0;
          }
          FUN_01cc80c0(param_1[0x27],(longlong)(int)param_1[0x28]);
        }
      }
      else {
        if (param_1[0x22] != 0) {
          uVar8 = (**(code **)(*(longlong *)param_1[0x23] + 0x20))
                            ((longlong *)param_1[0x23],param_1[0x22],1);
          *(undefined4 *)(param_1 + 0x21) = uVar8;
        }
        if (param_1[0x27] != 0) {
          if (*(longlong *)(lVar9 + 0x58) == 0) {
            uVar14 = FUN_01cc5fa0(param_1[0x2a],0);
            (**(code **)(*(longlong *)param_1[0x27] + 0x10))((longlong *)param_1[0x27],uVar14,1);
          }
          else {
            (**(code **)(*(longlong *)param_1[0x27] + 0x10))
                      ((longlong *)param_1[0x27],*(undefined8 *)(lVar9 + 0x58),1);
          }
          *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 8;
        }
        FUN_013411f0(*(undefined8 *)(*(longlong *)(param_1[10] + 0x408) + 0x488));
        param_1[0x1a] = param_1[0xd];
        param_1[0x15] = (longlong)((double)param_1[0xd] + (double)param_1[0x16]);
        (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0x14,&local_48,1);
        param_1[0xc] = (longlong)(local_48 * 100000.0);
      }
      FUN_01cc80c0(param_1[0x12],param_1[0x13]);
      *(undefined1 *)(param_1 + 0x1f) = 0;
      local_b0 = FUN_004095c0((longlong)(int)param_1[0x21]);
      bVar3 = false;
      if ((param_1[0x22] != 0) &&
         (cVar4 = (**(code **)(*(longlong *)param_1[0x23] + 0x40))
                            ((longlong *)param_1[0x23],&local_40,local_b0), bVar3 = false,
         cVar4 != '\0')) {
        bVar3 = true;
      }
      plVar13 = (longlong *)param_1[0x27];
      if (plVar13 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_40,&local_30,0);
        if (cVar4 != '\0') {
          bVar3 = true;
        }
      }
      while (bVar3) {
        iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_9c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar14 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_9c);
            lVar9 = FUN_004113f0(uVar14,&PTR_FUN_01105a20);
            iVar7 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1]);
            if ((local_9c == iVar7 + -1) && (param_1[0x27] != 0)) {
              if (*(longlong *)(lVar9 + 0x58) == 0) {
                *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8) = 0;
              }
              else {
                *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8) = local_30;
              }
            }
            if (*(int *)(lVar9 + 0xbc) != -1) {
              uVar14 = *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8);
              if (*(char *)((longlong)param_1 + 0x59) != '\0') {
                if (*(int *)((longlong)param_1 + 0xe4) != -1) {
                  param_1[0x18] =
                       *(longlong *)(local_b0 + (longlong)*(int *)((longlong)param_1 + 0xe4) * 8);
                }
                *(undefined8 *)(lVar9 + 0xd0) =
                     *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8);
                *(undefined8 *)(lVar9 + 200) =
                     *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8);
                *(double *)(lVar9 + 0xc0) = local_40;
              }
              if (*(char *)(lVar9 + 0x38) == '\x02') {
                uVar14 = FUN_010c14c0(*(undefined8 *)
                                       (local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8),
                                      *(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0),
                                      local_40 - *(double *)(lVar9 + 0xc0),
                                      local_38 * 10.0 * (double)*(byte *)((longlong)param_1 + 0xa1))
                ;
              }
              else if (*(char *)(lVar9 + 0x38) == '\x04') {
                uVar14 = 0;
              }
              *(double *)(lVar9 + 0xc0) = local_40;
              *(undefined8 *)(lVar9 + 200) =
                   *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8);
              *(undefined8 *)(lVar9 + 0xd0) = uVar14;
              *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8) = uVar14;
              if (*(char *)((longlong)param_1 + 300) == '\0') {
                if (*(uint *)(param_1 + 0x1c) < 2) {
                  if (0.0 < local_40 - (double)param_1[0x15]) {
                    (**(code **)(*(longlong *)param_1[0x10] + 0x18))
                              ((longlong *)param_1[0x10],&local_90,(int)param_1[0x1d]);
                    iVar7 = FUN_00416db0(local_90,L"Ext.-Func.Gen.");
                    if (iVar7 == 0) {
                      *(bool *)((longlong)param_1 + 300) = (double)param_1[0x19] <= local_40;
                    }
                    else if (*(int *)(lVar9 + 0xbc) == *(int *)((longlong)param_1 + 0xe4)) {
                      if ((((*(char *)((longlong)param_1 + 0xb9) == '\0') &&
                           (dVar2 = *(double *)
                                     (local_b0 + (longlong)*(int *)((longlong)param_1 + 0xe4) * 8),
                           (double)param_1[0x1b] <= dVar2 && dVar2 != (double)param_1[0x1b])) &&
                          ((double)param_1[0x18] <= (double)param_1[0x1b])) ||
                         (((*(char *)((longlong)param_1 + 0xb9) == '\x01' &&
                           (pdVar1 = (double *)
                                     (local_b0 + (longlong)*(int *)((longlong)param_1 + 0xe4) * 8),
                           *pdVar1 <= (double)param_1[0x1b] && (double)param_1[0x1b] != *pdVar1)) &&
                          ((double)param_1[0x1b] <= (double)param_1[0x18])))) {
                        uVar5 = 1;
                      }
                      else {
                        uVar5 = 0;
                      }
                      *(undefined1 *)((longlong)param_1 + 300) = uVar5;
                    }
                    if (*(char *)((longlong)param_1 + 300) != '\0') {
                      param_1[0x15] = (longlong)local_40;
                      FUN_01cc6b70(*param_2,-((double)param_1[0x15] -
                                             ((double)param_1[0x1a] + (double)param_1[0x16])) +
                                            (double)param_1[0xc]);
                    }
                  }
                }
                else if (*(uint *)(param_1 + 0x1c) == 2) {
                  *(undefined1 *)((longlong)param_1 + 300) = 1;
                  param_1[0x15] = (longlong)(local_40 + (double)param_1[0x16]);
                }
              }
              iVar7 = *(int *)((longlong)param_1 + 0xe4);
              if ((iVar7 != -1) && (*(int *)(lVar9 + 0xbc) == iVar7)) {
                param_1[0x18] = *(longlong *)(local_b0 + (longlong)iVar7 * 8);
              }
            }
            local_9c = local_9c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_1[0xd] = (longlong)local_40;
        if (*(char *)((longlong)param_1 + 300) == '\0') {
          param_1[0x26] = -0x39d6c1a6c65f7316;
        }
        else {
          param_1[0x26] =
               (longlong)(((double)param_1[0xd] - (double)param_1[0x15]) + (double)param_1[0x16]);
          param_1[0xc] = 0;
        }
        (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0x14,&local_48,1);
        if ((double)param_1[0x26] <= (double)*(byte *)((longlong)param_1 + 0xa1) * 1.001 * local_48)
        {
          if ((char)param_1[0xb] == '\0') {
            FUN_01cc4620(*param_2,(local_40 - (double)param_1[0x15]) - (double)param_1[0xc]);
          }
          else {
            FUN_01cc47e0(*param_2,(local_40 - (double)param_1[0x15]) - (double)param_1[0xc]);
          }
          iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
          local_9c = 0;
          if (-1 < iVar6 + -1) {
            do {
              uVar14 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                 ((longlong *)param_1[1],local_9c);
              lVar9 = FUN_004113f0(uVar14,&PTR_FUN_01105a20);
              iVar7 = *(int *)(lVar9 + 0xb8);
              if (iVar7 != -1) {
                if ((char)param_1[0xb] == '\0') {
                  FUN_01cc46b0(*param_2,iVar7,
                               *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8));
                }
                else {
                  local_58 = *(undefined8 *)(local_b0 + (longlong)(int)param_1[0xe] * 8);
                  local_50 = *(undefined8 *)(local_b0 + (longlong)*(int *)(lVar9 + 0xbc) * 8);
                  FUN_01cc4e50(*param_2,iVar7,local_58,local_50);
                }
              }
              local_9c = local_9c + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x59) = 0;
        bVar3 = false;
        if ((param_1[0x22] != 0) &&
           (cVar4 = (**(code **)(*(longlong *)param_1[0x23] + 0x40))
                              ((longlong *)param_1[0x23],&local_40,local_b0), bVar3 = false,
           cVar4 != '\0')) {
          bVar3 = true;
        }
        plVar13 = (longlong *)param_1[0x27];
        if (plVar13 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_40,&local_30,0);
          if (cVar4 != '\0') {
            bVar3 = true;
          }
        }
      }
      lVar9 = FUN_01cc80a0(param_1[0x12]);
      param_1[0x13] = lVar9;
      if (param_1[0x22] != 0) {
        lVar9 = FUN_01cc80a0(param_1[0x23]);
        param_1[0x24] = lVar9;
      }
      if (param_1[0x27] != 0) {
        uVar8 = FUN_01cc80a0(param_1[0x27]);
        *(undefined4 *)(param_1 + 0x28) = uVar8;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x59) = 0;
    *(undefined1 *)((longlong)param_1 + 0x12d) = 0;
    if (local_b0 != 0) {
      FUN_004095f0(local_b0,(longlong)(int)param_1[0x21]);
    }
  }
  else {
    *param_3 = 0;
  }
  FUN_00414560(&local_90,5);
  return;
}

