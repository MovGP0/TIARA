/* Ghidra address: 01156210 */
/* Ghidra symbol: FUN_01156210 */


void FUN_01156210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x10);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x80));
  return;
}

