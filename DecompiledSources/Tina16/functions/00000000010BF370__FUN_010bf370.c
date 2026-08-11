/* Ghidra address: 010bf370 */
/* Ghidra symbol: FUN_010bf370 */


void FUN_010bf370(byte param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = 1 << (param_1 & 0x1f);
  *param_3 = 0x40030c2f837b4a23;
  *param_4 = 0x400228f5c28f5c29;
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      dVar4 = (double)FUN_0040bcd0(((double)iVar2 * 6.283185307179586) / (double)iVar1);
      dVar5 = (double)FUN_0040bcd0(((double)iVar2 * 12.566370614359172) / (double)iVar1);
      *(double *)(param_2 + (longlong)iVar2 * 0x10) =
           (0.42 - (dVar4 * 0.5 - dVar5 * 0.08)) * *(double *)(param_2 + (longlong)iVar2 * 0x10);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

