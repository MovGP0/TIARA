/* Ghidra address: 0155fe70 */
/* Ghidra symbol: FUN_0155fe70 */


undefined8 FUN_0155fe70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414b50(&local_10,local_res18[0]);
  while( true ) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                      (*(longlong **)(param_1 + 0x58),local_10);
    if (iVar1 < 0) break;
    FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_10,3,local_res18[0],&LAB_0155ffb0,local_20[0]);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))(*(longlong **)(param_1 + 0x58),local_10);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

