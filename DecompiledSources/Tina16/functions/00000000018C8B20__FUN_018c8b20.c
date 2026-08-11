/* Ghidra address: 018c8b20 */
/* Ghidra symbol: FUN_018c8b20 */


void FUN_018c8b20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x40) + 0x90) =
       *(undefined8 *)(param_2 + 0x48);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x80);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x40));
  return;
}

