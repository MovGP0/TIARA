/* Ghidra address: 01781830 */
/* Ghidra symbol: FUN_01781830 */


void FUN_01781830(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (0 < iVar2) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0xa0))((longlong *)plVar1[0x94],iVar2,iVar2 + -1);
    (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + -1);
  }
  return;
}

