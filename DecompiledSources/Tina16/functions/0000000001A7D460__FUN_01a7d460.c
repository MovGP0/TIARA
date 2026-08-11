/* Ghidra address: 01a7d460 */
/* Ghidra symbol: FUN_01a7d460 */


void FUN_01a7d460(longlong param_1,undefined8 param_2,ushort *param_3,ulonglong param_4)

{
  double dVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int local_88;
  int local_84;
  double local_78;
  double local_70;
  undefined1 local_41;
  double local_40 [2];
  
  uVar2 = *param_3;
  if (uVar2 < 0x28) {
    if (uVar2 == 0x27) {
      if ((((param_4 & 4) == 0) || ((param_4 & 1) != 0)) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf8) == 0)) {
        if ((((param_4 & 4) == 0) && ((param_4 & 1) == 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) != 0)) {
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) + 0x58) == 0) {
            dVar1 = *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) + 0x78);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
            lVar7 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
            lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                              (*(longlong **)(lVar7 + 0x70),0);
            local_78 = *(double *)(lVar7 + 0xc0);
            lVar7 = *(longlong *)(param_1 + 0x798);
            plVar3 = *(longlong **)(lVar7 + 0xd8);
            iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
            local_88 = 1;
            if (0 < iVar5) {
              do {
                plVar3 = *(longlong **)(lVar7 + 0xd8);
                uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_88 + -1);
                lVar9 = FUN_004113f0(uVar8,&DAT_01cdd500);
                iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x28))
                                  (*(longlong **)(lVar9 + 0x80));
                local_84 = 1;
                if (0 < iVar6) {
                  do {
                    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))
                                      (*(longlong **)(lVar9 + 0x80),local_84 + -1);
                    lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01aaff18);
                    uVar8 = *(undefined8 *)(lVar10 + 0x98);
                    cVar4 = FUN_004113d0(uVar8,&PTR_FUN_01cb46a8);
                    if (cVar4 == '\0') {
                      (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x10))
                                (*(longlong **)(lVar10 + 0x80),uVar8,0);
                      do {
                        cVar4 = (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x30))
                                          (*(longlong **)(lVar10 + 0x80),local_40,&local_41,0);
                        if (cVar4 == '\0') break;
                      } while (local_40[0] <= dVar1);
                      if ((dVar1 < local_40[0]) && (local_40[0] < local_78)) {
                        local_78 = local_40[0];
                      }
                    }
                    local_84 = local_84 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                local_88 = local_88 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,local_78);
          }
          else {
            FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,
                         *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) + 0x78) +
                         (*(double *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) + 0x58) + 0xf8)
                           + 0xc0) -
                         *(double *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) + 0x58) + 0xf8)
                          + 0xb8)) /
                         (double)(*(int *)(*(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0)
                                              + 0x58) + 0xf8) + 0xec) -
                                 *(int *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) +
                                             0x58) + 0xf8) + 0xe8)));
          }
        }
        else if (((param_4 & 4) == 0) && ((param_4 & 1) != 0)) {
          FUN_01a79f20(param_1,param_2);
        }
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x798);
        lVar9 = *(longlong *)(lVar7 + 0xf8);
        lVar10 = *(longlong *)(lVar9 + 0x58);
        if (lVar10 == 0) {
          dVar1 = *(double *)(lVar9 + 0x78);
          lVar7 = (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x30))
                            (*(longlong **)(lVar7 + 0xd8),0);
          lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                            (*(longlong **)(lVar7 + 0x70),0);
          local_78 = *(double *)(lVar7 + 0xc0);
          lVar7 = *(longlong *)(param_1 + 0x798);
          plVar3 = *(longlong **)(lVar7 + 0xd8);
          iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
          local_88 = 1;
          if (0 < iVar5) {
            do {
              plVar3 = *(longlong **)(lVar7 + 0xd8);
              uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_88 + -1);
              lVar9 = FUN_004113f0(uVar8,&DAT_01cdd500);
              iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x28))
                                (*(longlong **)(lVar9 + 0x80));
              local_84 = 1;
              if (0 < iVar6) {
                do {
                  uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))
                                    (*(longlong **)(lVar9 + 0x80),local_84 + -1);
                  lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01aaff18);
                  uVar8 = *(undefined8 *)(lVar10 + 0x98);
                  cVar4 = FUN_004113d0(uVar8,&PTR_FUN_01cb46a8);
                  if (cVar4 == '\0') {
                    (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x10))
                              (*(longlong **)(lVar10 + 0x80),uVar8,0);
                    do {
                      cVar4 = (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x30))
                                        (*(longlong **)(lVar10 + 0x80),local_40,&local_41,0);
                      if (cVar4 == '\0') break;
                    } while (local_40[0] <= dVar1);
                    if ((dVar1 < local_40[0]) && (local_40[0] < local_78)) {
                      local_78 = local_40[0];
                    }
                  }
                  local_84 = local_84 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              local_88 = local_88 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),0,local_78);
        }
        else {
          FUN_01ae24a0(lVar7,0,*(double *)(lVar9 + 0x78) +
                               (*(double *)(*(longlong *)(lVar10 + 0xf8) + 0xc0) -
                               *(double *)(*(longlong *)(lVar10 + 0xf8) + 0xb8)) /
                               (double)(*(int *)(*(longlong *)(lVar10 + 0xf8) + 0xec) -
                                       *(int *)(*(longlong *)(lVar10 + 0xf8) + 0xe8)));
        }
      }
    }
    else if (uVar2 == 0x1b) {
      FUN_01a7d1a0(param_1);
      *param_3 = 0;
    }
    else if (uVar2 == 0x25) {
      if ((((param_4 & 4) == 0) || ((param_4 & 1) != 0)) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf8) == 0)) {
        if ((((param_4 & 4) == 0) && ((param_4 & 1) == 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0) != 0)) {
          lVar7 = *(longlong *)(param_1 + 0x798);
          if (*(longlong *)(*(longlong *)(lVar7 + 0xf0) + 0x58) == 0) {
            dVar1 = *(double *)(*(longlong *)(lVar7 + 0xf0) + 0x78);
            lVar7 = (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x30))
                              (*(longlong **)(lVar7 + 0xd8),0);
            lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                              (*(longlong **)(lVar7 + 0x70),0);
            local_78 = *(double *)(lVar7 + 0xb8);
            lVar7 = *(longlong *)(param_1 + 0x798);
            plVar3 = *(longlong **)(lVar7 + 0xd8);
            iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
            local_88 = 1;
            if (0 < iVar5) {
              do {
                plVar3 = *(longlong **)(lVar7 + 0xd8);
                uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_88 + -1);
                lVar9 = FUN_004113f0(uVar8,&DAT_01cdd500);
                iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x28))
                                  (*(longlong **)(lVar9 + 0x80));
                local_84 = 1;
                if (0 < iVar6) {
                  do {
                    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))
                                      (*(longlong **)(lVar9 + 0x80),local_84 + -1);
                    lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01aaff18);
                    uVar8 = *(undefined8 *)(lVar10 + 0x98);
                    cVar4 = FUN_004113d0(uVar8,&PTR_FUN_01cb46a8);
                    if (cVar4 == '\0') {
                      (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x10))
                                (*(longlong **)(lVar10 + 0x80),uVar8,0);
                      while( true ) {
                        cVar4 = (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x30))
                                          (*(longlong **)(lVar10 + 0x80),local_40,&local_41,0);
                        if ((cVar4 == '\0') || (dVar1 <= local_40[0])) break;
                        local_70 = local_40[0];
                      }
                      if ((local_70 < dVar1) && (local_78 < local_70)) {
                        local_78 = local_70;
                      }
                    }
                    local_84 = local_84 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                local_88 = local_88 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,local_78);
          }
          else {
            lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xf0) + 0x58) + 0xf8);
            FUN_01ae24a0(lVar7,CONCAT71((int7)((ulonglong)lVar9 >> 8),1),
                         *(double *)(*(longlong *)(lVar7 + 0xf0) + 0x78) -
                         (*(double *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xf0) + 0x58) + 0xf8)
                           + 0xc0) -
                         *(double *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xf0) + 0x58) + 0xf8) +
                          0xb8)) / (double)(*(int *)(*(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)(lVar7 + 0xf0) + 0x58) + 0xf8)
                                                    + 0xec) - *(int *)(lVar9 + 0xe8)));
          }
        }
        else if (((param_4 & 4) == 0) && ((param_4 & 1) != 0)) {
          FUN_01a79e40(param_1,param_2);
        }
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x798);
        lVar9 = *(longlong *)(lVar7 + 0xf8);
        lVar10 = *(longlong *)(lVar9 + 0x58);
        if (lVar10 == 0) {
          dVar1 = *(double *)(lVar9 + 0x78);
          lVar7 = (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x30))
                            (*(longlong **)(lVar7 + 0xd8),0);
          lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                            (*(longlong **)(lVar7 + 0x70),0);
          local_78 = *(double *)(lVar7 + 0xb8);
          lVar7 = *(longlong *)(param_1 + 0x798);
          plVar3 = *(longlong **)(lVar7 + 0xd8);
          iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
          local_88 = 1;
          if (0 < iVar5) {
            do {
              plVar3 = *(longlong **)(lVar7 + 0xd8);
              uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_88 + -1);
              lVar9 = FUN_004113f0(uVar8,&DAT_01cdd500);
              iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x28))
                                (*(longlong **)(lVar9 + 0x80));
              local_84 = 1;
              if (0 < iVar6) {
                do {
                  uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))
                                    (*(longlong **)(lVar9 + 0x80),local_84 + -1);
                  lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01aaff18);
                  (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x10))
                            (*(longlong **)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0x98),0);
                  while ((cVar4 = (**(code **)(**(longlong **)(lVar10 + 0x80) + 0x30))
                                            (*(longlong **)(lVar10 + 0x80),local_40,&local_41,0),
                         cVar4 != '\0' && (local_40[0] < dVar1))) {
                    local_70 = local_40[0];
                  }
                  if ((local_70 < dVar1) && (local_78 < local_70)) {
                    local_78 = local_70;
                  }
                  local_84 = local_84 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              local_88 = local_88 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),0,local_78);
        }
        else {
          FUN_01ae24a0(lVar7,0,*(double *)(lVar9 + 0x78) -
                               (*(double *)(*(longlong *)(lVar10 + 0xf8) + 0xc0) -
                               *(double *)(*(longlong *)(lVar10 + 0xf8) + 0xb8)) /
                               (double)(*(int *)(*(longlong *)(lVar10 + 0xf8) + 0xec) -
                                       *(int *)(*(longlong *)(lVar10 + 0xf8) + 0xe8)));
        }
      }
    }
    else if (uVar2 == 0x26) {
      if (((param_4 & 4) == 0) || ((param_4 & 1) != 0)) {
        if (((param_4 & 4) == 0) && ((param_4 & 1) == 0)) {
          FUN_01ae85b0(*(undefined8 *)(param_1 + 0x798),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf0),0);
        }
        else if (((param_4 & 4) == 0) && ((param_4 & 1) != 0)) {
          FUN_01a7a010(param_1,param_2);
        }
      }
      else {
        FUN_01ae85b0(*(undefined8 *)(param_1 + 0x798),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf8),0);
      }
      FUN_01a77ef0(param_1,param_2);
    }
  }
  else if (uVar2 == 0x28) {
    if (((param_4 & 4) == 0) || ((param_4 & 1) != 0)) {
      if (((param_4 & 4) == 0) && ((param_4 & 1) == 0)) {
        FUN_01ae85b0(*(undefined8 *)(param_1 + 0x798),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf0),1);
      }
      else if (((param_4 & 4) == 0) && ((param_4 & 1) != 0)) {
        FUN_01a7a0b0(param_1,param_2);
      }
    }
    else {
      FUN_01ae85b0(*(undefined8 *)(param_1 + 0x798),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf8),1);
    }
    FUN_01a77ef0(param_1,param_2);
  }
  else if (uVar2 == 0x2e) {
    FUN_01ae3e90(*(undefined8 *)(param_1 + 0x798));
    FUN_01ad6320(*(undefined8 *)(param_1 + 0x798),0,0,1);
    *param_3 = 0;
  }
  else if (uVar2 == 0x74) {
    FUN_01a77ef0(param_1,param_2);
  }
  return;
}

