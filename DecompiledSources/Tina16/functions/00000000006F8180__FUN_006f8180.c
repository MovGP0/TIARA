/* Ghidra address: 006f8180 */
/* Ghidra symbol: FUN_006f8180 */


void FUN_006f8180(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x500);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

