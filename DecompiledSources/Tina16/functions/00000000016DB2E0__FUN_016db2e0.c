/* Ghidra address: 016db2e0 */
/* Ghidra symbol: FUN_016db2e0 */


double FUN_016db2e0(undefined8 param_1,char param_2,double param_3,double *param_4,ushort param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_2 == '\x06') {
    dVar6 = 1.0 / param_4[1];
    dVar5 = param_4[2] * 0.017453292519943295;
    dVar2 = param_4[1];
    if (param_5 / 8 < 4) {
      if (dVar6 <= param_3) {
        dVar3 = (double)FUN_0040af10(param_3 / dVar6,(ulonglong)param_5 % 8);
        param_3 = param_3 - dVar3 * dVar6;
      }
      if (dVar6 <= param_3) {
        param_3 = param_3 - dVar6;
      }
      if (param_3 < 0.0) {
        param_3 = param_3 + dVar6;
      }
      dVar2 = (double)FUN_0040bcd0(dVar2 * 6.283185307179586 * param_3 + dVar5);
      dVar2 = *param_4 * dVar2;
    }
    else {
      dVar3 = param_4[3];
      dVar4 = param_3 - dVar3;
      if (dVar6 <= dVar4) {
        dVar1 = (double)FUN_0040af10(dVar4 / dVar6,(ulonglong)param_5 % 8);
        dVar4 = dVar4 - dVar1 * dVar6;
      }
      if (dVar6 <= dVar4) {
        dVar4 = dVar4 - dVar6;
      }
      if (dVar4 < 0.0) {
        dVar4 = dVar4 + dVar6;
      }
      if (dVar3 <= param_3) {
        dVar5 = (double)FUN_0040bcd0(dVar2 * 6.283185307179586 * dVar4 + dVar5);
        dVar2 = (double)FUN_0040af80(-(param_3 - dVar3) * param_4[4]);
        dVar2 = *param_4 * dVar5 * dVar2;
      }
      else {
        dVar2 = (double)FUN_0040bcd0(dVar5 + 6.283185307179586);
        dVar2 = *param_4 * dVar2;
      }
    }
  }
  else {
    dVar2 = 0.0;
  }
  return dVar2;
}

