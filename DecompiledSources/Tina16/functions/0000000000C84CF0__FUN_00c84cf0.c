/* Ghidra address: 00c84cf0 */
/* Ghidra symbol: FUN_00c84cf0 */


undefined8 *
FUN_00c84cf0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined2 *local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = (undefined2 *)0x0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),local_20,param_3);
  uVar1 = *local_20[0];
  iVar2 = 0;
  if (local_20[0] != (undefined2 *)0x0) {
    iVar2 = *(int *)(local_20[0] + -2);
  }
  FUN_00416dc0(local_20,local_20[0],2,iVar2 + -1);
  iVar2 = FUN_004170c0(L"id_group",local_20[0],1);
  if (iVar2 < 1) {
    FUN_004168e0(param_2,local_20[0]);
  }
  else {
    FUN_00c849c0(param_1,param_2,local_20[0],local_res20);
  }
  FUN_00416780(local_30,uVar1);
  FUN_004168b0(&local_38,*param_2);
  FUN_00416ad0(local_30,local_38);
  FUN_004168e0(param_2,local_30[0]);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return param_2;
}

