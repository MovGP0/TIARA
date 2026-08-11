/* Ghidra address: 0118b8f0 */
/* Ghidra symbol: FUN_0118b8f0 */


undefined8 FUN_0118b8f0(longlong *param_1,double param_2)

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
      dVar5 = (double)FUN_0040c760((double)iVar3 * (((double)iVar1 - (double)iVar3) - 1.0),uVar2);
      dVar5 = (double)FUN_011894e0((param_2 * 2.0 * dVar5) / ((double)iVar1 - 1.0));
      dVar6 = (double)FUN_011894e0(param_2);
      *(double *)(*param_1 + 0x50 + (longlong)iVar3 * 8) = dVar5 / dVar6;
      uVar2 = *(ulonglong *)(*param_1 + 0x50 + (longlong)iVar3 * 8);
      *(ulonglong *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar3) + -1) * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

