/* Ghidra address: 013c4af0 */
/* Ghidra symbol: FUN_013c4af0 */


void FUN_013c4af0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(char *)(param_1 + 0x309) == '\0') {
    FUN_00416cd0(local_40,3,L"Function F(",*(undefined8 *)PTR_DAT_02001af8,&DAT_013c4d9c);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Begin");
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x18))
                  (*(longlong **)(param_1 + 0x2b0),&local_30,iVar3);
        FUN_00416cd0(&local_48,3,L" F:=",local_30,&DAT_013c4de0);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*plVar2 + 0x78))(plVar2,L"End;");
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x18))
                  (*(longlong **)(param_1 + 0x2b0),&local_30,iVar3);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_013c1650(&local_58,*(undefined1 *)(param_1 + 0x308),*(undefined8 *)(param_1 + 0x310));
  FUN_00416cd0(&local_50,5,L"Draw(F(",*(undefined8 *)PTR_DAT_02001af8,&LAB_013c4e24,local_58,
               &DAT_013c4d9c);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_50);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2b0));
  *(longlong **)(param_1 + 0x2b0) = plVar2;
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return;
}

