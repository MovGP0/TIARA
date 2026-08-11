/* Ghidra address: 006f27f0 */
/* Ghidra symbol: FUN_006f27f0 */


void FUN_006f27f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0xb0) + 0x500);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0xb0) + 0x5a1) = 0;
  return;
}

