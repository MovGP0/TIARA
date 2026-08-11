/* Ghidra address: 00f91e80 */
/* Ghidra symbol: FUN_00f91e80 */


void FUN_00f91e80(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x6d8);
  *(undefined4 *)(plVar1 + 0x1a) = param_2;
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  return;
}

