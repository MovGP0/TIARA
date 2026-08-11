/* Ghidra address: 0040af40 */
/* Ghidra symbol: FUN_0040af40 */


double FUN_0040af40(double param_1)

{
  undefined4 uStackX_c;
  
  uStackX_c = (uint)((ulonglong)param_1 >> 0x20);
  if ((uStackX_c & 0x7ff00000) < 0x43300000) {
    if (0x3fe00000 < (uStackX_c & 0x7ff00000)) {
      param_1 = param_1 - (double)(longlong)param_1;
    }
  }
  else {
    param_1 = 0.0;
  }
  return param_1;
}

