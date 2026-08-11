/* Ghidra address: 004429a0 */
/* Ghidra symbol: FUN_004429a0 */


short * FUN_004429a0(short *param_1,short param_2)

{
  short *psVar1;
  
  if (param_2 == 0) {
    psVar1 = (short *)FUN_00442440();
  }
  else {
    psVar1 = (short *)0x0;
    while( true ) {
      for (; *param_1 == param_2; param_1 = param_1 + 1) {
        psVar1 = param_1;
      }
      if (*param_1 == 0) break;
      param_1 = param_1 + 1;
    }
  }
  return psVar1;
}

