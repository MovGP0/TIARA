/* Ghidra address: 01b7b890 */
/* Ghidra symbol: FUN_01b7b890 */


void FUN_01b7b890(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar3 = 0;
  FUN_0043f750(&local_30,0);
  FUN_00416ba0(&local_28,&DAT_01b7ba38,local_30);
  FUN_00416ba0(&local_38,local_28,L"_Name");
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
            (*(longlong **)(param_1 + 0x800),&local_20,L"AutoShape Color Sets",local_38,
             &DAT_01b7ba9c);
  while( true ) {
    iVar2 = FUN_00416db0(local_20,&DAT_01b7ba9c);
    if (iVar2 == 0) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
    iVar3 = iVar3 + 1;
    FUN_0043f750(&local_40,iVar3);
    FUN_00416ba0(&local_28,&DAT_01b7ba38,local_40);
    FUN_00416ba0(&local_48,local_28,L"_Name");
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
              (*(longlong **)(param_1 + 0x800),&local_20,L"AutoShape Color Sets",local_48,
               &DAT_01b7ba9c);
  }
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))
            (*(longlong **)(param_1 + 2000),*(undefined4 *)PTR_DAT_02001de0);
  FUN_00414560(&local_48,6);
  return;
}

