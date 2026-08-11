/* Ghidra address: 0129de90 */
/* Ghidra symbol: FUN_0129de90 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0129de90(undefined8 param_1,double param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,double *param_7,double *param_8,
                 double *param_9)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double local_970 [127];
  undefined1 local_578;
  double local_577;
  double local_56f;
  byte local_54e;
  undefined1 local_a0 [61];
  char local_63;
  
  pdVar4 = local_970 + 2;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_7;
    param_7 = param_7 + 1;
    pdVar4 = pdVar4 + 1;
  }
  FUN_004179d0(local_970 + 2,&DAT_01d0d0b8);
  *param_8 = 1.0 / (local_56f - local_577);
  dVar5 = (double)FUN_017c58f0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  if ((local_63 == '\x01') && (dVar6 = (double)FUN_0129ddb0(local_a0,dVar5), 0.0 < dVar6)) {
    dVar5 = dVar6;
  }
  dVar5 = (double)FUN_0129dc40(&local_578,dVar5);
  if (param_2 < dVar5) {
    iVar2 = FUN_00526350((dVar5 - param_2) / *param_8);
    dVar5 = dVar5 - (double)iVar2 * *param_8;
  }
  if (local_54e < 4) {
    if (local_54e == 3) {
      FUN_010bf680(local_970 + 1,local_970);
    }
    else if (local_54e == 0) {
      local_970[1] = 1.0;
      local_970[0] = 1.0;
    }
    else if (local_54e == 1) {
      FUN_010bf640(local_970 + 1,local_970);
    }
    else if (local_54e == 2) {
      FUN_010bf6a0(local_970 + 1,local_970);
    }
  }
  else if (local_54e == 4) {
    FUN_010bf660(local_970 + 1,local_970);
  }
  else if (local_54e == 5) {
    FUN_010bf620(local_970 + 1,local_970);
  }
  else if (local_54e == 6) {
    local_970[1] = 1.0;
  }
  bVar1 = *param_9 + local_970[0] * 1.001 * *param_8 < dVar5;
  if (bVar1) {
    *param_9 = dVar5;
  }
  FUN_00417740(local_970 + 2,&DAT_01d0d0b8);
  return bVar1;
}

