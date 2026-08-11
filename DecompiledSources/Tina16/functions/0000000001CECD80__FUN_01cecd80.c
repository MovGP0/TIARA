/* Ghidra address: 01cecd80 */
/* Ghidra symbol: FUN_01cecd80 */


void FUN_01cecd80(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int local_3c;
  int local_38;
  int local_34;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_3c = 1;
  if (0 < iVar2) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),local_3c + -1);
      cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),local_3c + -1);
        lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01ac9770);
        iVar3 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x28))(*(longlong **)(lVar6 + 0xd8));
        local_38 = 1;
        if (0 < iVar3) {
          do {
            uVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                              (*(longlong **)(lVar6 + 0xd8),local_38 + -1);
            lVar7 = FUN_004113f0(uVar5,&DAT_01cdd500);
            iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x28))
                              (*(longlong **)(lVar7 + 0x80));
            local_34 = 1;
            if (0 < iVar4) {
              do {
                iVar9 = local_34 + -1;
                uVar5 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                  (*(longlong **)(lVar7 + 0x80),iVar9);
                cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
                if (cVar1 == '\0') {
                  uVar5 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),iVar9);
                  lVar8 = FUN_004113f0(uVar5,&PTR_FUN_01aaff18);
                  iVar9 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0x88)
                                      );
                  if (iVar9 == -1) {
                    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0x88));
                  }
                }
                else {
                  uVar5 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x30))
                                    (*(longlong **)(lVar7 + 0x80),iVar9);
                  lVar8 = FUN_004113f0(uVar5,&PTR_FUN_01aae560);
                  iVar9 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0xd0)
                                      );
                  if (iVar9 == -1) {
                    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0xd0));
                  }
                }
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
  return;
}

