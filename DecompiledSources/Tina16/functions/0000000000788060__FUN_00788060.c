/* Ghidra address: 00788060 */
/* Ghidra symbol: FUN_00788060 */


void FUN_00788060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00788000(param_1);
  if (param_2 != lVar1) {
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x18),0xfffffffc,param_2);
  }
  return;
}

