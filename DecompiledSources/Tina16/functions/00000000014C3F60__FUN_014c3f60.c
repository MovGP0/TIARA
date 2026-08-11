/* Ghidra address: 014c3f60 */
/* Ghidra symbol: FUN_014c3f60 */


void FUN_014c3f60(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  plVar2 = (longlong *)FUN_014bca40(&PTR_FUN_014bc4a8);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00416cd0(local_30,3,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?",L"func=login");
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar3 + 0x90))(plVar3);
    FUN_014bcab0(plVar2,&local_48);
    FUN_00416ba0(&local_40,L"name=",local_48);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
    FUN_014bcad0(plVar2,&local_58);
    FUN_00416ba0(&local_50,L"password=",local_58);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_50);
    FUN_014c1be0(param_1,local_30[0],plVar3,&local_38,1,0xffffffff);
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_58,6);
  return;
}

