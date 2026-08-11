/* Ghidra address: 016ee040 */
/* Ghidra symbol: FUN_016ee040 */


void FUN_016ee040(undefined8 param_1,longlong param_2,int param_3,double param_4,double param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (longlong)param_3;
  dVar2 = *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar1 * 8) - param_4;
  dVar3 = *(double *)(param_2 + 0x3c0) *
          (*(double *)(*(longlong *)(param_2 + 0x180) + lVar1 * 8) - param_4);
  param_4 = *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar1 * 8) - param_4;
  if (param_5 < 0.0) {
    param_5 = *(double *)(param_2 + 0x720);
  }
  FUN_016eda90(dVar2,dVar3,dVar2,dVar3,param_4,param_4,param_5);
  return;
}

