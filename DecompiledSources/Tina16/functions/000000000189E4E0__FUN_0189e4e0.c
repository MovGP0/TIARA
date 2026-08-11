/* Ghidra address: 0189e4e0 */
/* Ghidra symbol: FUN_0189e4e0 */


void FUN_0189e4e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0xa0) + 0x28))();
  *(undefined4 *)(param_2 + 0x9c) = 0;
  if (*(int *)(param_2 + 0x9c) <= iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0xa0) + 0x30))
                        (*(undefined8 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0x9c));
      if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x108) != lVar2) {
        uVar3 = (**(code **)(**(longlong **)(param_2 + 0xa0) + 0x30))
                          (*(undefined8 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0x9c));
        FUN_00410f20(uVar3);
      }
      *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa0));
  return;
}

