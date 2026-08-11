/* Ghidra address: 0118aff0 */
/* Ghidra symbol: FUN_0118aff0 */


undefined8 FUN_0118aff0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0);
  iVar3 = 0;
  iVar4 = (iVar1 + 1) / 2;
  uVar2 = (longlong)(iVar1 + 1) % 2 & 0xffffffff;
  if (-1 < iVar4 + -1) {
    do {
      dVar5 = (double)FUN_0040bcd0(((double)iVar3 * 6.2831853071796) / ((double)iVar1 - 1.0),uVar2);
      *(double *)(*param_1 + 0x50 + (longlong)iVar3 * 8) = 0.54 - dVar5 * 0.46;
      uVar2 = *(ulonglong *)(*param_1 + 0x50 + (longlong)iVar3 * 8);
      *(ulonglong *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar3) + -1) * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

