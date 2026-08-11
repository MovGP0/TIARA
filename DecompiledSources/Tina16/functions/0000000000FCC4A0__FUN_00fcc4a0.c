/* Ghidra address: 00fcc4a0 */
/* Ghidra symbol: FUN_00fcc4a0 */


double FUN_00fcc4a0(longlong param_1,int param_2,double param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_68 = 0;
  local_60[0] = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (param_2 == 0) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 1;
  }
  if (param_2 == 1) {
    iVar3 = 0x10000;
  }
  else {
    iVar3 = 0x100;
  }
  dVar1 = *(double *)(param_1 + 0xce0);
  if (param_3 <= (1.0 / dVar1) * (double)iVar3 * (double)iVar4) {
    FUN_00468860(&local_50,(dVar1 * param_3) / (double)iVar4);
    iVar2 = FUN_00462650(&local_50);
    FUN_00f61040(local_60,iVar3 - iVar2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_60[0]);
    FUN_00f61040(&local_68,iVar3 - iVar2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_68);
    param_3 = (1.0 / dVar1) * (double)iVar2 * (double)iVar4;
  }
  FUN_00414560(&local_68,2);
  FUN_00460ba0(&local_50);
  return 1.0 / param_3;
}

