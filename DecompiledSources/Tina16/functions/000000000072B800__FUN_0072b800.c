/* Ghidra address: 0072b800 */
/* Ghidra symbol: FUN_0072b800 */


void FUN_0072b800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (param_2 != plVar1) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

