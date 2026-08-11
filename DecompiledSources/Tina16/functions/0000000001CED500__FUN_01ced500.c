/* Ghidra address: 01ced500 */
/* Ghidra symbol: FUN_01ced500 */


void FUN_01ced500(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int local_3c;
  int local_38;
  int local_34;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  local_3c = 1;
  if (0 < iVar2) {
    do {
      iVar8 = local_3c + -1;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar8);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar8);
        iVar8 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x28))(*(longlong **)(lVar5 + 0xd8));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),local_38 + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
            lVar6 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),local_38 + -1);
            iVar3 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x28))
                              (*(longlong **)(lVar6 + 0x70));
            local_34 = 1;
            if (0 < iVar3) {
              do {
                uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))
                                  (*(longlong **)(lVar6 + 0x70),local_34 + -1);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
                local_34 = local_34 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x28))
                              (*(longlong **)(lVar6 + 0x78));
            local_34 = 1;
            if (0 < iVar3) {
              do {
                iVar9 = local_34 + -1;
                uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                                  (*(longlong **)(lVar6 + 0x78),iVar9);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
                lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                                  (*(longlong **)(lVar6 + 0x78),iVar9);
                if (*(longlong *)(lVar7 + 0x118) != 0) {
                  lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                                    (*(longlong **)(lVar6 + 0x78),iVar9);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar7 + 0x118));
                }
                local_34 = local_34 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x28))
                              (*(longlong **)(lVar6 + 0x80));
            local_34 = 1;
            if (0 < iVar3) {
              do {
                uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                                  (*(longlong **)(lVar6 + 0x80),local_34 + -1);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
                local_34 = local_34 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = (**(code **)(**(longlong **)(lVar6 + 0x88) + 0x28))
                              (*(longlong **)(lVar6 + 0x88));
            local_34 = 1;
            if (0 < iVar3) {
              do {
                uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x88) + 0x30))
                                  (*(longlong **)(lVar6 + 0x88),local_34 + -1);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
                local_34 = local_34 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        iVar8 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x28))(*(longlong **)(lVar5 + 0xe0));
        local_38 = 1;
        if (0 < iVar8) {
          do {
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x30))
                              (*(longlong **)(lVar5 + 0xe0),local_38 + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar4);
            local_38 = local_38 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if (*(longlong *)(lVar5 + 0xf0) != 0) {
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar5 + 0xf0));
        }
        if (*(longlong *)(lVar5 + 0xf8) != 0) {
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar5 + 0xf8));
        }
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

