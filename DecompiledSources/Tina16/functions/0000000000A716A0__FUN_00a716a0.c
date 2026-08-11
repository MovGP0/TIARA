/* Ghidra address: 00a716a0 */
/* Ghidra symbol: FUN_00a716a0 */


short * FUN_00a716a0(short *param_1,short param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      if (param_2 != 0) {
        param_1 = (short *)0x0;
      }
      return param_1;
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

