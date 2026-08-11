/* Ghidra address: 00a71610 */
/* Ghidra symbol: FUN_00a71610 */


short * FUN_00a71610(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  if (*param_2 != 0) {
    for (; psVar1 = param_1, psVar2 = param_2, *param_1 != 0; param_1 = param_1 + 1) {
      for (; (*psVar2 != 0 && (*psVar1 == *psVar2)); psVar1 = psVar1 + 1) {
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 == 0) {
        return param_1;
      }
    }
  }
  return (short *)0x0;
}

