/* Ghidra address: 01d461d0 */
/* Ghidra symbol: FUN_01d461d0 */


void FUN_01d461d0(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_0042a560(0,0,0x1c,&DAT_03567bd0);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return;
}

