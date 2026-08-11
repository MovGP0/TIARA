/* Ghidra address: 01261020 */
/* Ghidra symbol: FUN_01261020 */


longlong * FUN_01261020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416cd0(local_30,6,*(undefined8 *)PTR_DAT_020049a0,&DAT_012611d8,L"VHDL\\Packages",
               L"\\version_history_",local_res18,L".txt");
  cVar1 = FUN_00440a20(local_30[0],1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_48,PTR_PTR_02002048);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
  }
  else {
    FUN_00416ba0(local_40,L"* Name: ",local_res10);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_30[0]);
    (**(code **)(*plVar2 + 0x88))(plVar2,plVar3);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return plVar2;
}

