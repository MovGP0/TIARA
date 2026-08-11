/* Ghidra address: 006aaf30 */
/* Ghidra symbol: FUN_006aaf30 */


void FUN_006aaf30(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x178) = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
  }
  FUN_006aa860(param_1,param_2);
  return;
}

