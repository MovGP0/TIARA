/* Ghidra address: 0150eee0 */
/* Ghidra symbol: FUN_0150eee0 */


void FUN_0150eee0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_1 + 0x20));
    }
    iVar3 = (*(int *)(lVar1 + 0x40) - *(int *)(lVar1 + 0x3c)) + 1;
    *(int *)(param_1 + 0x20) = iVar3;
    uVar4 = FUN_004095c0((longlong)iVar3);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    iVar3 = *(int *)(lVar1 + 0x3c);
    if (iVar3 <= *(int *)(lVar1 + 0x40)) {
      iVar6 = (*(int *)(lVar1 + 0x40) - iVar3) + 1;
      do {
        uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x30))
                          (*(longlong **)(lVar1 + 0x50),iVar3);
        lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
        uVar2 = FUN_01d3b630(*(undefined8 *)(lVar5 + 0x148),*(undefined8 *)(param_1 + 0x10),
                             *(undefined8 *)(param_1 + 0x18));
        *(undefined1 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar3 - *(int *)(lVar1 + 0x3c)))
             = uVar2;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

