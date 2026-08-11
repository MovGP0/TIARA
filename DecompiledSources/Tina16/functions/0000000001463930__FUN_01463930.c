/* Ghidra address: 01463930 */
/* Ghidra symbol: FUN_01463930 */


void FUN_01463930(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),1);
  return;
}

