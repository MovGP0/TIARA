/* Ghidra address: 005ffd90 */
/* Ghidra symbol: FUN_005ffd90 */


void FUN_005ffd90(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfb;
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),PTR_DAT_02011fb0);
  }
  return;
}

