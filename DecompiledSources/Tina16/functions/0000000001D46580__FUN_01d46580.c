/* Ghidra address: 01d46580 */
/* Ghidra symbol: FUN_01d46580 */


void FUN_01d46580(longlong param_1)

{
  FUN_01d46550(param_1);
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_0042a560(0,0,0x1d,&DAT_03567bd0);
    *(undefined1 *)(param_1 + 0x60) = 0;
    DAT_03567bd0 = 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_0041b800(param_1 + 0x68);
  }
  if (DAT_03567ba8 != 0) {
    FUN_0041b800(&DAT_03567ba8);
  }
  return;
}

