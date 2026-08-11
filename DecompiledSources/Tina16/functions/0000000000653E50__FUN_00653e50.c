/* Ghidra address: 00653e50 */
/* Ghidra symbol: FUN_00653e50 */


void FUN_00653e50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x40);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  *(undefined8 *)(param_2 + 0x60) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 0x310);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 0x310) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x40);
  *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x40) = *(undefined8 *)(param_2 + 0x60);
  return;
}

