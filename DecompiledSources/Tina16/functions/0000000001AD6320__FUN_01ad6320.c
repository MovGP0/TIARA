/* Ghidra address: 01ad6320 */
/* Ghidra symbol: FUN_01ad6320 */


void FUN_01ad6320(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 local_res18 [2];
  int local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_40[0] = 0;
  bVar1 = false;
  bVar2 = false;
  cVar3 = FUN_01acff30(param_1,local_40);
  if (cVar3 == '\x02') {
    if (param_4 != '\0') {
      FUN_0041ddd0(&local_50,&PTR_PTR_01acd580);
      iVar4 = FUN_0072d440(local_50,3,0x403,0);
      if (iVar4 != 6) {
        FUN_00410f20(local_40[0]);
        goto LAB_01ad6c10;
      }
    }
    iVar4 = *(int *)(local_40[0] + 0x10);
    iVar11 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar6 = FUN_004aeac0(local_40[0],iVar11);
        cVar3 = FUN_01ad1090(param_1,uVar6,&local_48);
        if (cVar3 == '\0') {
          FUN_00410f20(local_40[0]);
          goto LAB_01ad6c10;
        }
        if (*(char *)(local_48 + 0x58) == '\x05') {
          lVar7 = FUN_004aeac0(local_40[0],iVar11);
          *(undefined1 *)(lVar7 + 0x11) = 0;
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0xf0);
          if (lVar7 != 0) {
            lVar8 = FUN_004aeac0(local_40[0],iVar11);
            if (*(longlong *)(lVar7 + 0x58) == lVar8) {
              FUN_01ae2980(param_1,1);
              FUN_01ae4310(param_1);
            }
          }
          lVar7 = *(longlong *)(param_1 + 0xf8);
          if ((lVar7 != 0) &&
             (lVar8 = FUN_004aeac0(local_40[0],iVar11), *(longlong *)(lVar7 + 0x58) == lVar8)) {
            FUN_01ae2980(param_1,0);
            FUN_01ae4310(param_1);
          }
          uVar6 = FUN_004aeac0(local_40[0],iVar11);
          uVar5 = (**(code **)(**(longlong **)(local_48 + 0x80) + 0xc0))
                            (*(longlong **)(local_48 + 0x80),uVar6);
          (**(code **)(**(longlong **)(local_48 + 0x80) + 0x98))
                    (*(longlong **)(local_48 + 0x80),uVar5);
          if (*(byte *)(local_48 + 0x58) < 8) {
            bVar12 = ((int)CONCAT71((int7)((ulonglong)local_48 >> 8),1) <<
                      (*(byte *)(local_48 + 0x58) & 0x1f) & 0x61U) != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) {
            lVar7 = FUN_004aeac0(local_40[0],iVar11);
            iVar10 = *(int *)(*(longlong *)(lVar7 + 0x108) + 0x10);
            local_58 = 0;
            if (-1 < iVar10 + -1) {
              do {
                uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x108),local_58);
                cVar3 = FUN_004113d0(uVar6,&PTR_FUN_01abefa0);
                if (cVar3 == '\0') {
                  plVar9 = *(longlong **)(param_1 + 0xe0);
                  uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x108),local_58);
                  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9,uVar6);
                  (**(code **)(*plVar9 + 0x98))(plVar9,uVar5);
                  uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x108),local_58);
                  FUN_00410f20(uVar6);
                }
                else {
                  lVar8 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x108),local_58);
                  if (*(longlong *)(param_1 + 0xf0) == lVar8) {
                    uVar6 = *(undefined8 *)(param_1 + 0xf0);
                  }
                  else {
                    uVar6 = *(undefined8 *)(param_1 + 0xf8);
                  }
                  FUN_00410f20(uVar6);
                }
                local_58 = local_58 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            uVar6 = FUN_004aeac0(local_40[0],iVar11);
            FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar7 + 0xf8) + 0xf8),uVar6);
            FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar7 + 0xf8) + 0xf8));
            uVar6 = FUN_004aeac0(local_40[0],iVar11);
            FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0xf8),uVar6);
            FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0xf8));
            if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0xf8) + 0xf8) + 0x10) == 0) &&
               ((param_2 == '\0' ||
                (iVar10 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x28))
                                    (*(longlong **)(local_48 + 0x70)), 1 < iVar10)))) {
              bVar1 = true;
              iVar10 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0xc0))
                                 (*(longlong **)(local_48 + 0x70),*(undefined8 *)(lVar7 + 0xf8));
              if (iVar10 != -1) {
                uVar6 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                                  (*(longlong **)(local_48 + 0x70),iVar10);
                FUN_00410f20(uVar6);
                (**(code **)(**(longlong **)(local_48 + 0x70) + 0x98))
                          (*(longlong **)(local_48 + 0x70),iVar10);
              }
            }
            if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x100) + 0xf8) + 0x10) == 0) &&
               ((param_2 == '\0' ||
                (iVar10 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0x28))
                                    (*(longlong **)(local_48 + 0x78)), 1 < iVar10)))) {
              bVar1 = true;
              iVar10 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0xc0))
                                 (*(longlong **)(local_48 + 0x88),
                                  *(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0x100));
              if (iVar10 != -1) {
                uVar6 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x30))
                                  (*(longlong **)(local_48 + 0x88),iVar10);
                FUN_00410f20(uVar6);
                (**(code **)(**(longlong **)(local_48 + 0x88) + 0x98))
                          (*(longlong **)(local_48 + 0x88),iVar10);
              }
              iVar10 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0xc0))
                                 (*(longlong **)(local_48 + 0x78),*(undefined8 *)(lVar7 + 0x100));
              if (iVar10 != -1) {
                uVar6 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0x30))
                                  (*(longlong **)(local_48 + 0x78),iVar10);
                FUN_00410f20(uVar6);
                (**(code **)(**(longlong **)(local_48 + 0x78) + 0x98))
                          (*(longlong **)(local_48 + 0x78),iVar10);
              }
            }
            FUN_00410f20(lVar7);
          }
          else {
            lVar7 = FUN_004aeac0(local_40[0],iVar11);
            iVar10 = *(int *)(*(longlong *)(lVar7 + 0xf8) + 0x10);
            local_58 = 0;
            if (-1 < iVar10 + -1) {
              do {
                uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0xf8),local_58);
                cVar3 = FUN_004113d0(uVar6,&PTR_FUN_01abefa0);
                if (cVar3 == '\0') {
                  plVar9 = *(longlong **)(param_1 + 0xe0);
                  uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0xf8),local_58);
                  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9,uVar6);
                  (**(code **)(*plVar9 + 0x98))(plVar9,uVar5);
                  uVar6 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0xf8),local_58);
                  FUN_00410f20(uVar6);
                }
                else {
                  lVar8 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0xf8),local_58);
                  if (*(longlong *)(param_1 + 0xf0) == lVar8) {
                    uVar6 = *(undefined8 *)(param_1 + 0xf0);
                  }
                  else {
                    uVar6 = *(undefined8 *)(param_1 + 0xf8);
                  }
                  FUN_00410f20(uVar6);
                }
                local_58 = local_58 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            uVar6 = FUN_004aeac0(local_40[0],iVar11);
            FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar7 + 0xe8) + 0xf8),uVar6);
            FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar7 + 0xe8) + 0xf8));
            uVar6 = FUN_004aeac0(local_40[0],iVar11);
            FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + 0xf8),uVar6);
            FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + 0xf8));
            if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0xf8) + 0x10) == 0) &&
               ((param_2 == '\0' ||
                (iVar10 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x28))
                                    (*(longlong **)(local_48 + 0x70)), 1 < iVar10)))) {
              bVar1 = true;
              uVar5 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0xc0))
                                (*(longlong **)(local_48 + 0x70),*(undefined8 *)(lVar7 + 0xe8));
              uVar6 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                                (*(longlong **)(local_48 + 0x70),uVar5);
              FUN_00410f20(uVar6);
              (**(code **)(**(longlong **)(local_48 + 0x70) + 0x98))
                        (*(longlong **)(local_48 + 0x70),uVar5);
            }
            if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0xf0) + 0xf8) + 0x10) == 0) &&
               ((param_2 == '\0' ||
                (iVar10 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0x28))
                                    (*(longlong **)(local_48 + 0x78)), 1 < iVar10)))) {
              bVar1 = true;
              uVar5 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0xc0))
                                (*(longlong **)(local_48 + 0x88),
                                 *(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + 0x100));
              uVar6 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x30))
                                (*(longlong **)(local_48 + 0x88),uVar5);
              FUN_00410f20(uVar6);
              (**(code **)(**(longlong **)(local_48 + 0x88) + 0x98))
                        (*(longlong **)(local_48 + 0x88),uVar5);
              uVar5 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0xc0))
                                (*(longlong **)(local_48 + 0x78),*(undefined8 *)(lVar7 + 0xf0));
              uVar6 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0x30))
                                (*(longlong **)(local_48 + 0x78),uVar5);
              FUN_00410f20(uVar6);
              (**(code **)(**(longlong **)(local_48 + 0x78) + 0x98))
                        (*(longlong **)(local_48 + 0x78),uVar5);
            }
            FUN_00410f20(lVar7);
          }
          if ((param_2 == '\0') &&
             (iVar10 = (**(code **)(**(longlong **)(local_48 + 0x80) + 0x28))
                                 (*(longlong **)(local_48 + 0x80)), iVar10 == 0)) {
            bVar2 = true;
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xc0))
                              (*(longlong **)(param_1 + 0xd8),local_48);
            (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x98))
                      (*(longlong **)(param_1 + 0xd8),uVar5);
            FUN_00410f20(local_48);
          }
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_40[0]);
    if ((param_2 == '\0') &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                          (*(longlong **)(param_1 + 0xd8)), iVar4 == 0)) {
      plVar9 = (longlong *)FUN_004113f0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_01ae9d80);
      (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)PTR_DAT_02004030);
    }
    else {
      if (bVar1) {
        if (bVar2) {
          FUN_01acfc60(param_1);
        }
        else {
          FUN_01ce4cd0(local_48,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
        }
      }
      if (bVar2) {
        FUN_01aceb90(param_1,1);
      }
      else {
        FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),local_48);
        FUN_01ae5650(param_1);
      }
      FUN_01add6f0(param_1,local_res18[0]);
    }
  }
  else {
    FUN_00410f20(local_40[0]);
  }
LAB_01ad6c10:
  FUN_00414480(&local_50);
  FUN_00414480(local_res18);
  return;
}

