/* Ghidra address: 01cef320 */
/* Ghidra symbol: FUN_01cef320 */


void FUN_01cef320(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_3c = 1;
  if (0 < iVar9) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c + -1);
      *(undefined2 *)(lVar3 + 0x18) = 0;
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_3c + -1);
      FUN_01cc5c60(uVar4);
      lVar3 = FUN_01cc5cc0(uVar4);
      while (lVar3 != 0) {
        *(undefined2 *)(lVar3 + 0x30) = 0;
        lVar3 = FUN_01cc5cc0(uVar4);
      }
      local_3c = local_3c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_3c = 1;
  if (0 < iVar9) {
    do {
      iVar8 = local_3c + -1;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar8);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        *(undefined4 *)(lVar3 + 0x40) = 0;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        lVar3 = FUN_004113f0(uVar4,&PTR_FUN_01ac9770);
        iVar8 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x28))(*(longlong **)(lVar3 + 0xd8));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            lVar5 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))
                              (*(longlong **)(lVar3 + 0xd8),local_38 + -1);
            *(undefined4 *)(lVar5 + 0x40) = 0;
            uVar4 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))
                              (*(longlong **)(lVar3 + 0xd8),local_38 + -1);
            lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
            iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))
                              (*(longlong **)(lVar5 + 0x70));
            local_34 = 1;
            if (0 < iVar2) {
              do {
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                                  (*(longlong **)(lVar5 + 0x70),local_34 + -1);
                *(undefined4 *)(lVar6 + 0x40) = 0;
                local_34 = local_34 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))
                              (*(longlong **)(lVar5 + 0x78));
            local_34 = 1;
            if (0 < iVar2) {
              do {
                iVar10 = local_34 + -1;
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                  (*(longlong **)(lVar5 + 0x78),iVar10);
                *(undefined4 *)(lVar6 + 0x40) = 0;
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                  (*(longlong **)(lVar5 + 0x78),iVar10);
                if (*(longlong *)(lVar6 + 0x118) != 0) {
                  lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                    (*(longlong **)(lVar5 + 0x78),iVar10);
                  *(undefined4 *)(*(longlong *)(lVar6 + 0x118) + 0x40) = 0;
                }
                local_34 = local_34 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))
                              (*(longlong **)(lVar5 + 0x80));
            local_34 = 1;
            if (0 < iVar2) {
              do {
                uVar7 = (ulonglong)*(byte *)(lVar5 + 0x58);
                if (uVar7 < 3) {
                  if (uVar7 == 2) {
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    *(undefined4 *)(lVar6 + 0x40) = 0;
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    *(undefined2 *)(*(longlong *)(lVar6 + 0x98) + 0x30) = 0;
                  }
                  else if (uVar7 == 0) {
LAB_01cef631:
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    *(undefined4 *)(lVar6 + 0x40) = 0;
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    *(undefined2 *)(*(longlong *)(lVar6 + 0xe0) + 0x30) = 0;
                  }
                  else if (uVar7 == 1) goto LAB_01cef6b6;
                }
                else if (uVar7 - 3 < 2) {
LAB_01cef6b6:
                  lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                    (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                  *(undefined4 *)(lVar6 + 0x40) = 0;
                  lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                    (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                  *(undefined2 *)(*(longlong *)(lVar6 + 0x98) + 0x30) = 0;
                }
                else if (uVar7 - 5 < 2) goto LAB_01cef631;
                local_34 = local_34 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x28))
                              (*(longlong **)(lVar5 + 0x88));
            local_34 = 1;
            if (0 < iVar2) {
              do {
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x30))
                                  (*(longlong **)(lVar5 + 0x88),local_34 + -1);
                *(undefined4 *)(lVar6 + 0x40) = 0;
                local_34 = local_34 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar8 = (**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x28))(*(longlong **)(lVar3 + 0xe0));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            lVar5 = (**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x30))
                              (*(longlong **)(lVar3 + 0xe0),local_38 + -1);
            *(undefined4 *)(lVar5 + 0x40) = 0;
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      local_3c = local_3c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}

