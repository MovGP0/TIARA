/* Ghidra address: 00807010 */
/* Ghidra symbol: FUN_00807010 */


void FUN_00807010(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x698),0x224,0,0);
  }
  return;
}

