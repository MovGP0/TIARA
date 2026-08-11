/* Ghidra address: 013729d0 */
/* Ghidra symbol: FUN_013729d0 */


double FUN_013729d0(longlong param_1,double *param_2,double *param_3)

{
  bool bVar1;
  double *pdVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double unaff_XMM6_Qa;
  double local_e8 [10];
  double local_98 [14];
  
  pdVar2 = local_98;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar2 = *param_2;
    param_2 = param_2 + 1;
    pdVar2 = pdVar2 + 1;
  }
  pdVar2 = local_98;
  pdVar4 = local_e8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  dVar7 = (double)FUN_01372020(*(undefined8 *)(param_1 + 0x380),*(undefined1 *)(param_1 + 0x388),
                               local_e8,*(undefined1 *)(param_1 + 0x398),
                               *(undefined8 *)(param_1 + 0x3a0),*(undefined8 *)(param_1 + 0x3a8));
  bVar1 = false;
  do {
    if (bVar1) {
      return dVar7;
    }
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x380) + 0xa0) + 0x468) +
                    0x10);
    if (0 < iVar6) {
      pdVar4 = local_98;
      pdVar5 = (double *)(param_1 + 0x2e0);
      pdVar2 = local_e8;
      do {
        *pdVar2 = *pdVar4 + *pdVar5;
        dVar8 = (double)FUN_01372020(*(undefined8 *)(param_1 + 0x380),
                                     *(undefined1 *)(param_1 + 0x388),local_e8,
                                     *(undefined1 *)(param_1 + 0x398),
                                     *(undefined8 *)(param_1 + 0x3a0),
                                     *(undefined8 *)(param_1 + 0x3a8));
        if (dVar8 < dVar7) {
          bVar1 = true;
          dVar7 = dVar8;
        }
        else {
          *pdVar2 = *pdVar4 - *pdVar5;
          dVar8 = (double)FUN_01372020(*(undefined8 *)(param_1 + 0x380),
                                       *(undefined1 *)(param_1 + 0x388),local_e8,
                                       *(undefined1 *)(param_1 + 0x398),
                                       *(undefined8 *)(param_1 + 0x3a0),
                                       *(undefined8 *)(param_1 + 0x3a8));
          if (dVar8 < dVar7) {
            bVar1 = true;
            dVar7 = dVar8;
          }
          else {
            *pdVar2 = *pdVar4;
          }
        }
        pdVar2 = pdVar2 + 1;
        pdVar5 = pdVar5 + 1;
        pdVar4 = pdVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (bVar1) {
      pdVar2 = local_e8;
      pdVar4 = param_3;
      for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar4 = *pdVar2;
        pdVar2 = pdVar2 + 1;
        pdVar4 = pdVar4 + 1;
      }
    }
    else {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x380) + 0xa0) + 0x468) +
                      0x10);
      if (0 < iVar6) {
        pdVar2 = (double *)(param_1 + 0x2e0);
        do {
          *pdVar2 = *pdVar2 * 0.5;
          pdVar2 = pdVar2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  } while (*(char *)(*(longlong *)(param_1 + 0x380) + 0x49c) != '\x01');
  return unaff_XMM6_Qa;
}

