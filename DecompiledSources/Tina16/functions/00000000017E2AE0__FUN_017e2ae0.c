/* Ghidra address: 017e2ae0 */
/* Ghidra symbol: FUN_017e2ae0 */


void FUN_017e2ae0(undefined8 param_1,double *param_2,double *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_a8 [4];
  undefined8 local_88;
  double local_78 [4];
  double local_58;
  
  pdVar3 = local_78;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_2;
    param_2 = param_2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar3 = local_a8;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_3;
    param_3 = param_3 + 1;
    pdVar3 = pdVar3 + 1;
  }
  cVar1 = FUN_017e28a0(param_1,param_4);
  if ((cVar1 != '\0') || (cVar1 = FUN_017e28c0(param_1,param_4), cVar1 != '\0')) {
    cVar1 = FUN_010c7d50(local_78,local_a8);
    if ((cVar1 == '\0') && ((param_4 != 0x113 && (param_4 != 0x118)))) {
      FUN_017e2900(param_1,0x102);
      return;
    }
  }
  if (param_4 == 0x110) {
    cVar1 = FUN_010c7d50(local_78,local_a8);
    if ((cVar1 != '\0') &&
       ((dVar4 = (double)FUN_0040c850(local_78[1]), 1e+300 < dVar4 ||
        (dVar4 = (double)FUN_0040c850(local_a8[1]), 1e+300 < dVar4)))) {
      FUN_017e2900(param_1,0x100);
    }
  }
  else if (param_4 == 0x111) {
    cVar1 = FUN_010c7d50(local_78,local_a8);
    if (cVar1 == '\0') {
      if (local_58 == 0.0) {
        FUN_017e2900(param_1,0x101);
      }
      else if (local_58 != 0.0) {
        FUN_0040c850(local_58);
        dVar4 = (double)FUN_0040c2f0();
        FUN_0040c850(local_88);
        dVar5 = (double)FUN_0040c2f0();
        dVar6 = (double)FUN_0040c2f0(0x4024000000000000);
        if (dVar6 * 1e+300 < dVar4 - dVar5) {
          FUN_017e2900(param_1,0x100);
        }
      }
    }
    else if (local_a8[1] == 0.0) {
      FUN_017e2900(param_1,0x101);
    }
    else if (local_78[1] != 0.0) {
      FUN_0040c850(local_78[1]);
      dVar4 = (double)FUN_0040c2f0();
      FUN_0040c850(local_a8[1]);
      dVar5 = (double)FUN_0040c2f0();
      dVar6 = (double)FUN_0040c2f0(0x4024000000000000);
      if (dVar6 * 1e+300 < dVar4 - dVar5) {
        FUN_017e2900(param_1,0x100);
      }
    }
  }
  return;
}

