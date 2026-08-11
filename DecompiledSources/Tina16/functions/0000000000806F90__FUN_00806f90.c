/* Ghidra address: 00806f90 */
/* Ghidra symbol: FUN_00806f90 */


void FUN_00806f90(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x698),0x227,0,0);
  }
  return;
}

