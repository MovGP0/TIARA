/* Ghidra address: 013d2900 */
/* Ghidra symbol: FUN_013d2900 */


void FUN_013d2900(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  if (iVar3 != 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
    iVar4 = iVar3 / 2;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                      (*(longlong **)(param_1 + 0x18),(longlong)iVar3 % 2 & 0xffffffff);
    if (iVar3 % 2 == 1) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = FUN_004230a0(param_1 + 0x40);
    uVar2 = (longlong)iVar3 / 2;
    iVar3 = FUN_004230c0(param_1 + 0x40,(longlong)iVar3 % 2 & 0xffffffff);
    iVar7 = iVar3 / iVar4;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                      (*(longlong **)(param_1 + 0x18),(longlong)iVar3 % (longlong)iVar4 & 0xffffffff
                      );
    local_54 = 1;
    if (0 < iVar3) {
      do {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                          (*(longlong **)(param_1 + 0x18),local_54 + -1);
        local_48 = FUN_004230a0(param_1 + 0x40);
        local_48 = local_48 / 2;
        if (local_54 % 2 == 1) {
          local_48 = 0;
        }
        local_44 = *(int *)(param_1 + 0x44) + ((local_54 + -1) / 2) * iVar7;
        FUN_00423090(&local_48,uVar2 & 0xffffffff);
        lVar6 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
        lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))(*(longlong **)(lVar6 + 0x70),0);
        plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x80) + 0x70);
        (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar6 + 0x98));
        FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x70),1);
        iVar4 = FUN_005fdfd0(*(undefined8 *)(lVar5 + 0x80),&DAT_013d2b2c);
        FUN_004230b0(&local_48,iVar7 - iVar4);
        FUN_01acf9e0(lVar5,&local_48);
        local_50 = FUN_00498310(local_48,local_44);
        FUN_01ace140(lVar5,*(undefined8 *)(lVar5 + 0x78),*(undefined8 *)(lVar5 + 0x80),&local_50);
        FUN_01acfa60(lVar5);
        *(int *)(lVar5 + 0x104) = (int)uVar2;
        *(int *)(lVar5 + 0x100) = iVar7;
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

