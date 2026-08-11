/* Ghidra address: 00fb7b30 */
/* Ghidra symbol: FUN_00fb7b30 */


void FUN_00fb7b30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))(*(longlong **)(param_1 + 2000));
  if (iVar2 == 0) {
    plVar1 = *(longlong **)(param_1 + 2000);
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x768),0);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))(*(longlong **)(param_1 + 2000));
  iVar2 = *(int *)(param_1 + 0x840 + (longlong)iVar2 * 4);
  *(int *)(param_1 + 0x820) = iVar2;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x778),(double)iVar2);
  return;
}

