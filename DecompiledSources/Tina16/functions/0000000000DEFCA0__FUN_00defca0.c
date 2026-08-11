/* Ghidra address: 00defca0 */
/* Ghidra symbol: FUN_00defca0 */


double FUN_00defca0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   char param_5,longlong param_6)

{
  double in_XMM0_Qa;
  double dVar1;
  
  if (param_5 == '\0') {
    in_XMM0_Qa = *(double *)(param_3 + 8);
    if (param_6 != 1) {
      in_XMM0_Qa = -in_XMM0_Qa;
    }
  }
  else if (param_5 == '\x01') {
    dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),1,2,0);
    in_XMM0_Qa = dVar1 * -*(double *)(param_3 + 8) -
                 *(double *)(param_3 + 0x10) * *(double *)(param_3 + 8) * *(double *)(param_3 + 8);
  }
  return in_XMM0_Qa;
}

