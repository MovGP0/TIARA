/* Ghidra address: 0040e860 */
/* Ghidra symbol: FUN_0040e860 */


int FUN_0040e860(longlong param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 1;
  bVar7 = false;
  iVar5 = 0;
  bVar3 = 1;
  if (param_1 == 0) {
    *param_2 = 1;
    return 0;
  }
  while (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x20) {
    iVar6 = iVar6 + 1;
  }
  sVar1 = *(short *)(param_1 + -2 + (longlong)iVar6 * 2);
  if (sVar1 == 0x2d) {
    bVar7 = true;
    iVar6 = iVar6 + 1;
  }
  else if (sVar1 == 0x2b) {
    iVar6 = iVar6 + 1;
  }
  if ((((*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x30) &&
       (iVar4 = FUN_00414cb0(param_1), iVar6 < iVar4)) &&
      ((sVar1 = *(short *)(param_1 + -2 + (longlong)(iVar6 + 1) * 2), sVar1 == 0x58 ||
       (sVar1 == 0x78)))) ||
     (((*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x24 ||
       (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x58)) ||
      (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x78)))) {
    if (*(short *)(param_1 + -2 + (longlong)iVar6 * 2) == 0x30) {
      iVar6 = iVar6 + 1;
    }
    do {
      iVar6 = iVar6 + 1;
      uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar6 * 2);
      if ((ushort)(uVar2 - 0x30) < 10) {
        iVar4 = uVar2 - 0x30;
      }
      else if ((ushort)(uVar2 - 0x41) < 6) {
        iVar4 = uVar2 - 0x37;
      }
      else {
        if (5 < (ushort)(uVar2 - 0x61)) goto code_r0x0040e9b0;
        iVar4 = uVar2 - 0x57;
      }
      if ((iVar5 < 0) || (0xfffffff < iVar5)) goto code_r0x0040e9b0;
      iVar5 = iVar5 * 0x10 + iVar4;
      bVar3 = 0;
    } while( true );
  }
  for (; ((uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar6 * 2), (ushort)(uVar2 - 0x30) < 10 &&
          (-1 < iVar5)) && (iVar5 < 0xccccccd)); iVar5 = iVar5 * 10 + (uVar2 - 0x30)) {
    iVar6 = iVar6 + 1;
    bVar3 = 0;
  }
  if (bVar7 != false) {
    iVar5 = -iVar5;
  }
  if ((iVar5 != 0) && (bVar7 != iVar5 < 0)) {
    iVar6 = iVar6 + -1;
  }
LAB_0040ea0e:
  if ((bool)(*(short *)(param_1 + -2 + (longlong)iVar6 * 2) != 0 | bVar3)) {
    *param_2 = iVar6;
  }
  else {
    *param_2 = 0;
  }
  return iVar5;
code_r0x0040e9b0:
  if (bVar7 != false) {
    iVar5 = -iVar5;
  }
  goto LAB_0040ea0e;
}

