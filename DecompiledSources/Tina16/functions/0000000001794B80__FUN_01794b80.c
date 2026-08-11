/* Ghidra address: 01794b80 */
/* Ghidra symbol: FUN_01794b80 */


void FUN_01794b80(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0xd20) != 0) && (param_2 != 0)) {
    FUN_01794bc0(param_1);
  }
  *(longlong *)(param_1 + 0xd20) = param_2;
  return;
}

