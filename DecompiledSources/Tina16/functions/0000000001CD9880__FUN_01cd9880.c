/* Ghidra address: 01cd9880 */
/* Ghidra symbol: FUN_01cd9880 */


void FUN_01cd9880(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x58) = param_2;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x100) = param_1;
  }
  return;
}

