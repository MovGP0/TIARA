/* Ghidra address: 01301c40 */
/* Ghidra symbol: FUN_01301c40 */


void FUN_01301c40(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414480(&local_18);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838));
  if (iVar2 == 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))(*(longlong **)(param_1 + 0x7f0))
    ;
    if (cVar1 != '\0') {
      FUN_00414b50(&local_18,L".corner");
    }
    if (param_3 == '\0') {
      FUN_00416ba0(&local_20,local_18,L".refresult.tr");
    }
    else {
      FUN_00416ba0(&local_20,local_18,L".testresult.tr");
    }
    local_39 = 6;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    if (iVar2 == 2) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))
                        (*(longlong **)(param_1 + 0x7f0));
      if (cVar1 != '\0') {
        FUN_00414b50(&local_18,L".corner");
      }
      if (param_3 == '\0') {
        FUN_00416ba0(&local_20,local_18,L".refresult.ac");
      }
      else {
        FUN_00416ba0(&local_20,local_18,L".testresult.ac");
      }
      local_39 = 8;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                        (*(longlong **)(param_1 + 0x838));
      if (iVar2 == 1) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))
                          (*(longlong **)(param_1 + 0x7f0));
        if (cVar1 != '\0') {
          FUN_00414b50(&local_18,L".corner");
        }
        if (param_3 == '\0') {
          FUN_00416ba0(&local_20,local_18,L".refresult.dc");
        }
        else {
          FUN_00416ba0(&local_20,local_18,L".testresult.dc");
        }
        local_39 = 1;
      }
    }
  }
  lVar3 = FUN_006dd390(param_2);
  iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x10),&LAB_01302094);
  if (iVar2 == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),local_30);
    FUN_00416cd0(&local_10,4,local_30[0],&LAB_01302094,*(undefined8 *)(param_2 + 0x10),local_20);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_38);
    lVar3 = FUN_006dd390(param_2);
    FUN_00416cd0(&local_10,6,local_38,&LAB_01302094,*(undefined8 *)(lVar3 + 0x10),&LAB_01302094,
                 *(undefined8 *)(param_2 + 0x10),local_20);
  }
  FUN_013018f0(param_1,local_10,local_39);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_20,3);
  return;
}

