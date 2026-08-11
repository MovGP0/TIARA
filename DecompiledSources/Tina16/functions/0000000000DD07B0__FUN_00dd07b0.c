/* Ghidra address: 00dd07b0 */
/* Ghidra symbol: FUN_00dd07b0 */


double FUN_00dd07b0(byte param_1)

{
  longlong lVar1;
  double in_XMM0_Qa;
  
  if (1 < (byte)(param_1 - 1)) {
    if ((byte)(param_1 - 3) < 2) {
      lVar1 = FUN_0041f930();
      return (*(double *)(&DAT_0202daa0 + (ulonglong)param_1 * 2) / 5.0) *
             *(double *)(lVar1 + 0x280);
    }
    if (3 < (byte)(param_1 - 5)) {
      return in_XMM0_Qa;
    }
  }
  return *(double *)(&DAT_0202daa0 + (ulonglong)param_1 * 2);
}

