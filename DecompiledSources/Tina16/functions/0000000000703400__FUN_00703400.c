/* Ghidra address: 00703400 */
/* Ghidra symbol: FUN_00703400 */


void FUN_00703400(longlong param_1)

{
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(*(longlong *)(param_1 + 0x498) + 0x98);
  }
  else {
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(*(longlong *)(param_1 + 0x498) + 0x9c);
  }
  return;
}

