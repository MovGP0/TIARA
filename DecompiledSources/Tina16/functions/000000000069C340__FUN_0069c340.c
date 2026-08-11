/* Ghidra address: 0069c340 */
/* Ghidra symbol: FUN_0069c340 */


short * FUN_0069c340(longlong *param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = (short *)*param_1;
  if (*param_1 != 0) {
    for (psVar1 = (short *)*param_1; psVar2 = psVar1, *psVar1 == 0x20; psVar1 = psVar1 + 1) {
    }
    for (; (*psVar2 != 0 && (*psVar2 != 0x2c)); psVar2 = psVar2 + 1) {
    }
    if (*psVar2 == 0x2c) {
      *psVar2 = 0;
      psVar2 = psVar2 + 1;
    }
    *param_1 = (longlong)psVar2;
  }
  return psVar1;
}

