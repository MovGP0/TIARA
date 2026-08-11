/* Ghidra address: 0064b200 */
/* Ghidra symbol: FUN_0064b200 */


void FUN_0064b200(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != param_2) {
    FUN_0064b1a0(param_1);
    *(longlong *)(param_1 + 0x98) = param_2;
  }
  return;
}

