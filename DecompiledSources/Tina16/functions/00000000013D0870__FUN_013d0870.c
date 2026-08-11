/* Ghidra address: 013d0870 */
/* Ghidra symbol: FUN_013d0870 */


void FUN_013d0870(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4e8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L">>>  ");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4e8);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_013d0830(param_1,5,uVar2);
  return;
}

