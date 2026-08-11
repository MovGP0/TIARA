/* Ghidra address: 01073050 */
/* Ghidra symbol: FUN_01073050 */


undefined8 FUN_01073050(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x6f0);
  if ((((iVar1 == 7) || (iVar1 == 5)) || (iVar1 == 8)) || (iVar1 == 6)) {
    if (*(int *)(param_1 + 0x6ec) == 2) {
      FUN_0043f750(&local_10,param_3);
    }
    else {
      FUN_0043fba0(local_20,param_3,8);
      FUN_00416ba0(&local_10,&DAT_01073174,local_20[0]);
    }
  }
  else if (iVar1 == 4) {
    FUN_00b8fd60(&local_10,(double)**(float **)(param_1 + 0x6e0),*PTR_DAT_02005310,1,1);
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

