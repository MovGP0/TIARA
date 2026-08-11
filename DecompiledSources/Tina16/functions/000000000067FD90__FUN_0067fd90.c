/* Ghidra address: 0067fd90 */
/* Ghidra symbol: FUN_0067fd90 */


void FUN_0067fd90(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x318) = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

