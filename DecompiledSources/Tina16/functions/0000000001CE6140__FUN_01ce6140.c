/* Ghidra address: 01ce6140 */
/* Ghidra symbol: FUN_01ce6140 */


ulonglong FUN_01ce6140(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == 0) {
    lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_2 = lVar2;
  }
  uVar4 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar5 + -1);
      lVar2 = FUN_004113f0(uVar3,&DAT_01ccbf00);
      if (*(char *)(lVar2 + 0x10) != '\0') {
        uVar4 = 1;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar5 + -1);
        FUN_004ae7e0(*param_2,uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      iVar6 = iVar5 + -1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar6);
      lVar2 = FUN_004113f0(uVar3,&DAT_01ccbf00);
      if (*(char *)(lVar2 + 0x10) != '\0') {
        uVar4 = 1;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar6);
        FUN_004ae7e0(*param_2,uVar3);
      }
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar6);
      if ((*(longlong *)(lVar2 + 0x118) != 0) &&
         (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar6),
         *(char *)(*(longlong *)(lVar2 + 0x118) + 0x10) != '\0')) {
        uVar4 = 1;
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar6);
        FUN_004ae7e0(*param_2,*(undefined8 *)(lVar2 + 0x118));
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar1 + -1);
      if (*(char *)(lVar2 + 0x10) != '\0') {
        uVar4 = uVar4 | 2;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar1 + -1);
        FUN_004ae7e0(*param_2,uVar3);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar4;
}

