/* Ghidra address: 01781890 */
/* Ghidra symbol: FUN_01781890 */


void FUN_01781890(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  iVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
  if (iVar2 < iVar3 + -1) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (iVar2 != -1) {
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0xa0))((longlong *)plVar1[0x94],iVar2,iVar2 + 1);
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
    }
  }
  return;
}

