/* Ghidra address: 01cee8b0 */
/* Ghidra symbol: FUN_01cee8b0 */


undefined8 FUN_01cee8b0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_3c = 1;
  if (0 < iVar2) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),local_3c + -1);
      cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),local_3c + -1);
        iVar3 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x28))(*(longlong **)(lVar6 + 0xd8));
        local_38 = 1;
        if (0 < iVar3) {
          do {
            lVar7 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                              (*(longlong **)(lVar6 + 0xd8),local_38 + -1);
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x28))
                              (*(longlong **)(lVar7 + 0x80));
            local_34 = 1;
            if (0 < iVar4) {
              do {
                uVar8 = (ulonglong)*(byte *)(lVar7 + 0x58);
                if (uVar8 < 3) {
                  if (uVar8 == 2) {
                    lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                    if (*(int *)(lVar9 + 0xa0) == param_2) {
                      lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                        (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                      return *(undefined8 *)(lVar6 + 0x78);
                    }
                  }
                  else if (uVar8 == 0) {
LAB_01ceea00:
                    lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                    if (*(int *)(lVar9 + 0xe8) == param_2) {
                      lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                        (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                      return *(undefined8 *)(lVar6 + 0x60);
                    }
                  }
                  else if (uVar8 == 1) goto LAB_01ceea84;
                }
                else if (uVar8 - 3 < 2) {
LAB_01ceea84:
                  lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                  if (*(int *)(lVar9 + 0xa0) == param_2) {
                    lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_34 + -1);
                    return *(undefined8 *)(lVar6 + 0x78);
                  }
                }
                else if (uVar8 - 5 < 2) goto LAB_01ceea00;
                local_34 = local_34 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_38 = local_38 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

