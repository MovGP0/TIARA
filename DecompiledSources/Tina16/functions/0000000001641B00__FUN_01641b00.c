/* Ghidra address: 01641b00 */
/* Ghidra symbol: FUN_01641b00 */


undefined8 FUN_01641b00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined *puVar6;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = (undefined *)0x0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_30);
  FUN_004b4b10(plVar3,local_res18[0]);
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0);
  uVar1 = FUN_0043fc00(local_40);
  FUN_004b4b10(plVar3,local_res18[0]);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  local_64 = 1;
  iVar5 = 0;
  FUN_0043f750(&local_48,uVar1);
  puVar6 = &DAT_01641dd4;
  FUN_00416cd0(&local_30,4,local_30,L"iGR: ",local_48,&DAT_01641dd4);
  for (; local_64 < iVar2; local_64 = local_64 + 2) {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,local_64);
    uVar1 = FUN_0043fc00(local_50);
    lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),uVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,local_64 + 1);
    uVar1 = FUN_0043fc00(local_58);
    FUN_01635100(lVar4,&local_38,uVar1);
    puVar6 = local_38;
    FUN_00416cd0(&local_30,5,local_30,*(undefined8 *)(lVar4 + 0x638),&DAT_01641de8,local_38,
                 &DAT_01641dd4);
    iVar5 = iVar5 + 1;
  }
  FUN_0043f750(&local_60,iVar5);
  FUN_00416cd0(&local_30,3,local_30,L", numofconnections: ",local_60,puVar6);
  FUN_00410f20(plVar3);
  FUN_00414ad0(param_2,local_30);
  FUN_00414560(&local_60,7);
  FUN_00414480(local_res18);
  return param_2;
}

