/* Ghidra address: 018b7790 */
/* Ghidra symbol: FUN_018b7790 */


undefined8 FUN_018b7790(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  iVar2 = 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (3 < iVar1) {
    FUN_00416ba0(local_20,param_3,&DAT_018b7938);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                      (*(longlong **)(param_1 + 8),local_20[0]);
    FUN_00416ba0(&local_28,param_3,&LAB_018b7948);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),local_28)
    ;
    iVar2 = iVar2 - iVar1;
    do {
      iVar2 = iVar2 + -1;
      FUN_0043f750(&local_38,iVar2);
      FUN_00416ba0(&local_30,param_3,local_38);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                        (*(longlong **)(param_1 + 8),local_30);
    } while (iVar1 == -1);
  }
  while( true ) {
    FUN_0043f750(&local_48,iVar2);
    FUN_00416ba0(&local_40,param_3,local_48);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),local_40)
    ;
    if (iVar1 == -1) break;
    iVar2 = iVar2 + 1;
  }
  FUN_0043f750(&local_50,iVar2);
  FUN_00416ba0(param_2,param_3,local_50);
  FUN_00414560(&local_50,7);
  return param_2;
}

