/* Ghidra address: 008e6ba0 */
/* Ghidra symbol: FUN_008e6ba0 */


void FUN_008e6ba0(longlong param_1,longlong *param_2)

{
  if (*param_2 != *(longlong *)(param_1 + 0x10)) {
    FUN_008e6810(param_1);
    *(longlong *)(param_1 + 0x10) = *param_2;
    *(longlong *)(param_1 + 0x18) = param_2[1];
  }
  return;
}

