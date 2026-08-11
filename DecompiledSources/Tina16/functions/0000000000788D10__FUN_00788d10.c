/* Ghidra address: 00788d10 */
/* Ghidra symbol: FUN_00788d10 */


void FUN_00788d10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (param_2 != plVar1) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

