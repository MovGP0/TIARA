/* Ghidra address: 0072b7e0 */
/* Ghidra symbol: FUN_0072b7e0 */


void FUN_0072b7e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (param_2 != plVar1) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

