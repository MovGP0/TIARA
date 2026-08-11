/* Ghidra address: 00cb3510 */
/* Ghidra symbol: FUN_00cb3510 */


void FUN_00cb3510(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x191) = param_2;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_00cb9d70(*(longlong *)(param_1 + 0x128));
  }
  return;
}

