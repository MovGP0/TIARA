/* Ghidra address: 00deab80 */
/* Ghidra symbol: FUN_00deab80 */


double FUN_00deab80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   char param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double unaff_XMM6_Qa;
  
  dVar1 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 4) + 2,0);
  if (param_5 == '\0') {
    unaff_XMM6_Qa = dVar1;
    if (param_6 != 1) {
      unaff_XMM6_Qa = -dVar1;
    }
  }
  else if (param_5 == '\x01') {
    dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_1 + 0x118),1,2,0);
    unaff_XMM6_Qa = dVar2 * dVar1;
  }
  return unaff_XMM6_Qa;
}

