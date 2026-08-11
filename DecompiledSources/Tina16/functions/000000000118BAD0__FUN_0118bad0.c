/* Ghidra address: 0118bad0 */
/* Ghidra symbol: FUN_0118bad0 */


int FUN_0118bad0(undefined8 param_1)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 *puStack_52db0;
  undefined1 auStack_52da8 [4];
  int iStack_52da4;
  int iStack_52d98;
  int iStack_528e0;
  int aiStack_528dc [68519];
  double adStack_fa40 [7491];
  undefined1 auStack_1028 [4096];
  ulonglong uVar6;
  
  uVar6 = 0x250;
  do {
    uVar5 = uVar6 - 0x1000;
    auStack_1028[uVar6] = (char)uVar5;
    uVar6 = uVar5;
  } while (0xfffffffffffad250 < uVar5);
  puStack_52db0 = auStack_52da8;
  iStack_52d98 = 0x20;
  iVar8 = 4;
  do {
    iStack_52d98 = iStack_52d98 * 2;
    iVar3 = FUN_01190de0(param_1,&puStack_52db0);
    if (iVar3 != 0) {
      return iVar3 * 10 + 1;
    }
    iVar3 = 0;
    dVar11 = 1.0;
    while( true ) {
      iVar4 = FUN_011908e0(&puStack_52db0);
      if (iVar4 != 0) {
        return iVar4 * 10 + 2;
      }
      dVar10 = adStack_fa40[iStack_528e0];
      iVar4 = iStack_52da4 + -1;
      dVar9 = dVar10;
      if (0 < iVar4) {
        piVar7 = aiStack_528dc;
        do {
          dVar1 = adStack_fa40[*piVar7];
          if (dVar10 < dVar1) {
            dVar10 = dVar1;
          }
          if (dVar1 < dVar9) {
            dVar9 = dVar1;
          }
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      dVar10 = (dVar10 - dVar9) / dVar10;
      if (dVar10 < 1e-06) break;
      if (((0xf < iVar3) && (bVar2 = false, dVar11 < dVar10)) ||
         (iVar3 = iVar3 + 1, dVar11 = dVar10, bVar2 = false, iVar3 == 0x1e)) goto code_r0x0118bc04;
    }
    bVar2 = true;
code_r0x0118bc04:
    if ((bVar2) && (iVar3 = FUN_0118bcf0(param_1,&puStack_52db0), iVar3 != 0)) {
      return iVar3 * 10 + 3;
    }
    if ((bVar2) || (iVar8 = iVar8 + -1, iVar8 == 0)) {
      if (bVar2) {
        iVar8 = 0;
      }
      else {
        iVar8 = 4;
      }
      return iVar8;
    }
  } while( true );
}

