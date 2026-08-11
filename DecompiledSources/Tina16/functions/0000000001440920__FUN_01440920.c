/* Ghidra address: 01440920 */
/* Ghidra symbol: FUN_01440920 */


void FUN_01440920(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  byte local_118 [256];
  
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_004169a0(&local_120,local_118);
  iVar1 = FUN_004170c0(&LAB_01440b38,local_120,1);
  if (iVar1 < 1) {
    FUN_00414ff0(param_2,local_118);
    local_118[0] = 0;
  }
  else {
    FUN_004169a0(&local_128,local_118);
    iVar1 = FUN_004170c0(&LAB_01440b38,local_128,1);
    FUN_004151b0(param_2,local_118,1,iVar1 + -1);
    FUN_004169a0(&local_130,local_118);
    uVar2 = FUN_004170c0(&LAB_01440b38,local_130,1);
    FUN_00415260(local_118,0xff,1,uVar2);
  }
  FUN_004169a0(&local_138,local_118);
  iVar1 = FUN_004170c0(&LAB_01440b38,local_138,1);
  if (iVar1 < 1) {
    FUN_00414ff0(param_3,local_118);
    local_118[0] = 0;
  }
  else {
    FUN_004169a0(&local_140,local_118);
    iVar1 = FUN_004170c0(&LAB_01440b38,local_140,1);
    FUN_004151b0(param_3,local_118,1,iVar1 + -1);
    FUN_004169a0(&local_148,local_118);
    uVar2 = FUN_004170c0(&LAB_01440b38,local_148,1);
    FUN_00415260(local_118,0xff,1,uVar2);
  }
  FUN_00414ff0(param_4,local_118);
  FUN_00414560(&local_148,6);
  return;
}

