/* Ghidra address: 01176a10 */
/* Ghidra symbol: FUN_01176a10 */


void FUN_01176a10(longlong *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)FUN_00b90090(*(undefined8 *)(DAT_020412f0 + 0x6e0));
  dVar4 = **(double **)(*param_1 + 0x10);
  dVar5 = 0.0;
  iVar2 = *(int *)(*param_1 + 0x38) + -1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      *(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8) =
           *(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8) - dVar5;
      while( true ) {
        if (*(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8) - dVar4 <= dVar3)
        break;
        dVar5 = dVar5 + 360.0;
        *(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8) =
             *(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8) - 360.0;
      }
      dVar4 = *(double *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar1 * 8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

