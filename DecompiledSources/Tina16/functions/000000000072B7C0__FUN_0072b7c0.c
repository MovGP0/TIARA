/* Ghidra address: 0072b7c0 */
/* Ghidra symbol: FUN_0072b7c0 */


void FUN_0072b7c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (param_2 != plVar1) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

