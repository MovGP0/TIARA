/* Ghidra address: 00f85eb0 */
/* Ghidra symbol: FUN_00f85eb0 */


void FUN_00f85eb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (-1 < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x98))(*(longlong **)(param_1 + 0x710),iVar2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
    (**(code **)(*plVar1 + 0x98))(plVar1,iVar2);
  }
  return;
}

