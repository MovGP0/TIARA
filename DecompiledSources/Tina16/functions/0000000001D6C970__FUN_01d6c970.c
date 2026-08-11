/* Ghidra address: 01d6c970 */
/* Ghidra symbol: FUN_01d6c970 */


double FUN_01d6c970(char param_1,char param_2,longlong param_3,undefined1 *param_4,longlong *param_5
                   )

{
  byte bVar1;
  double *pdVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double local_e8 [20];
  double local_48;
  double local_40 [2];
  
  if (param_1 == '\0') {
    bVar3 = 1;
    if (param_2 != '\0') {
      pdVar2 = local_e8;
      cVar5 = param_2;
      do {
        dVar6 = (double)FUN_00dd1710(*(undefined8 *)(param_3 + -8 + (ulonglong)bVar3 * 8),
                                     *param_5 + -8 + (ulonglong)bVar3 * 8,*param_4);
        *pdVar2 = dVar6;
        bVar3 = bVar3 + 1;
        pdVar2 = pdVar2 + 1;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
  }
  else if (param_1 == '\x01') {
    bVar3 = 1;
    if (param_2 != '\0') {
      pdVar2 = local_e8;
      cVar5 = param_2;
      do {
        dVar6 = (double)FUN_00dd1640(*(undefined8 *)(param_3 + -8 + (ulonglong)bVar3 * 8),
                                     *param_5 + -8 + (ulonglong)bVar3 * 8,*param_4);
        *pdVar2 = dVar6;
        bVar3 = bVar3 + 1;
        pdVar2 = pdVar2 + 1;
        cVar5 = cVar5 + -1;
      } while (cVar5 != '\0');
    }
  }
  else if ((param_1 == '\x02') && (bVar3 = 1, param_2 != '\0')) {
    pdVar2 = local_e8;
    cVar5 = param_2;
    do {
      dVar6 = (double)FUN_00dd1770(*(undefined8 *)(param_3 + -8 + (ulonglong)bVar3 * 8),
                                   *param_5 + -8 + (ulonglong)bVar3 * 8,*param_4);
      *pdVar2 = dVar6;
      bVar3 = bVar3 + 1;
      pdVar2 = pdVar2 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  FUN_00dd0a10(*param_4,local_40,&local_48,0);
  local_40[0] = local_40[0] - local_48;
  dVar6 = 1.0;
  if (param_2 != '\0') {
    pdVar2 = local_e8;
    cVar5 = param_2;
    do {
      dVar6 = dVar6 * *pdVar2;
      pdVar2 = pdVar2 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  bVar3 = 1;
  for (cVar5 = param_2; cVar5 != '\0'; cVar5 = cVar5 + -1) {
    dVar7 = 1.0;
    bVar1 = 1;
    if (param_2 != '\0') {
      pdVar2 = local_e8;
      cVar4 = param_2;
      do {
        if (bVar1 != bVar3) {
          dVar7 = dVar7 * *pdVar2;
        }
        bVar1 = bVar1 + 1;
        pdVar2 = pdVar2 + 1;
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
    }
    *(double *)(*param_5 + -8 + (ulonglong)bVar3 * 8) =
         *(double *)(*param_5 + -8 + (ulonglong)bVar3 * 8) * dVar7 * local_40[0];
    bVar3 = bVar3 + 1;
  }
  return local_48 + dVar6 * local_40[0];
}

