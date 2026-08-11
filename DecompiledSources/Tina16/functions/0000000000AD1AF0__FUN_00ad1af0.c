/* Ghidra address: 00ad1af0 */
/* Ghidra symbol: FUN_00ad1af0 */


void FUN_00ad1af0(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x30) + 0x28);
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x90) + 0x20) = uVar2;
  return;
}

