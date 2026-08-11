/* Ghidra address: 00cb3620 */
/* Ghidra symbol: FUN_00cb3620 */


void FUN_00cb3620(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  
  *(undefined2 *)(param_1 + 0x180) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1,param_2);
  }
  return;
}

