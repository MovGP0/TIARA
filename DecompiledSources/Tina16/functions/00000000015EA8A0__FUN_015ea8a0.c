/* Ghidra address: 015ea8a0 */
/* Ghidra symbol: FUN_015ea8a0 */


void FUN_015ea8a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416cd0(&local_30,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_015eab08,L"VHDL\\Packages",
               L"\\sc_ext.txt");
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(local_40,local_30,L": not found");
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40[0]);
    FUN_004134c0(uVar4);
  }
  else {
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_30);
  }
  iVar2 = (**(code **)(*plVar3 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar5);
      FUN_00416cd0(&local_30,3,local_res8,&DAT_015eab08,local_48);
      cVar1 = FUN_00440a20(local_30,1);
      if (cVar1 == '\0') {
        FUN_00416ba0(&local_60,local_30,L": not found");
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
        FUN_004134c0(uVar4);
      }
      else {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,iVar5);
        FUN_00416cd0(&local_50,3,local_res10,&DAT_015eab08,local_58);
        FUN_015f21c0(local_30,local_50);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_60,5);
  FUN_00414480(&local_30);
  FUN_00414560(&local_res8,2);
  return;
}

