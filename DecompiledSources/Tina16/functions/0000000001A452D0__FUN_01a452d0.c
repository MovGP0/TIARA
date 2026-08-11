/* Ghidra address: 01a452d0 */
/* Ghidra symbol: FUN_01a452d0 */


void FUN_01a452d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510) + 0x28))();
  iVar2 = iVar2 - *(int *)(param_1 + 0x92c);
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar3 + -1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

