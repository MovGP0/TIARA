/* Ghidra address: 004d62f0 */
/* Ghidra symbol: FUN_004d62f0 */


void FUN_004d62f0(longlong param_1)

{
  if (param_1 != 0) {
    *(longlong *)(param_1 + 5) = DAT_02011668;
    DAT_02011668 = param_1;
  }
  return;
}

