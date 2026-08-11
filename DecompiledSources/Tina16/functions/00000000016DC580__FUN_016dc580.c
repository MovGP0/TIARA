/* Ghidra address: 016dc580 */
/* Ghidra symbol: FUN_016dc580 */


double FUN_016dc580(longlong param_1,char param_2,double param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    if ((*(byte *)(param_4 + 1) & 0x80) != 0) {
      dVar1 = (double)FUN_016d6580(*(undefined8 *)(param_1 + 0x1360),*(undefined4 *)(param_4 + 10));
      dVar2 = (double)FUN_0040af10(param_3 / dVar1);
      param_3 = param_3 - dVar2 * dVar1;
    }
    dVar1 = (double)FUN_016d6530(*(undefined8 *)(param_1 + 0x1360),*(undefined4 *)(param_4 + 10),
                                 param_3);
    dVar1 = dVar1 * *(double *)(param_4 + 0x16);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

