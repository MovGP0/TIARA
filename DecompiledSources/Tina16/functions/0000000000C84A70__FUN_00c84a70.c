/* Ghidra address: 00c84a70 */
/* Ghidra symbol: FUN_00c84a70 */


undefined8 * FUN_00c84a70(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 *local_28;
  longlong local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = (undefined2 *)0x0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),&local_28,param_3);
  uVar1 = *local_28;
  iVar2 = 0;
  if (local_28 != (undefined2 *)0x0) {
    iVar2 = *(int *)(local_28 + -2);
  }
  FUN_00416dc0(&local_28,local_28,2,iVar2 + -1);
  FUN_00414480(&local_20);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  if (param_3 < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_20,param_3);
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    FUN_00416dc0(&local_20,local_20,2,iVar2 + -1);
  }
  iVar2 = FUN_004170c0(L"id_group",local_28,1);
  if ((iVar2 < 1) || (local_20 != 0)) {
    iVar2 = FUN_004170c0(L"id_group",local_28,1);
    if ((iVar2 == 0) && (local_20 == 0)) {
      FUN_00414b50(&local_20,local_28);
      FUN_00416780(&local_38,uVar1);
      FUN_00416ba0(param_2,local_38,local_20);
      if (local_20 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))
                  (*(longlong **)(param_1 + 0x18),*param_2);
      }
    }
    else {
      FUN_00416780(&local_40,uVar1);
      FUN_00416ba0(param_2,local_40,local_20);
    }
  }
  else {
    FUN_00c848f0(param_1,&local_20,local_28,local_res20);
    FUN_00416780(&local_30,uVar1);
    FUN_00416ba0(param_2,local_30,local_20);
    if (local_20 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))(*(longlong **)(param_1 + 0x18),*param_2)
      ;
    }
  }
  FUN_00414560(&local_40,5);
  FUN_00414480(&local_res20);
  return param_2;
}

