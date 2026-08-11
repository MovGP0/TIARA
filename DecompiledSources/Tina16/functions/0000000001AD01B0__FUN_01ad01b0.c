/* Ghidra address: 01ad01b0 */
/* Ghidra symbol: FUN_01ad01b0 */


void FUN_01ad01b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  double dVar9;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  
  local_48 = *(undefined4 *)(param_1 + 0x14);
  local_40 = *(undefined4 *)(param_1 + 0x1c);
  local_54 = *(int *)(param_1 + 0x18);
  local_4c = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  local_58 = 1;
  if (0 < iVar1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),local_58 + -1);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
      local_4c = local_4c + iVar2;
      local_58 = local_58 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  local_58 = 1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x10d) == '\0') {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                          (*(longlong **)(param_1 + 0xd8));
        local_44 = FUN_0040c770((double)iVar2 +
                                (double)((local_58 + -1) * (*(int *)(param_1 + 0x20) - iVar2)) /
                                (double)iVar3);
        iVar2 = *(int *)(param_1 + 0x18);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                          (*(longlong **)(param_1 + 0xd8));
        local_3c = FUN_0040c770((double)iVar2 +
                                (double)(local_58 * (*(int *)(param_1 + 0x20) - iVar2)) /
                                (double)iVar3);
      }
      else {
        local_44 = local_54;
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),local_58 + -1);
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
        uVar8 = FUN_00b90650((double)iVar2 / (double)local_4c,0x3fe3333333333333);
        dVar9 = (double)FUN_00b90620(uVar8,0x3fd999999999999a);
        local_54 = FUN_0040c770((double)local_54 +
                                dVar9 * (double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)
                                                ));
        local_3c = local_54;
      }
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                         (*(longlong **)(param_1 + 0xd8),local_58 + -1);
      (**(code **)(*plVar5 + 0xb0))(plVar5,&local_48);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),local_58 + -1);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))();
      local_50 = 0;
      if (-1 < iVar2 + -1) {
        do {
          if ((*(char *)(param_1 + 0x10d) == '\0') ||
             (iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                                (*(longlong **)(param_1 + 0xd8)), iVar3 <= local_58)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          lVar6 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                            (*(longlong **)(lVar4 + 0x70),local_50);
          *(undefined1 *)(lVar6 + 0x108) = uVar7;
          local_50 = local_50 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_58 = local_58 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

