/* Ghidra address: 01794d80 */
/* Ghidra symbol: FUN_01794d80 */


void FUN_01794d80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd20);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_2 + 8) == 0x7d6f)) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

