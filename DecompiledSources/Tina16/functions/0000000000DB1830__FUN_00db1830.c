/* Ghidra address: 00db1830 */
/* Ghidra symbol: FUN_00db1830 */


double FUN_00db1830(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   char param_5,longlong param_6)

{
  double in_XMM0_Qa;
  
  if (param_5 == '\0') {
    if (param_6 == 1) {
      in_XMM0_Qa = *(double *)(param_3 + 0x50);
    }
    else {
      in_XMM0_Qa = -*(double *)(param_3 + 0x50);
    }
  }
  else if (param_5 == '\x01') {
    in_XMM0_Qa = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),
                                      *(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 4),0);
    in_XMM0_Qa = *(double *)(param_3 + 0x50) * in_XMM0_Qa;
  }
  return in_XMM0_Qa;
}

