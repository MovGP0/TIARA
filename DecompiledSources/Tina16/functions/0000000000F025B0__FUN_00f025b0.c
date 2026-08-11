/* Ghidra address: 00f025b0 */
/* Ghidra symbol: FUN_00f025b0 */


void FUN_00f025b0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x510) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x510) + 0x534) = param_2;
  }
  return;
}

