/* Ghidra address: 004429e0 */
/* Ghidra symbol: FUN_004429e0 */


short * FUN_004429e0(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    for (; *param_1 != 0; param_1 = param_1 + 1) {
      psVar1 = param_1;
      psVar2 = param_2;
      if (*param_1 == *param_2) {
        do {
          psVar2 = psVar2 + 1;
          psVar1 = psVar1 + 1;
          if (*psVar2 == 0) {
            return param_1;
          }
        } while ((*psVar1 == *psVar2) && (*psVar1 != 0));
      }
    }
  }
  return (short *)0x0;
}

