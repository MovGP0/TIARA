/* Ghidra address: 00985330 */
/* Ghidra symbol: FUN_00985330 */


void FUN_00985330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1[0xf] != param_2) {
    (**(code **)(*plVar1 + 0xa8))(plVar1);
  }
  return;
}

