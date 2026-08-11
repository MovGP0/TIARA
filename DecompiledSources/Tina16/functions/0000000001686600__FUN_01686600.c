/* Ghidra address: 01686600 */
/* Ghidra symbol: FUN_01686600 */


void FUN_01686600(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 double *param_5,double *param_6,longlong param_7)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double local_1a8 [29];
  double local_c0;
  double local_78 [5];
  char local_4e;
  
  pdVar5 = local_78;
  for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_5;
    param_5 = param_5 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = local_1a8;
  for (lVar4 = 0x26; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_6;
    param_6 = param_6 + 1;
    pdVar5 = pdVar5 + 1;
  }
  local_78[1] = (double)FUN_00b90650(local_78[1],0x426d1a94a2000000);
  local_78[1] = (double)FUN_00b90620(local_78[1],0x3d719799812dea11);
  *(double *)(param_7 + 0x78) = (local_78[0] * 1.3806226e-23) / 1.6021917e-19;
  dVar6 = (double)FUN_00c42670(local_78[0] / 300.15,0x4008000000000000);
  dVar7 = (double)FUN_0040af80((local_c0 / *(double *)(param_7 + 0x78)) *
                               (local_78[0] / 300.15 - 1.0));
  *(double *)(param_7 + 0x80) = local_78[1] * local_1a8[0] * dVar6 * dVar7;
  *(char *)(param_7 + 3) = local_4e;
  *(undefined1 *)(param_7 + 7) = param_2;
  *(undefined1 *)(param_7 + 5) = param_3;
  *(undefined1 *)(param_7 + 6) = param_4;
  if (*(double *)(param_7 + 0x100) == 0.0) {
    *(undefined1 *)(param_7 + 8) = *(undefined1 *)(param_7 + 5);
  }
  else {
    *(undefined8 *)(param_7 + 0x100) = *(undefined8 *)(param_7 + 0x100);
    uVar1 = FUN_016e9e80(param_1,1);
    *(undefined1 *)(param_7 + 2) = uVar1;
    uVar3 = FUN_016e9d10(param_1,1);
    cVar2 = (char)uVar3 + '\x01';
    *(char *)(param_7 + 8) = cVar2;
    FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x01',*(undefined1 *)(param_7 + 5),
                 CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar2) & 0xffffffff,1);
    dVar6 = (double)FUN_00b90620(*(undefined8 *)(param_7 + 0x100),0x3e112e0be826d695);
    FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,1.0 / dVar6,0);
  }
  if (local_4e == '\x03') {
    if (*(double *)(param_7 + 0x108) == 0.0) {
      uVar1 = FUN_016e9e80(param_1,2);
      *(undefined1 *)(param_7 + 2) = uVar1;
      *(undefined1 *)(param_7 + 9) = *(undefined1 *)(param_7 + 6);
    }
    else {
      uVar1 = FUN_016e9e80(param_1,3);
      *(undefined1 *)(param_7 + 2) = uVar1;
      cVar2 = FUN_016e9d10(param_1,1);
      *(char *)(param_7 + 9) = cVar2 + '\x01';
    }
    FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x01',*(undefined1 *)(param_7 + 8),
                 *(undefined1 *)(param_7 + 7),1);
    uVar8 = 0;
    FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,0x412e848000000000,0);
    FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x02',*(undefined1 *)(param_7 + 8),
                 *(undefined1 *)(param_7 + 9),uVar8 & 0xffffffffffffff00);
    if (*(double *)(param_7 + 0x108) != 0.0) {
      FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x03',*(undefined1 *)(param_7 + 6),
                   *(undefined1 *)(param_7 + 9),1);
      dVar6 = (double)FUN_00b90620(*(undefined8 *)(param_7 + 0x108),0x3e112e0be826d695);
      FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x03',0,1.0 / dVar6,0);
    }
  }
  else if (local_4e == '\x04') {
    cVar2 = FUN_016e9e80(param_1,2);
    *(char *)(param_7 + 2) = cVar2;
    FUN_016ebe60(param_1,cVar2 + '\x01',*(undefined1 *)(param_7 + 8),*(undefined1 *)(param_7 + 6),1)
    ;
    if (*(double *)(param_7 + 0x108) == 0.0) {
      uVar8 = 0;
      FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,0x412e848000000000,0);
    }
    else {
      dVar6 = (double)FUN_00b90620(*(undefined8 *)(param_7 + 0x108),0x3e112e0be826d695);
      uVar8 = 0;
      FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,1.0 / (dVar6 + 1e-06),0);
    }
    FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x02',*(undefined1 *)(param_7 + 8),
                 *(undefined1 *)(param_7 + 7),uVar8 & 0xffffffffffffff00);
  }
  else if (local_4e == '\x05') {
    cVar2 = FUN_016e9e80(param_1,2);
    *(char *)(param_7 + 2) = cVar2;
    FUN_016ebe60(param_1,cVar2 + '\x01',*(undefined1 *)(param_7 + 8),*(undefined1 *)(param_7 + 6),1)
    ;
    if (*(double *)(param_7 + 0x108) == 0.0) {
      FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,0x412e848000000000,0);
    }
    else {
      dVar6 = (double)FUN_00b90620(*(undefined8 *)(param_7 + 0x108),0x3e112e0be826d695);
      FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x01',0,1.0 / (dVar6 + 1e-06),0);
    }
    FUN_016ebe60(param_1,*(char *)(param_7 + 2) + '\x02',*(undefined1 *)(param_7 + 8),
                 *(undefined1 *)(param_7 + 7),1);
    FUN_016ed320(param_1,*(char *)(param_7 + 2) + '\x02',0,0x412e848000000000,0);
  }
  return;
}

