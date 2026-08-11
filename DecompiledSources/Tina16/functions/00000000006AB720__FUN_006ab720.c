/* Ghidra address: 006ab720 */
/* Ghidra symbol: FUN_006ab720 */


void FUN_006ab720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x138);
  plVar1[0x2f] = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1);
  }
  return;
}

