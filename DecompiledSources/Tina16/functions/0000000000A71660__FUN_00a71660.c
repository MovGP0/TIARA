/* Ghidra address: 00a71660 */
/* Ghidra symbol: FUN_00a71660 */


short * FUN_00a71660(short *param_1,short param_2)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_00a716a0(param_1,0);
  if (param_2 != 0) {
    do {
      if (psVar1 == param_1) {
        return (short *)0x0;
      }
      psVar1 = psVar1 + -1;
    } while (*psVar1 != param_2);
  }
  return psVar1;
}

