/* Ghidra address: 016eded0 */
/* Ghidra symbol: FUN_016eded0 */


void FUN_016eded0(undefined8 param_1,longlong param_2,int param_3,int param_4,double param_5,
                 double param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  lVar1 = (longlong)param_3;
  lVar2 = (longlong)param_4;
  dVar3 = (*(double *)(*(longlong *)(param_2 + 0x168) + lVar1 * 8) -
          *(double *)(*(longlong *)(param_2 + 0x168) + lVar2 * 8)) - param_5;
  if (param_6 < 0.0) {
    param_6 = *(double *)(param_2 + 0x720);
  }
  FUN_016edc70(dVar3,param_6,dVar3,
               *(double *)(param_2 + 0x3c0) *
               ((*(double *)(*(longlong *)(param_2 + 0x138) + lVar1 * 8) -
                *(double *)(*(longlong *)(param_2 + 0x138) + lVar2 * 8)) - param_5),
               (*(double *)(*(longlong *)(param_2 + 0x118) + lVar1 * 8) -
               *(double *)(*(longlong *)(param_2 + 0x118) + lVar2 * 8)) - param_5,param_6);
  return;
}

