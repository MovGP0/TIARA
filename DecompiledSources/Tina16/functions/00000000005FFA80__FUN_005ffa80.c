/* Ghidra address: 005ffa80 */
/* Ghidra symbol: FUN_005ffa80 */


void FUN_005ffa80(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     ((*(byte *)(param_1 + 0x68) & 0xf1) != *(byte *)(param_1 + 0x68))) {
    thunk_FUN_041a19a1(*(longlong *)(param_1 + 0x60),PTR_DAT_02011fb0);
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),DAT_02011fb8);
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),PTR_DAT_02011fc0);
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf1;
  }
  return;
}

