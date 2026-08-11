/* Ghidra address: 01ceefd0 */
/* Ghidra symbol: FUN_01ceefd0 */


undefined4 FUN_01ceefd0(longlong param_1,int param_2)

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
  int iVar10;
  int local_5c;
  int local_58;
  int local_54;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_5c = 1;
  if (0 < iVar2) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),local_5c + -1);
      cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),local_5c + -1);
        iVar3 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x28))(*(longlong **)(lVar6 + 0xd8));
        local_58 = 1;
        if (0 < iVar3) {
          do {
            lVar7 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                              (*(longlong **)(lVar6 + 0xd8),local_58 + -1);
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x28))
                              (*(longlong **)(lVar7 + 0x80));
            local_54 = 1;
            if (0 < iVar4) {
              do {
                uVar8 = (ulonglong)*(byte *)(lVar7 + 0x58);
                if (uVar8 < 3) {
                  if (uVar8 == 2) {
                    lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),local_54 + -1);
                    if (*(int *)(lVar9 + 0xa0) == param_2) {
                      return 0;
                    }
                  }
                  else if (uVar8 == 0) {
LAB_01cef11b:
                    iVar10 = local_54 + -1;
                    lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                      (*(longlong **)(lVar7 + 0x80),iVar10);
                    if (*(int *)(lVar9 + 0xe8) == param_2) {
                      lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                        (*(longlong **)(lVar7 + 0x80),iVar10);
                      iVar2 = (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x28))
                                        (*(longlong **)(lVar6 + 0xb0));
                      if (0 < iVar2) {
                        lVar6 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                          (*(longlong **)(lVar7 + 0x80),iVar10);
                        lVar6 = (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x30))
                                          (*(longlong **)(lVar6 + 0xb0),0);
                        return *(undefined4 *)(lVar6 + 0x5c);
                      }
                      return 0;
                    }
                  }
                  else if (uVar8 == 1) goto LAB_01cef1c0;
                }
                else if (uVar8 - 3 < 2) {
LAB_01cef1c0:
                  lVar9 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),local_54 + -1);
                  if (*(int *)(lVar9 + 0xa0) == param_2) {
                    return 0;
                  }
                }
                else if (uVar8 - 5 < 2) goto LAB_01cef11b;
                local_54 = local_54 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_58 = local_58 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_5c = local_5c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

