/* Ghidra address: 013feb30 */
/* Ghidra symbol: FUN_013feb30 */


undefined4 FUN_013feb30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416cd0(&local_30,3,*(undefined8 *)PTR_DAT_02005010,&DAT_013fecac,L"TINA.INI");
  plVar2 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_30);
  FUN_0043f750(&local_38,*(undefined4 *)PTR_DAT_02001de0);
  FUN_00416cd0(&local_20,4,&DAT_013fecdc,local_38,&DAT_013fecf0,local_res10[0]);
  FUN_005fbf40(&local_40,param_3);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_28,L"AutoShape Color Sets",local_20,local_40);
  uVar1 = FUN_005fbf60(local_28);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return uVar1;
}

