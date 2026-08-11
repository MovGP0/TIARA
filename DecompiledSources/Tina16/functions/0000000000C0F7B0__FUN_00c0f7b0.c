/* Ghidra address: 00c0f7b0 */
/* Ghidra symbol: FUN_00c0f7b0 */


void FUN_00c0f7b0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x648) != param_2) &&
     (*(longlong *)(param_1 + 0x648) = param_2, param_2 != 0)) {
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

