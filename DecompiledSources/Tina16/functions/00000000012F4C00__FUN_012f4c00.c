/* Ghidra address: 012f4c00 */
/* Ghidra symbol: FUN_012f4c00 */


undefined1
FUN_012f4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,char param_6)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined1 local_ad4 [1026];
  undefined1 local_6d2 [1026];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [24];
  undefined8 local_290;
  
  local_af8 = 0;
  local_af0 = 0;
  local_ae8 = 0;
  local_ae0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00417580(local_2a8,&DAT_00432b90);
  uVar5 = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_012f49c0(&local_ae0,local_res8);
  FUN_00414b50(&local_res8,local_ae0);
  FUN_012f49c0(&local_ae8,local_res10);
  FUN_00414b50(&local_res10,local_ae8);
  FUN_00416cd0(&local_af0,3,local_res8,&DAT_012f4f74,param_5);
  iVar1 = FUN_00441230(local_af0,0x20,local_2a8);
  while (iVar1 == 0) {
    uVar5 = 1;
    FUN_00416cd0(&local_2c8,3,local_res8,&DAT_012f4f74,local_290);
    FUN_00416cd0(&local_2d0,3,local_res10,&DAT_012f4f74,local_290);
    FUN_00450070(&local_af8,local_2d0,local_res18,local_res20,1);
    FUN_00414b50(&local_2d0,local_af8);
    uVar3 = FUN_00442620(local_6d2,local_2c8);
    uVar4 = FUN_00442620(local_ad4,local_2d0);
    FUN_00427810(uVar3,uVar4,0);
    iVar1 = FUN_00441290(local_2a8);
    if (param_6 != '\0') {
      (**(code **)(*plVar2 + 0xd8))(plVar2,local_2d0);
      FUN_01b229f0(plVar2,local_res18,local_res20);
      (**(code **)(*plVar2 + 0x100))(plVar2,local_2d0);
    }
  }
  FUN_004412c0(local_2a8);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_af8,4);
  FUN_00414560(&local_2d0,5);
  FUN_00417740(local_2a8,&DAT_00432b90);
  FUN_00414560(&local_res8,5);
  return uVar5;
}

