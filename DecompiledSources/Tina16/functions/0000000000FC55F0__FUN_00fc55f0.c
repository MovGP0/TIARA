/* Ghidra address: 00fc55f0 */
/* Ghidra symbol: FUN_00fc55f0 */


void FUN_00fc55f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *(int *)(param_1 + 0xba8) = iVar1;
  if (iVar1 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 1;
  }
  if (iVar1 == 1) {
    iVar1 = 0x10000;
  }
  else {
    iVar1 = 0x100;
  }
  dVar5 = *(double *)(param_1 + 0xc70) / 6.0;
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
  dVar6 = (1.0 / dVar5) * (double)iVar1 * (double)iVar3;
  FUN_00b8fd60(&local_88,dVar6,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(local_80,L"Time max: ",local_88);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_80[0]);
  if (dVar6 < dVar4) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),L"Time: out of range");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),&DAT_00fc590c);
  }
  else {
    FUN_00468860(&local_70,(dVar5 * dVar4) / (double)iVar3);
    iVar2 = FUN_00462650(&local_70);
    FUN_00f61040(&local_90,iVar1 - iVar2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_90);
    FUN_00b8fd60(&local_a0,(1.0 / dVar5) * (double)iVar2 * (double)iVar3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_98,L"Time: ",local_a0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_98);
  }
  FUN_00414560(&local_a0,5);
  FUN_00460ba0(&local_70);
  return;
}

