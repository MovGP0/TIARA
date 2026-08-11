/* Ghidra address: 0149b8c0 */
/* Ghidra symbol: FUN_0149b8c0 */


void FUN_0149b8c0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8c0) + 0x4e8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L">>>  ");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8c0) + 0x4e8);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_0149b880(param_1,5,uVar2);
  return;
}

