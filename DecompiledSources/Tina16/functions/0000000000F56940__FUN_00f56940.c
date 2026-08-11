/* Ghidra address: 00f56940 */
/* Ghidra symbol: FUN_00f56940 */


double FUN_00f56940(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   char param_5,longlong param_6)

{
  double dVar1;
  double unaff_XMM6_Qa;
  
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),1,2,0);
  if (param_5 == '\0') {
    unaff_XMM6_Qa = dVar1 * *(double *)(param_3 + 0x28);
    if (param_6 != 1) {
      if (param_6 == 2) {
        unaff_XMM6_Qa = -unaff_XMM6_Qa;
      }
      else {
        unaff_XMM6_Qa = 0.0;
      }
    }
  }
  else if (param_5 == '\x01') {
    dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),1,2,0);
    unaff_XMM6_Qa = dVar1 * dVar1 * *(double *)(param_3 + 0x28);
  }
  return unaff_XMM6_Qa;
}

