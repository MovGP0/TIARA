/* Ghidra address: 00418870 */
/* Ghidra symbol: FUN_00418870 */


longlong FUN_00418870(longlong param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = 1;
  bVar8 = false;
  lVar5 = 0;
  bVar4 = 1;
  if (param_1 == 0) {
    *param_2 = 1;
    return 0;
  }
  while (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x20) {
    iVar6 = iVar6 + 1;
  }
  sVar1 = *(short *)(param_1 + -2 + (longlong)iVar6 * 2);
  if (sVar1 == 0x2d) {
    bVar8 = true;
    iVar6 = iVar6 + 1;
  }
  else if (sVar1 == 0x2b) {
    iVar6 = iVar6 + 1;
  }
  if (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x30) {
    iVar7 = 0;
    if (param_1 != 0) {
      iVar7 = *(int *)(param_1 + -4);
    }
    bVar3 = iVar6 < iVar7;
  }
  else {
    bVar3 = false;
  }
  if ((((bVar3) &&
       ((sVar1 = *(short *)(param_1 + -2 + (longlong)(iVar6 + 1) * 2), sVar1 == 0x58 ||
        (sVar1 == 0x78)))) || (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x24)) ||
     ((*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x58 ||
      (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x78)))) {
    if (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x30) {
      iVar6 = iVar6 + 1;
    }
    do {
      iVar6 = iVar6 + 1;
      uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar6 * 2);
      if ((ushort)(uVar2 - 0x30) < 10) {
        iVar7 = uVar2 - 0x30;
      }
      else if ((ushort)(uVar2 - 0x41) < 6) {
        iVar7 = uVar2 - 0x37;
      }
      else {
        if (5 < (ushort)(uVar2 - 0x61)) goto code_r0x004189ba;
        iVar7 = uVar2 - 0x57;
      }
      if ((lVar5 < 0) || (0xfffffffffffffff < lVar5)) goto code_r0x004189ba;
      lVar5 = lVar5 * 0x10 + (longlong)iVar7;
      bVar4 = 0;
    } while( true );
  }
  for (; ((uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar6 * 2), (ushort)(uVar2 - 0x30) < 10 &&
          (-1 < lVar5)) && (lVar5 < 0xccccccccccccccd));
      lVar5 = lVar5 * 10 + (longlong)(int)(uVar2 - 0x30)) {
    iVar6 = iVar6 + 1;
    bVar4 = 0;
  }
  if (bVar8 != false) {
    lVar5 = -lVar5;
  }
  if ((lVar5 != 0) && (bVar8 != lVar5 < 0)) {
    iVar6 = iVar6 + -1;
  }
LAB_00418a2b:
  if ((bool)(*(short *)(param_1 + -2 + (longlong)iVar6 * 2) != 0 | bVar4)) {
    *param_2 = iVar6;
  }
  else {
    *param_2 = 0;
  }
  return lVar5;
code_r0x004189ba:
  if (bVar8 != false) {
    lVar5 = -lVar5;
  }
  goto LAB_00418a2b;
}

