/* Ghidra address: 004479c0 */
/* Ghidra symbol: FUN_004479c0 */


void FUN_004479c0(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x3e);
  while (sVar1 == 0x20) {
    FUN_004479a0(param_1);
    sVar1 = *(short *)(param_1 + 0x3e);
  }
  return;
}

