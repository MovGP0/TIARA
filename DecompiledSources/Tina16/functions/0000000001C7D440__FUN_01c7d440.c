/* Ghidra address: 01c7d440 */
/* Ghidra symbol: FUN_01c7d440 */


void FUN_01c7d440(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x1468) + 0x4ac);
  if (-1 < iVar1) {
    lVar3 = FUN_01c7d9d0(param_1);
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x28))(*(longlong **)(lVar3 + 0x10));
    if (iVar1 < iVar2) {
      lVar3 = FUN_01c7d9d0(param_1);
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x98))
                (*(longlong **)(lVar3 + 0x10),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1468) + 0x4ac));
      FUN_01c7cf40(param_1);
    }
  }
  return;
}

