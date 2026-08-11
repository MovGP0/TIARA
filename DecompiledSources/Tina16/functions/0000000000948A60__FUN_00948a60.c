/* Ghidra address: 00948a60 */
/* Ghidra symbol: FUN_00948a60 */


double FUN_00948a60(longlong param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  
  dVar7 = -NAN;
  bVar2 = false;
  iVar4 = 0;
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + -4) >> 1;
  }
  while ((0 < (int)uVar5 &&
         (cVar3 = FUN_008ff300(*(undefined2 *)(param_1 + -2 + (longlong)(int)uVar5 * 2)),
         cVar3 != '\0'))) {
    uVar5 = uVar5 - 1;
  }
  if (0 < (int)uVar5) {
    if (*(short *)(param_1 + -2 + (longlong)(int)uVar5 * 2) == 0x2e) {
      return -NAN;
    }
    dVar7 = 0.0;
  }
  if (0 < (int)uVar5) {
    while (uVar1 = *(ushort *)(param_1 + -2 + (longlong)(int)uVar5 * 2), uVar1 < 0x3a) {
      if (uVar1 < 0x30) {
        if (uVar1 != 0x2e) {
          if (uVar1 == 0x2d) {
            dVar7 = -dVar7;
            uVar5 = uVar5 - 1;
          }
          break;
        }
        if (bVar2) {
          return -NAN;
        }
        fVar6 = (float)FUN_00526700(0x41200000,(float)iVar4);
        dVar7 = dVar7 / (double)fVar6;
        iVar4 = 0;
        bVar2 = true;
      }
      else {
        fVar6 = (float)FUN_00526700(0x41200000,(float)iVar4);
        dVar7 = dVar7 + (double)(int)(uVar1 - 0x30) * (double)fVar6;
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 1) break;
    }
  }
  while ((0 < (int)uVar5 &&
         (cVar3 = FUN_008ff300(*(undefined2 *)(param_1 + -2 + (longlong)(int)uVar5 * 2)),
         cVar3 != '\0'))) {
    uVar5 = uVar5 - 1;
  }
  if (0 < (int)uVar5) {
    dVar7 = -NAN;
  }
  return dVar7;
}

