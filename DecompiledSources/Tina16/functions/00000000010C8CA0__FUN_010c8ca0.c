/* Ghidra address: 010c8ca0 */
/* Ghidra symbol: FUN_010c8ca0 */


void FUN_010c8ca0(double *param_1,double *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  bool bVar5;
  double dVar6;
  undefined8 uVar7;
  double local_88 [6];
  double local_58 [7];
  
  pdVar4 = local_58;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_1;
    param_1 = param_1 + 1;
    pdVar4 = pdVar4 + 1;
  }
  pdVar4 = local_88;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_2;
    param_2 = param_2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  FUN_010c7a60(param_3,0,0);
  cVar1 = FUN_010c7d50(local_58,local_88);
  if (cVar1 == '\0') {
    *param_3 = 1;
    FUN_010c87e0(local_58);
    FUN_010c8550(local_58,local_88,param_3);
    FUN_010c8720(param_3);
  }
  else {
    *param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if (local_58[1] <= 0.0) {
      dVar6 = (double)FUN_0040af10(local_88[1]);
      if ((local_88[1] == dVar6) && (local_58[1] != 0.0)) {
        iVar2 = FUN_0040c840(local_88[1]);
        bVar5 = iVar2 < 0;
        if (bVar5) {
          iVar2 = -iVar2;
        }
        dVar6 = 1.0;
        if (0 < iVar2) {
          do {
            dVar6 = dVar6 * local_58[1];
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (bVar5) {
          dVar6 = 1.0 / dVar6;
        }
        *(double *)(param_3 + 8) = dVar6;
      }
    }
    else {
      dVar6 = (double)FUN_0040c2f0(local_58[1]);
      uVar7 = FUN_0040af80(dVar6 * local_88[1]);
      *(undefined8 *)(param_3 + 8) = uVar7;
    }
  }
  return;
}

