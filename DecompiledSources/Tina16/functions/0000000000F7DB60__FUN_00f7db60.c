/* Ghidra address: 00f7db60 */
/* Ghidra symbol: FUN_00f7db60 */


undefined8 FUN_00f7db60(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res10 [3];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(local_60,local_res10[0],&DAT_00f7ddf8,&DAT_00f7de08,1);
  FUN_00414b50(local_res10,local_60[0]);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar4,local_res10[0]);
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_00414b50(&local_50,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x790));
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30,iVar7);
      FUN_00f7cbd0(local_30,&local_38,&local_40,&local_48);
      uVar1 = FUN_01b217f0(local_48);
      FUN_00450070(&local_68,local_38,&DAT_00f7de08,&DAT_00f7ddf8,1);
      FUN_00414b50(&local_38,local_68);
      uVar3 = FUN_0043fc00(local_40);
      FUN_00416ba0(&local_70,local_50,local_38);
      uVar6 = FUN_00f7cd40(&DAT_00f7bf18,1,uVar3,local_70,uVar1);
      FUN_004ae7e0(uVar5,uVar6);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res10);
  return uVar5;
}

