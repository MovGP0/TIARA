/* Ghidra address: 016ad0e0 */
/* Ghidra symbol: FUN_016ad0e0 */


void FUN_016ad0e0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x8450);
  *piVar1 = *piVar1 + 1;
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) == 0x8000) {
    lVar8 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0x40);
    lVar9 = (**(code **)*puVar2)(puVar2);
    if (lVar8 < lVar9) {
      FUN_00409a70(*(longlong *)(param_1 + 0x50) + 0x450 + (longlong)*(int *)(param_1 + 0x3c),
                   *(longlong *)(param_1 + 0x50) + 0x450,
                   (longlong)
                   (*(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) - *(int *)(param_1 + 0x3c)));
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) - *(int *)(param_1 + 0x3c);
      FUN_0040d200(*(longlong *)(param_1 + 0x50) + 0x450 + (longlong)iVar5,
                   (longlong)(0x8000 - iVar5),0);
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0x40);
      iVar5 = (**(code **)*puVar2)(puVar2);
      iVar6 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
      uVar7 = FUN_016ad020(*(undefined8 *)(param_1 + 0x50),
                           0x8000 - (*(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) -
                                    *(int *)(param_1 + 0x3c)),iVar5 - iVar6);
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x8454) = uVar7;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x40);
      (**(code **)(*plVar3 + 0x18))
                (plVar3,*(longlong *)(param_1 + 0x50) + 0x450 +
                        (longlong)
                        (*(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) - *(int *)(param_1 + 0x3c)
                        ),uVar7);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x8450);
      *piVar1 = *piVar1 - *(int *)(param_1 + 0x3c);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x8454);
      *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_1 + 0x50) + 0x8450);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  if (**(char **)(param_1 + 0x60) == '\0') {
    uVar4 = FUN_016ad080(param_1);
    **(undefined1 **)(param_1 + 0x60) = uVar4;
  }
  return;
}

