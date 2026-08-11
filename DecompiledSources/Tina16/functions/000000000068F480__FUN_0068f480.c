/* Ghidra address: 0068f480 */
/* Ghidra symbol: FUN_0068f480 */


void FUN_0068f480(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x498) = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

