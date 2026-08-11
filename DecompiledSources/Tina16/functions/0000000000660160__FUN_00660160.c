/* Ghidra address: 00660160 */
/* Ghidra symbol: FUN_00660160 */


void FUN_00660160(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
    thunk_FUN_03d5b059(*(longlong *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}

