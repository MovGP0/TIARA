/* Ghidra address: 014d0570 */
/* Ghidra symbol: FUN_014d0570 */


double FUN_014d0570(char param_1,double param_2,double param_3,double param_4,char param_5,
                   longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  ulonglong uVar2;
  double *pdVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double local_78 [11];
  
  param_4 = param_4 - param_3;
  if (1e-30 < param_4) {
    param_2 = param_2 / param_4;
  }
  if (param_1 == '\0') {
    bVar4 = 1;
    if (param_5 != '\0') {
      pdVar3 = local_78;
      cVar5 = param_5;
      do {
        uVar2 = (ulonglong)bVar4;
        dVar7 = (double)FUN_00dd1610(*(undefined8 *)(param_6 + -8 + uVar2 * 8),
                                     *(undefined8 *)(param_7 + -8 + uVar2 * 8),
                                     *param_8 + -8 + uVar2 * 8);
        *pdVar3 = dVar7;
        bVar4 = bVar4 + 1;
        pdVar3 = pdVar3 + 1;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
  }
  else if ((param_1 == '\x01') && (bVar4 = 1, param_5 != '\0')) {
    pdVar3 = local_78;
    cVar5 = param_5;
    do {
      uVar2 = (ulonglong)bVar4;
      dVar7 = (double)FUN_00dd1550(*(undefined8 *)(param_6 + -8 + uVar2 * 8),
                                   *(undefined8 *)(param_7 + -8 + uVar2 * 8),param_2,
                                   *param_8 + -8 + uVar2 * 8);
      *pdVar3 = dVar7;
      bVar4 = bVar4 + 1;
      pdVar3 = pdVar3 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  dVar7 = 1.0;
  if (param_5 != '\0') {
    pdVar3 = local_78;
    cVar5 = param_5;
    do {
      dVar7 = dVar7 * *pdVar3;
      pdVar3 = pdVar3 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  bVar4 = 1;
  for (cVar5 = param_5; cVar5 != '\0'; cVar5 = cVar5 + -1) {
    dVar8 = 1.0;
    bVar1 = 1;
    if (param_5 != '\0') {
      pdVar3 = local_78;
      cVar6 = param_5;
      do {
        if (bVar1 != bVar4) {
          dVar8 = dVar8 * *pdVar3;
        }
        bVar1 = bVar1 + 1;
        pdVar3 = pdVar3 + 1;
        cVar6 = cVar6 + -1;
      } while (cVar6 != '\0');
    }
    *(double *)(*param_8 + -8 + (ulonglong)bVar4 * 8) =
         -*(double *)(*param_8 + -8 + (ulonglong)bVar4 * 8) * dVar8 * param_4;
    bVar4 = bVar4 + 1;
  }
  return param_3 + dVar7 * param_4;
}

