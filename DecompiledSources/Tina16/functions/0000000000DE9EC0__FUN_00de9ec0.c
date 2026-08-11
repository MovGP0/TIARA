/* Ghidra address: 00de9ec0 */
/* Ghidra symbol: FUN_00de9ec0 */


double FUN_00de9ec0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   char param_5,longlong param_6)

{
  double dVar1;
  double unaff_XMM6_Qa;
  
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),1,2,0);
  if (param_5 == '\0') {
    if (*(double *)(param_3 + 8) == 0.0) {
      unaff_XMM6_Qa = 0.0;
    }
    else {
      unaff_XMM6_Qa = dVar1 / *(double *)(param_3 + 8);
      if (param_6 != 1) {
        unaff_XMM6_Qa = -unaff_XMM6_Qa;
      }
    }
  }
  else if (param_5 == '\x01') {
    if (*(double *)(param_3 + 8) == 0.0) {
      unaff_XMM6_Qa = 0.0;
    }
    else {
      unaff_XMM6_Qa = (dVar1 * dVar1) / *(double *)(param_3 + 8);
    }
  }
  return unaff_XMM6_Qa;
}

