/* Ghidra address: 0072a200 */
/* Ghidra symbol: FUN_0072a200 */


void FUN_0072a200(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
  if (lVar1 != 0) {
    thunk_FUN_041b2403(lVar1,0x473,(longlong)*(int *)(param_1 + 0x2c),
                       *(undefined1 *)(param_1 + 0x40));
  }
  return;
}

