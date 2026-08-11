/* Ghidra address: 010bf1f0 */
/* Ghidra symbol: FUN_010bf1f0 */


void FUN_010bf1f0(byte param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar1 = 1 << (param_1 & 0x1f);
  *param_3 = 0x4000000000000000;
  *param_4 = 0x4000000000000000;
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      dVar4 = (double)FUN_0040bcd0(((double)iVar2 * 6.283185307179586) / (double)iVar1);
      *(double *)(param_2 + (longlong)iVar2 * 0x10) =
           (0.5 - dVar4 * 0.5) * *(double *)(param_2 + (longlong)iVar2 * 0x10);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

