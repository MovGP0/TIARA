/* Ghidra address: 019d00d0 */
/* Ghidra symbol: FUN_019d00d0 */


void FUN_019d00d0(undefined8 param_1,double param_2,double param_3,double param_4,int param_5,
                 int param_6,int *param_7)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_005264b0(param_2 / param_3);
  dVar3 = (double)FUN_005264b0(param_4 / param_3);
  iVar1 = FUN_0040c770((dVar2 / dVar3) * (double)param_6);
  *param_7 = param_5 + iVar1;
  return;
}

