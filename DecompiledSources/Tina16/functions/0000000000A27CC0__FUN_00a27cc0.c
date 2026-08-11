/* Ghidra address: 00a27cc0 */
/* Ghidra symbol: FUN_00a27cc0 */


undefined8 * FUN_00a27cc0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar1 = FUN_004170c0(&DAT_00a27e38,param_2,1);
  if (iVar1 < 1) {
    FUN_00414b50(&local_58,param_2);
  }
  else {
    FUN_00416dc0(&local_58,param_2,1,iVar1 + -1);
  }
  uVar2 = FUN_00414480(param_1);
  uVar3 = FUN_00414480(&local_30);
  uVar4 = FUN_00414480(&local_38);
  uVar5 = FUN_00414480(&local_48);
  uVar6 = FUN_00414480(&local_40);
  uVar7 = FUN_00414480(&local_50);
  FUN_00a280f0(local_58,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  FUN_0043e1a0(&local_60,*param_1);
  FUN_00414ad0(param_1,local_60);
  FUN_00414560(&local_60,7);
  return param_1;
}

