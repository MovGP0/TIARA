/* Ghidra address: 0040af10 */
/* Ghidra symbol: FUN_0040af10 */


double FUN_0040af10(double param_1)

{
  undefined4 uStackX_c;
  
  uStackX_c = (uint)((ulonglong)param_1 >> 0x20);
  if ((uStackX_c & 0x7ff00000) < 0x43300000) {
    if ((uStackX_c & 0x7ff00000) < 0x3fe00001) {
      param_1 = 0.0;
    }
    else {
      param_1 = (double)(longlong)param_1;
    }
  }
  return param_1;
}

