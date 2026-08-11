/* Ghidra address: 00fd5790 */
/* Ghidra symbol: FUN_00fd5790 */


int FUN_00fd5790(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(local_res10,local_res10[0]);
  iVar5 = 1;
  bVar1 = 1;
  while( true ) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x28))(*(longlong **)(param_1 + 2000));
    if (!(bool)(bVar1 & iVar5 < iVar3)) break;
    (**(code **)(**(longlong **)(param_1 + 2000) + 0x18))
              (*(longlong **)(param_1 + 2000),local_30,iVar5);
    iVar5 = iVar5 + 1;
    local_64 = FUN_004170c0(local_res10[0],local_30[0],1);
    if (local_64 != 0) {
      if (1 < local_64) {
        local_64 = local_64 + -1;
      }
      iVar2 = FUN_004170c0(&DAT_00fd5a9c,local_30[0],1);
      iVar3 = 0;
      if (local_30[0] != 0) {
        iVar3 = *(int *)(local_30[0] + -4);
      }
      FUN_005b8850(&local_38,local_30[0],(iVar3 - local_64) + 1);
      FUN_005b8820(&local_40,local_38,(iVar2 - local_64) + -1);
      FUN_00414b50(&local_38,local_40);
      FUN_0043ea00(&local_48,local_38);
      FUN_00414b50(&local_38,local_48);
      iVar3 = 0;
      if (local_res10[0] != 0) {
        iVar3 = *(int *)(local_res10[0] + -4);
      }
      iVar4 = 0;
      if (local_38 != 0) {
        iVar4 = *(int *)(local_38 + -4);
      }
      if (iVar3 == iVar4) {
        iVar3 = 0;
        if (local_30[0] != 0) {
          iVar3 = *(int *)(local_30[0] + -4);
        }
        FUN_005b8850(&local_38,local_30[0],(iVar3 - iVar2) + -3);
        FUN_005b8820(&local_50,local_38,10);
        FUN_00414b50(&local_38,local_50);
        FUN_0043ea00(&local_58,local_38);
        FUN_00414b50(&local_38,local_58);
        iVar3 = FUN_004170c0(&DAT_00fd5ab0,local_38,1);
        if (iVar3 != 0) {
          FUN_005b8820(&local_60,local_38,iVar3 + -1);
          FUN_00414b50(&local_38,local_60);
        }
        iVar3 = FUN_004170c0(&LAB_00fd5ac0,local_38,1);
        if (iVar3 == 0) {
          local_64 = FUN_0043fc00(local_38);
        }
        else {
          local_64 = FUN_00fd5ad0(param_1,local_38);
        }
        bVar1 = 0;
      }
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x28))(*(longlong **)(param_1 + 2000));
  if (iVar5 == iVar3) {
    local_68 = -1;
  }
  else {
    local_68 = local_64;
  }
  FUN_00414560(&local_60,7);
  FUN_00414480(local_res10);
  return local_68;
}

