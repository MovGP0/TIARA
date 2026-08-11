/* Ghidra address: 006dbd80 */
/* Ghidra symbol: FUN_006dbd80 */


void FUN_006dbd80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x490);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

