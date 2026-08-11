/* Ghidra address: 01cedea0 */
/* Ghidra symbol: FUN_01cedea0 */


longlong FUN_01cedea0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_3c = 1;
  if (0 < iVar2) {
    do {
      iVar8 = local_3c + -1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar8);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        if (*(int *)(lVar4 + 0x40) == param_2) {
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                            (*(longlong **)(param_1 + 0x10),iVar8);
          return lVar4;
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        iVar8 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x28))(*(longlong **)(lVar4 + 0xd8));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            iVar9 = local_38 + -1;
            lVar5 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x30))
                              (*(longlong **)(lVar4 + 0xd8),iVar9);
            if (*(int *)(lVar5 + 0x40) == param_2) {
              lVar4 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x30))
                                (*(longlong **)(lVar4 + 0xd8),iVar9);
              return lVar4;
            }
            lVar5 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x30))
                              (*(longlong **)(lVar4 + 0xd8),iVar9);
            iVar9 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))
                              (*(longlong **)(lVar5 + 0x70));
            local_34 = 1;
            if (0 < iVar9) {
              do {
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                                  (*(longlong **)(lVar5 + 0x70),local_34 + -1);
                if (*(int *)(lVar6 + 0x40) == param_2) {
                  lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                                    (*(longlong **)(lVar5 + 0x70),local_34 + -1);
                  return lVar4;
                }
                local_34 = local_34 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iVar9 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))
                              (*(longlong **)(lVar5 + 0x78));
            local_34 = 1;
            if (0 < iVar9) {
              do {
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                  (*(longlong **)(lVar5 + 0x78),local_34 + -1);
                if (*(int *)(lVar6 + 0x40) == param_2) {
                  lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                    (*(longlong **)(lVar5 + 0x78),local_34 + -1);
                  return lVar4;
                }
                iVar10 = local_34 + -1;
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                  (*(longlong **)(lVar5 + 0x78),iVar10);
                if ((*(longlong *)(lVar6 + 0x118) != 0) &&
                   (lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                      (*(longlong **)(lVar5 + 0x78),iVar10),
                   *(int *)(*(longlong *)(lVar6 + 0x118) + 0x40) == param_2)) {
                  lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                                    (*(longlong **)(lVar5 + 0x78),iVar10);
                  return *(longlong *)(lVar4 + 0x118);
                }
                local_34 = local_34 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iVar9 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))
                              (*(longlong **)(lVar5 + 0x80));
            local_34 = 1;
            if (0 < iVar9) {
              do {
                uVar7 = (ulonglong)*(byte *)(lVar5 + 0x58);
                if (uVar7 < 3) {
                  if (uVar7 == 2) {
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    if (*(int *)(lVar6 + 0x40) == param_2) {
                      lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                        (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                      return lVar4;
                    }
                  }
                  else if (uVar7 == 0) {
LAB_01cee1a4:
                    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    if (*(int *)(lVar6 + 0x40) == param_2) {
                      lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                        (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                      return lVar4;
                    }
                  }
                  else if (uVar7 == 1) goto LAB_01cee21a;
                }
                else if (uVar7 - 3 < 2) {
LAB_01cee21a:
                  lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                    (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                  if (*(int *)(lVar6 + 0x40) == param_2) {
                    lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                                      (*(longlong **)(lVar5 + 0x80),local_34 + -1);
                    return lVar4;
                  }
                }
                else if (uVar7 - 5 < 2) goto LAB_01cee1a4;
                local_34 = local_34 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iVar9 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x28))
                              (*(longlong **)(lVar5 + 0x88));
            local_34 = 1;
            if (0 < iVar9) {
              do {
                lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x30))
                                  (*(longlong **)(lVar5 + 0x88),local_34 + -1);
                if (*(int *)(lVar6 + 0x40) == param_2) {
                  lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x88) + 0x30))
                                    (*(longlong **)(lVar5 + 0x88),local_34 + -1);
                  return lVar4;
                }
                local_34 = local_34 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar8 = (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x28))(*(longlong **)(lVar4 + 0xe0));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            lVar5 = (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x30))
                              (*(longlong **)(lVar4 + 0xe0),local_38 + -1);
            if (*(int *)(lVar5 + 0x40) == param_2) {
              lVar4 = (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x30))
                                (*(longlong **)(lVar4 + 0xe0),local_38 + -1);
              return lVar4;
            }
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        lVar5 = *(longlong *)(lVar4 + 0xf0);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x40) == param_2)) {
          return lVar5;
        }
        lVar4 = *(longlong *)(lVar4 + 0xf8);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x40) == param_2)) {
          return lVar4;
        }
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

