/* Ghidra address: 01557ef0 */
/* Ghidra symbol: FUN_01557ef0 */


void FUN_01557ef0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_01557b20(param_1,local_res10[0],param_3);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  iVar1 = iVar1 / 0x32;
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00414b50(&local_30,L" signal ");
      iVar3 = 0;
      do {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_40,iVar4);
        FUN_00416ad0(&local_30,local_40[0]);
        if (iVar3 < 0x31) {
          FUN_00416ad0(&local_30,&DAT_015581a4);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x32);
      FUN_00416cd0(&local_30,4,local_30,&DAT_015581b8,local_res10[0],&DAT_015581cc);
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),local_30);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  iVar1 = iVar1 % 0x32;
  FUN_00414b50(&local_30,L" signal ");
  if (0 < iVar1) {
    local_4c = 0;
    iVar3 = iVar1;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,iVar4);
        FUN_00416ad0(&local_30,local_48);
        if (local_4c < iVar1 + -1) {
          FUN_00416ad0(&local_30,&DAT_015581a4);
        }
        iVar4 = iVar4 + 1;
        local_4c = local_4c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00416cd0(&local_30,4,local_30,&DAT_015581b8,local_res10[0],&DAT_015581cc);
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_30)
    ;
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

