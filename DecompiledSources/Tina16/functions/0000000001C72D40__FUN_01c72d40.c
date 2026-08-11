/* Ghidra address: 01c72d40 */
/* Ghidra symbol: FUN_01c72d40 */


void FUN_01c72d40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x27a0) != 0) {
    iVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6c0));
    lVar1 = *(longlong *)(param_1 + 0x700);
    iVar2 = iVar2 + *(int *)(lVar1 + 0x90) * -2 + -4;
    iVar4 = (iVar2 - iVar2 % (*(int *)(lVar1 + 0x4b0) + *(int *)(lVar1 + 0x4d0))) + -1;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x27a0) + 0x28))
                      (*(longlong **)(param_1 + 0x27a0));
    *(undefined4 *)(param_1 + 0x1b4c) = uVar3;
    *(int *)(param_1 + 0x1b50) =
         iVar2 / (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4b0) +
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x4d0));
    FUN_0064d0e0(*(undefined8 *)(param_1 + 0x700),iVar4);
    if (*(int *)(param_1 + 0x1b50) < *(int *)(param_1 + 0x1b4c)) {
      FUN_008483e0(*(undefined8 *)(param_1 + 0x700),*(int *)(param_1 + 0x1b4c));
    }
    else {
      FUN_008483e0(*(undefined8 *)(param_1 + 0x700),*(int *)(param_1 + 0x1b50));
      FUN_00848960(*(undefined8 *)(param_1 + 0x700),0);
    }
    FUN_00848a70(*(undefined8 *)(param_1 + 0x700),1);
    FUN_0064cb30(*(longlong *)(param_1 + 0x708),
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x90) -
                 *(int *)(*(longlong *)(param_1 + 0x708) + 0x98));
    FUN_0064cb30(*(undefined8 *)(param_1 + 0x710),
                 *(int *)(*(longlong *)(param_1 + 0x700) + 0x90) + iVar4 + 5);
    FUN_0064e770(*(undefined8 *)(param_1 + 0x700));
    FUN_01c72c70(param_1);
  }
  return;
}

