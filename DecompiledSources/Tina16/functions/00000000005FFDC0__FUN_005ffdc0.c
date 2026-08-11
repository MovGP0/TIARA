/* Ghidra address: 005ffdc0 */
/* Ghidra symbol: FUN_005ffdc0 */


void FUN_005ffdc0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf7;
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),DAT_02011fb8);
  }
  return;
}

