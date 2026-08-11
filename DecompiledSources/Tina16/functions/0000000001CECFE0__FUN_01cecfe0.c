/* Ghidra address: 01cecfe0 */
/* Ghidra symbol: FUN_01cecfe0 */


void FUN_01cecfe0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_30;
  int local_2c;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01ac9770);
  iVar2 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x28))(*(longlong **)(lVar5 + 0xd8));
  local_30 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                        (*(longlong **)(lVar5 + 0xd8),local_30 + -1);
      lVar6 = FUN_004113f0(uVar4,&DAT_01cdd500);
      iVar3 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x28))(*(longlong **)(lVar6 + 0x80));
      local_2c = 1;
      if (0 < iVar3) {
        do {
          iVar8 = local_2c + -1;
          uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                            (*(longlong **)(lVar6 + 0x80),iVar8);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
          if ((cVar1 == '\0') ||
             (lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                                (*(longlong **)(lVar6 + 0x80),iVar8),
             *(char *)(lVar7 + 0x10) == '\0')) {
            iVar8 = local_2c + -1;
            uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                              (*(longlong **)(lVar6 + 0x80),iVar8);
            cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aaff18);
            if ((cVar1 != '\0') &&
               (lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                                  (*(longlong **)(lVar6 + 0x80),iVar8),
               *(char *)(lVar7 + 0x10) != '\0')) {
              uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                                (*(longlong **)(lVar6 + 0x80),iVar8);
              lVar7 = FUN_004113f0(uVar4,&PTR_FUN_01aaff18);
              iVar8 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0x88));
              if (iVar8 == -1) {
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0x88));
              }
            }
          }
          else {
            uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                              (*(longlong **)(lVar6 + 0x80),iVar8);
            lVar7 = FUN_004113f0(uVar4,&PTR_FUN_01aae560);
            iVar8 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0xd0));
            if (iVar8 == -1) {
              FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar7 + 0xd0));
            }
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

