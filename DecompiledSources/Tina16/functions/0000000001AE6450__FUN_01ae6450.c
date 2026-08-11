/* Ghidra address: 01ae6450 */
/* Ghidra symbol: FUN_01ae6450 */


void FUN_01ae6450(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_34;
  int local_30;
  int local_2c;
  
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))(*(longlong **)(param_2 + 0x20));
  local_2c = -1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  local_34 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),local_34 + -1);
      lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
      iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))(*(longlong **)(lVar5 + 0x80));
      local_30 = 1;
      if (0 < iVar3) {
        do {
          iVar7 = local_30 + -1;
          uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                            (*(longlong **)(lVar5 + 0x80),iVar7);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
          if (cVar1 == '\0') {
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                              (*(longlong **)(lVar5 + 0x80),iVar7);
            lVar6 = FUN_004113f0(uVar4,&PTR_FUN_01aaff18);
            *(int *)(lVar6 + 0x40) = local_2c;
            *(int *)(*(longlong *)(lVar6 + 0x60) + 0x40) = local_2c + -1;
            *(int *)(*(longlong *)(lVar6 + 0x70) + 0x40) = local_2c + -2;
            *(int *)(*(longlong *)(lVar6 + 0xe8) + 0x40) = local_2c + -3;
            *(int *)(*(longlong *)(lVar6 + 0xf0) + 0x40) = local_2c + -4;
            if ((*(char *)(lVar6 + 0x10) != '\0') &&
               (iVar7 = FUN_004aeba0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar6 + 0x88)),
               iVar7 == -1)) {
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar6 + 0x88));
            }
          }
          else {
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                              (*(longlong **)(lVar5 + 0x80),iVar7);
            lVar6 = FUN_004113f0(uVar4,&PTR_FUN_01aae560);
            *(int *)(lVar6 + 0x40) = local_2c;
            *(int *)(*(longlong *)(lVar6 + 0x70) + 0x40) = local_2c + -1;
            *(int *)(*(longlong *)(lVar6 + 0x78) + 0x40) = local_2c + -2;
            *(int *)(*(longlong *)(lVar6 + 0xf8) + 0x40) = local_2c + -3;
            *(int *)(*(longlong *)(lVar6 + 0x100) + 0x40) = local_2c + -4;
            if ((*(char *)(lVar6 + 0x10) != '\0') &&
               (iVar7 = FUN_004aeba0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar6 + 0xd0)),
               iVar7 == -1)) {
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar6 + 0xd0));
            }
          }
          local_2c = local_2c + -5;
          local_30 = local_30 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  local_34 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                        (*(longlong **)(param_1 + 0xe0),local_34 + -1);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01a5c280);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010ecd58);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(uVar4,&LAB_00f10748);
          if (cVar1 != '\0') {
            lVar5 = FUN_004113f0(uVar4,&LAB_00f10748);
            *(int *)(*(longlong *)(lVar5 + 0x78) + 0x40) = local_2c;
            local_2c = local_2c + -1;
          }
        }
        else {
          lVar5 = FUN_004113f0(uVar4,&PTR_FUN_010ecd58);
          *(int *)(*(longlong *)(lVar5 + 0x78) + 0x40) = local_2c;
          local_2c = local_2c + -1;
        }
      }
      else {
        lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01a5c280);
        *(int *)(*(longlong *)(lVar5 + 0x88) + 0x40) = local_2c;
        local_2c = local_2c + -1;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

