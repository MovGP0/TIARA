/* Ghidra address: 005ffd60 */
/* Ghidra symbol: FUN_005ffd60 */


void FUN_005ffd60(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfd;
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),PTR_DAT_02011fc0);
  }
  return;
}

