/* Ghidra address: 00af1200 */
/* Ghidra symbol: FUN_00af1200 */


void FUN_00af1200(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x740);
  (**(code **)(*plVar1 + 0x180))(plVar1);
  FUN_00aff1c0(*(undefined8 *)(param_2 + 0xa0));
  return;
}

