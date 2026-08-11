/* Ghidra address: 01950440 */
/* Ghidra symbol: FUN_01950440 */


void FUN_01950440(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x90))(plVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28) = 1;
  iVar3 = 0;
  while( true ) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80));
    if (iVar1 <= iVar3) break;
    plVar2 = *(longlong **)(param_1 + 0x80);
    iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,(iVar1 - iVar3) + -1);
    if ((*(ushort *)((longlong)plVar2 + 0x34) & 0x20) == 0) {
      FUN_00410f20(plVar2);
    }
    else {
      (**(code **)(*plVar2 + 0x1b8))(plVar2);
      iVar3 = iVar3 + 1;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28) = 0;
  return;
}

