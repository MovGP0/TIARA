/* Ghidra address: 016ede00 */
/* Ghidra symbol: FUN_016ede00 */


void FUN_016ede00(undefined8 param_1,longlong param_2,int param_3,int param_4,double param_5,
                 double param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = (longlong)param_3;
  lVar2 = (longlong)param_4;
  dVar3 = (*(double *)(*(longlong *)(param_2 + 0x168) + lVar1 * 8) -
          *(double *)(*(longlong *)(param_2 + 0x168) + lVar2 * 8)) - param_5;
  dVar4 = *(double *)(param_2 + 0x3c0) *
          ((*(double *)(*(longlong *)(param_2 + 0x138) + lVar1 * 8) -
           *(double *)(*(longlong *)(param_2 + 0x138) + lVar2 * 8)) - param_5);
  param_5 = (*(double *)(*(longlong *)(param_2 + 0x118) + lVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + lVar2 * 8)) - param_5;
  if (param_6 < 0.0) {
    param_6 = *(double *)(param_2 + 0x720);
  }
  FUN_016eda90(dVar3,dVar4,dVar3,dVar4,param_5,param_5,param_6);
  return;
}

