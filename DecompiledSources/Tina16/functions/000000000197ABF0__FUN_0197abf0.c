/* Ghidra address: 0197abf0 */
/* Ghidra symbol: FUN_0197abf0 */


void FUN_0197abf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xc0))(plVar1);
      FUN_00452320(param_1 + 0xc0);
    }
    *(longlong *)(param_1 + 0xc0) = param_2;
  }
  return;
}

