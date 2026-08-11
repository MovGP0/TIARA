/* Ghidra address: 014448e0 */
/* Ghidra symbol: FUN_014448e0 */


void FUN_014448e0(double param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double local_48;
  double dStack_40;
  
  local_48 = *param_2;
  dStack_40 = param_2[1];
  pdVar1 = DAT_0210e4e0;
  if (DAT_0210e4e0 == (double *)0x0) {
    DAT_0210e4e0 = (double *)FUN_004095c0(0x20);
    if (DAT_0210e4e0 == (double *)0x0) {
      FUN_00ef4260(1,param_3);
    }
    else {
      *DAT_0210e4e0 = param_1;
      pdVar1 = DAT_0210e4e0 + 2;
      DAT_0210e4e0[1] = local_48;
      *pdVar1 = dStack_40;
      DAT_0210e4e0[3] = 0.0;
    }
  }
  else {
    do {
      pdVar3 = pdVar1;
      if ((double *)pdVar3[3] == (double *)0x0) break;
      pdVar1 = (double *)pdVar3[3];
    } while (*pdVar3 != param_1);
    if (*pdVar3 == param_1) {
      FUN_00c444b0(pdVar3 + 1,&local_48,pdVar3 + 1);
    }
    else {
      dVar2 = (double)FUN_004095c0(0x20);
      pdVar3[3] = dVar2;
      if (dVar2 == 0.0) {
        FUN_00ef4260(1,param_3);
      }
      else {
        pdVar1 = (double *)pdVar3[3];
        *pdVar1 = param_1;
        pdVar1[1] = local_48;
        pdVar1[2] = dStack_40;
        pdVar1[3] = 0.0;
      }
    }
  }
  return;
}

