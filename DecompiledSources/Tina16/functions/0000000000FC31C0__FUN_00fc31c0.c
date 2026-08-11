/* Ghidra address: 00fc31c0 */
/* Ghidra symbol: FUN_00fc31c0 */


void FUN_00fc31c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),local_80);
  if (local_80[0] != 0) {
    if (*(int *)(param_1 + 0xb18) == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 1;
    }
    if (*(int *)(param_1 + 0xb18) == 1) {
      iVar2 = 0x10000;
    }
    else {
      iVar2 = 0x100;
    }
    dVar5 = *(double *)(param_1 + 0xbf0) / 6.0;
    dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
    dVar6 = (1.0 / dVar5) * (double)iVar2 * (double)iVar3;
    FUN_00b8fd60(&local_90,dVar6,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_88,L"Time max: ",local_90);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_88);
    if (dVar6 < dVar4) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),&LAB_00fc34f4);
    }
    else {
      FUN_00468860(&local_70,(dVar5 * dVar4) / (double)iVar3);
      iVar1 = FUN_00462650(&local_70);
      FUN_00f61040(&local_98,iVar2 - iVar1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_98);
      FUN_00b8fd60(&local_a8,(1.0 / dVar5) * (double)iVar1 * (double)iVar3,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_a0,L"Time: ",local_a8);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_a0);
    }
  }
  FUN_00414560(&local_a8,5);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

