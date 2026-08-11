/* Ghidra address: 00fc8020 */
/* Ghidra symbol: FUN_00fc8020 */


void FUN_00fc8020(longlong param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),local_80);
  if (local_80[0] != 0) {
    dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x728));
    dVar4 = *(double *)(param_1 + 0xc68) / 6.0;
    dVar3 = (1.0 / dVar4) * 65536.0;
    FUN_00b8fd60(&local_90,dVar3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_88,L"Time max: ",local_90);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_88);
    if (dVar3 < dVar2) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),&LAB_00fc8314);
    }
    else {
      FUN_00468860(&local_70,dVar4 * dVar2);
      iVar1 = FUN_00462650(&local_70);
      FUN_00f61040(&local_98,0x10000 - iVar1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_98);
      FUN_00b8fd60(&local_a8,(1.0 / dVar4) * (double)iVar1,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_a0,L"Time: ",local_a8);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_a0);
    }
  }
  FUN_00414560(&local_a8,5);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

