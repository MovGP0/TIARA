/* Ghidra address: 013bb8d0 */
/* Ghidra symbol: FUN_013bb8d0 */


void FUN_013bb8d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_013b2e70(*(longlong *)(param_1 + 0xc0));
  }
  return;
}

