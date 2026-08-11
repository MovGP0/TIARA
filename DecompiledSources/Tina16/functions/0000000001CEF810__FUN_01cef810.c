/* Ghidra address: 01cef810 */
/* Ghidra symbol: FUN_01cef810 */


void FUN_01cef810(longlong param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_34 = 1;
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_40 = 1;
  if (0 < iVar11) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_40 + -1);
      *(short *)(lVar5 + 0x18) = (short)local_34;
      local_34 = local_34 + 1;
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_40 + -1);
      FUN_01cc5c60(uVar6);
      lVar5 = FUN_01cc5cc0(uVar6);
      while (lVar5 != 0) {
        *(undefined2 *)(lVar5 + 0x30) = 0;
        lVar5 = FUN_01cc5cc0(uVar6);
      }
      local_40 = local_40 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_40 = 1;
  if (0 < iVar11) {
    do {
      iVar10 = local_40 + -1;
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar10);
      cVar3 = FUN_004113d0(uVar6,&PTR_FUN_01ac9770);
      if (cVar3 != '\0') {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar10);
        *(int *)(lVar5 + 0x40) = local_34;
        local_34 = local_34 + 1;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar10);
        lVar5 = FUN_004113f0(uVar6,&PTR_FUN_01ac9770);
        iVar10 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x28))(*(longlong **)(lVar5 + 0xd8));
        local_3c = 1;
        if (0 < iVar10) {
          do {
            lVar7 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),local_3c + -1);
            *(int *)(lVar7 + 0x40) = local_34;
            local_34 = local_34 + 1;
            uVar6 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),local_3c + -1);
            lVar7 = FUN_004113f0(uVar6,&DAT_01cdd500);
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x28))
                              (*(longlong **)(lVar7 + 0x70));
            local_38 = 1;
            if (0 < iVar4) {
              do {
                lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                                  (*(longlong **)(lVar7 + 0x70),local_38 + -1);
                *(int *)(lVar8 + 0x40) = local_34;
                local_34 = local_34 + 1;
                local_38 = local_38 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x28))
                              (*(longlong **)(lVar7 + 0x78));
            local_38 = 1;
            if (0 < iVar4) {
              do {
                iVar12 = local_38 + -1;
                lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                                  (*(longlong **)(lVar7 + 0x78),iVar12);
                *(int *)(lVar8 + 0x40) = local_34;
                lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                                  (*(longlong **)(lVar7 + 0x78),iVar12);
                iVar2 = local_34 + 1;
                if (*(longlong *)(lVar8 + 0x118) != 0) {
                  lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                                    (*(longlong **)(lVar7 + 0x78),iVar12);
                  *(int *)(*(longlong *)(lVar8 + 0x118) + 0x40) = local_34 + 1;
                  iVar2 = local_34 + 2;
                }
                local_34 = iVar2;
                local_38 = local_38 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x28))
                              (*(longlong **)(lVar7 + 0x80));
            local_38 = 1;
            if (0 < iVar4) {
              do {
                uVar9 = (ulonglong)*(byte *)(lVar7 + 0x58);
                sVar1 = (short)local_34;
                if (uVar9 < 3) {
                  if (uVar9 == 2) {
                    lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                    *(int *)(lVar8 + 0x40) = local_34;
                    lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                    *(short *)(*(longlong *)(lVar8 + 0x98) + 0x30) = sVar1 + 1;
                    local_34 = local_34 + 2;
                  }
                  else if (uVar9 == 0) {
LAB_01cefb5a:
                    lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                    *(int *)(lVar8 + 0x40) = local_34;
                    lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                    *(short *)(*(longlong *)(lVar8 + 0xe0) + 0x30) = sVar1 + 1;
                    local_34 = local_34 + 2;
                  }
                  else if (uVar9 == 1) goto LAB_01cefbff;
                }
                else if (uVar9 - 3 < 2) {
LAB_01cefbff:
                  lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                  *(int *)(lVar8 + 0x40) = local_34;
                  lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),local_38 + -1);
                  *(short *)(*(longlong *)(lVar8 + 0x98) + 0x30) = sVar1 + 1;
                  local_34 = local_34 + 2;
                }
                else if (uVar9 - 5 < 2) goto LAB_01cefb5a;
                local_38 = local_38 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x88) + 0x28))
                              (*(longlong **)(lVar7 + 0x88));
            local_38 = 1;
            if (0 < iVar4) {
              do {
                lVar8 = (**(code **)(**(longlong **)(lVar7 + 0x88) + 0x30))
                                  (*(longlong **)(lVar7 + 0x88),local_38 + -1);
                *(int *)(lVar8 + 0x40) = local_34;
                local_34 = local_34 + 1;
                local_38 = local_38 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_3c = local_3c + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        iVar10 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x28))(*(longlong **)(lVar5 + 0xe0));
        local_3c = 1;
        if (0 < iVar10) {
          do {
            lVar7 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x30))
                              (*(longlong **)(lVar5 + 0xe0),local_3c + -1);
            *(int *)(lVar7 + 0x40) = local_34;
            local_34 = local_34 + 1;
            local_3c = local_3c + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      local_40 = local_40 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}

