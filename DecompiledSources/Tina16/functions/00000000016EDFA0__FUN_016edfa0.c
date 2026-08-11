/* Ghidra address: 016edfa0 */
/* Ghidra symbol: FUN_016edfa0 */


void FUN_016edfa0(undefined8 param_1,longlong param_2,int param_3,double param_4,double param_5)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = (longlong)param_3;
  dVar2 = *(double *)(*(longlong *)(param_2 + 0x168) + lVar1 * 8) - param_4;
  if (param_5 < 0.0) {
    param_5 = *(double *)(param_2 + 0x728);
  }
  FUN_016edc70(dVar2,param_5,dVar2,
               *(double *)(param_2 + 0x3c0) *
               (*(double *)(*(longlong *)(param_2 + 0x138) + lVar1 * 8) - param_4),
               *(double *)(*(longlong *)(param_2 + 0x118) + lVar1 * 8) - param_4,param_5);
  return;
}

