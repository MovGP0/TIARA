/* Ghidra address: 010bf470 */
/* Ghidra symbol: FUN_010bf470 */


void FUN_010bf470(byte param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = 1 << (param_1 & 0x1f);
  *param_3 = 0x40128f9096bb98c8;
  *param_4 = 0x400c7ae147ae147b;
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      dVar4 = (double)FUN_0040bcd0(((double)iVar2 * 6.283185307179586) / (double)iVar1);
      dVar5 = (double)FUN_0040bcd0(((double)iVar2 * 12.566370614359172) / (double)iVar1);
      dVar6 = (double)FUN_0040bcd0(((double)iVar2 * 18.84955592153876) / (double)iVar1);
      dVar7 = (double)FUN_0040bcd0(((double)iVar2 * 25.132741228718345) / (double)iVar1);
      *(double *)(param_2 + (longlong)iVar2 * 0x10) =
           ((1.0 - (((dVar4 * 1.93 - dVar5 * 1.29) + dVar6 * 0.388) - dVar7 * 0.0322)) / 4.6402) *
           *(double *)(param_2 + (longlong)iVar2 * 0x10);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

