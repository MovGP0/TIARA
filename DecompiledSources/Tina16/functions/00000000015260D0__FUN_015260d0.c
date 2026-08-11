/* Ghidra address: 015260d0 */
/* Ghidra symbol: FUN_015260d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015260d0(char param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  uVar1 = DAT_0210eda0;
  do {
    if (DAT_0210ed88 <= DAT_0210ed80) {
      DAT_0210ed68 = DAT_0210ed88;
      if (*PTR_DAT_02002d10 != '\0') {
        return;
      }
      DAT_0210ed90 = FUN_01aacd10(uVar1);
      dVar5 = (double)FUN_0040c850(DAT_0210ed68 - _DAT_0210edb0);
      if (1e-18 <= dVar5) {
        DAT_0210edb8 = 0;
      }
      else {
        DAT_0210edb8 = DAT_0210edb8 + 1;
      }
      _DAT_0210edb0 = DAT_0210ed68;
      if ((*(int *)(PTR_DAT_02004010 + 0x82e) != 2) && (DAT_0210edb8 == 0x32)) {
        FUN_016fd9b0(L"Analysis can\'t be performed: use delay by the components",0x1597);
        *PTR_DAT_02002d10 = 1;
        DAT_0210ed90 = '\x01';
      }
      FUN_01521f10(*(undefined8 *)PTR_DAT_020027c0,*(undefined8 *)PTR_DAT_020037b0,DAT_0210ed68,
                   DAT_0210eda0,DAT_0210ed98);
      DAT_0210ed88 = (double)FUN_01aab9a0(uVar1);
    }
    else {
      DAT_0210ed68 = DAT_0210ed80;
      FUN_01521af0(uVar1,DAT_0210ed80 + 1e-12,&DAT_0210ed80);
      cVar2 = FUN_01aab810(uVar1,DAT_0210ed68,&DAT_0210ec68);
      if (cVar2 != '\0') {
        DAT_0210ed88 = (double)FUN_01aab9a0(uVar1);
      }
      FUN_01521f10(*(undefined8 *)PTR_DAT_020027c0,*(undefined8 *)PTR_DAT_020037b0,DAT_0210ed68,
                   DAT_0210eda0,DAT_0210ed98);
    }
    if (DAT_0210ed68 <= DAT_0210ed78) {
      DAT_0210eda8 = DAT_0210ed68;
    }
    else {
      DAT_0210eda8 = DAT_0210ed78;
    }
    FUN_01af2990(*(undefined8 *)PTR_DAT_020052f8,DAT_0210eda8);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if ((param_1 == '\x01') && (DAT_0210ed70 < DAT_0210ed68)) {
      DAT_0210ed70 = DAT_0210ed70 + *(double *)(PTR_DAT_02004010 + 0x2c0);
      lVar3 = FUN_010e1630(5,0,0,0);
      if (lVar3 != 0) {
        uVar4 = FUN_0065b870(lVar3);
        thunk_FUN_041b2403(uVar4,0x534,0,0);
      }
    }
    cVar2 = FUN_01af2a10(*(undefined8 *)PTR_DAT_020052f8);
    if (cVar2 != '\0') {
      uVar4 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1);
      *(undefined8 *)PTR_DAT_02005168 = uVar4;
      FUN_013d39a0(*(undefined8 *)PTR_DAT_02005168);
      FUN_01af29f0(*(undefined8 *)PTR_DAT_020052f8,0);
    }
  } while ((DAT_0210ed90 == '\0') &&
          ((DAT_0210ed80 < DAT_0210ed78 || (DAT_0210ed88 < DAT_0210ed78))));
  if (param_1 == '\0') {
    FUN_01af2990(*(undefined8 *)PTR_DAT_020052f8,DAT_0210ed78);
  }
  return;
}

