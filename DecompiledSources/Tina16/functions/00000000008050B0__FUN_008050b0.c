/* Ghidra address: 008050b0 */
/* Ghidra symbol: FUN_008050b0 */


void FUN_008050b0(longlong param_1)

{
  FUN_0065ebd0(param_1);
  if (((*(char *)(param_1 + 0x4d6) == '\x01') && (*(longlong *)(DAT_02012668 + 0xa8) != 0)) &&
     (*(longlong *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698) != 0)) {
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698),0x234,0,0);
  }
  return;
}

