/* Ghidra address: 00c68960 */
/* Ghidra symbol: FUN_00c68960 */


void FUN_00c68960(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  if (iVar2 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x318))(*(longlong **)(param_1 + 0x748),2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    FUN_00c65ce0(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x4f0));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x318))(*(longlong **)(param_1 + 0x748),1);
  }
  return;
}

