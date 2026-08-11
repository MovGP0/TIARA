/* Ghidra address: 00f86070 */
/* Ghidra symbol: FUN_00f86070 */


void FUN_00f86070(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x28))(*(longlong **)(param_1 + 0x710));
  if (iVar2 < iVar3 + -1) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0xa0))
              (*(longlong **)(param_1 + 0x710),iVar2,iVar2 + 1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
    (**(code **)(*plVar1 + 0xa0))(plVar1,iVar2,iVar2 + 1);
  }
  return;
}

