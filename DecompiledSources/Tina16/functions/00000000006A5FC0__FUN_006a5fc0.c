/* Ghidra address: 006a5fc0 */
/* Ghidra symbol: FUN_006a5fc0 */


void FUN_006a5fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x40);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}

