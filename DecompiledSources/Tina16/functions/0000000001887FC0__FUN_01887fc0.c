/* Ghidra address: 01887fc0 */
/* Ghidra symbol: FUN_01887fc0 */


void FUN_01887fc0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 8) == '\x04') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_01888930();
  }
  return;
}

