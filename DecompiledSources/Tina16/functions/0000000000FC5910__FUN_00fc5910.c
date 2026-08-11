/* Ghidra address: 00fc5910 */
/* Ghidra symbol: FUN_00fc5910 */


double FUN_00fc5910(longlong param_1,int param_2,double param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80[0] = 0;
  local_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_2 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 1;
  }
  if (param_2 == 1) {
    iVar2 = 0x10000;
  }
  else {
    iVar2 = 0x100;
  }
  dVar4 = *(double *)(param_1 + 0xc70) / 6.0;
  dVar5 = (1.0 / dVar4) * (double)iVar2 * (double)iVar3;
  FUN_00b8fd60(&local_88,dVar5,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(local_80,L"Time max: ",local_88);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_80[0]);
  if (dVar5 < param_3) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),L"Time: out of range");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),&LAB_00fc5c30);
  }
  else {
    FUN_00468860(&local_70,(dVar4 * param_3) / (double)iVar3);
    iVar1 = FUN_00462650(&local_70);
    FUN_00f61040(&local_90,iVar2 - iVar1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_90);
    param_3 = (1.0 / dVar4) * (double)iVar1 * (double)iVar3;
    FUN_00b8fd60(&local_a0,param_3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_98,L"Time: ",local_a0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_98);
  }
  FUN_00414560(&local_a0,5);
  FUN_00460ba0(&local_70);
  return 1.0 / param_3;
}

