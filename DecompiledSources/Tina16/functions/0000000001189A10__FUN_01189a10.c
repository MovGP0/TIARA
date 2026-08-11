/* Ghidra address: 01189a10 */
/* Ghidra symbol: FUN_01189a10 */


undefined8 FUN_01189a10(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0);
  iVar3 = 0;
  iVar4 = (iVar1 + 1) / 2;
  uVar2 = (longlong)(iVar1 + 1) % 2 & 0xffffffff;
  if (-1 < iVar4 + -1) {
    do {
      dVar5 = (double)FUN_0040bcd0(((double)iVar3 * 6.2831853071796) / ((double)iVar1 - 1.0),uVar2);
      dVar6 = (double)FUN_0040bcd0(((double)iVar3 * 12.5663706143592) / ((double)iVar1 - 1.0));
      *(double *)(*param_1 + 0x50 + (longlong)iVar3 * 8) = 0.42 - (dVar5 * 0.5 - dVar6 * 0.08);
      uVar2 = *(ulonglong *)(*param_1 + 0x50 + (longlong)iVar3 * 8);
      *(ulonglong *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar3) + -1) * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

