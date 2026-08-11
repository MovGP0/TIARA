/* Ghidra address: 00711390 */
/* Ghidra symbol: FUN_00711390 */


short * FUN_00711390(short *param_1,short param_2)

{
  while( true ) {
    if (*param_1 == param_2) {
      return param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return (short *)0x0;
}

