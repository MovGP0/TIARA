/* Ghidra address: 018b8ae0 */
/* Ghidra symbol: FUN_018b8ae0 */


void FUN_018b8ae0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x210);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x550);
    (**(code **)(*plVar2 + 0x188))(plVar2);
  }
  return;
}

