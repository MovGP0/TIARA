/* Ghidra address: 01d60920 */
/* Ghidra symbol: FUN_01d60920 */


double FUN_01d60920(longlong param_1,int param_2,double param_3,double param_4,double param_5,
                   double param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = FUN_01b10ce0(*(undefined8 *)(param_1 + 0x4b0));
  if (param_2 != iVar1 + 1) {
    lVar2 = FUN_01b10cd0(*(undefined8 *)(param_1 + 0x4b0));
    param_3 = *(double *)(lVar2 + (longlong)param_2 * 8);
  }
  lVar2 = FUN_01b10cd0(*(undefined8 *)(param_1 + 0x4b0));
  lVar3 = FUN_01b10cd0(*(undefined8 *)(param_1 + 0x4b0));
  lVar4 = FUN_01b10cd0(*(undefined8 *)(param_1 + 0x4b0));
  lVar5 = FUN_01b10cd0(*(undefined8 *)(param_1 + 0x4b0));
  return ((param_6 - param_5) / (param_3 - *(double *)(lVar2 + (longlong)(param_2 + -1) * 8)) -
         (param_5 - param_4) /
         (*(double *)(lVar3 + (longlong)(param_2 + -1) * 8) -
         *(double *)(lVar4 + (longlong)(param_2 + -2) * 8))) /
         (param_3 - *(double *)(lVar5 + (longlong)(param_2 + -2) * 8));
}

