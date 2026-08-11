/* Ghidra address: 00e0fef0 */
/* Ghidra symbol: FUN_00e0fef0 */


void FUN_00e0fef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0x10))(*(longlong **)(param_1 + 0x818));
  lVar1 = FUN_00e0ffc0(param_2);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(lVar1,iVar3);
      uVar2 = FUN_00e0f7c0(uVar2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x818),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FUN_00e0dfe0(*(longlong *)(param_1 + 0x828),*(undefined8 *)(param_2 + 0x828));
  }
  return;
}

