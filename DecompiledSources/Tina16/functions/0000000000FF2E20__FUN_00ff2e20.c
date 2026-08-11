/* Ghidra address: 00ff2e20 */
/* Ghidra symbol: FUN_00ff2e20 */


undefined8 FUN_00ff2e20(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar1 = 8;
  do {
    if (param_2 % 2 == 1) {
      FUN_00416ba0(&local_20,&DAT_00ff2f04,local_20);
    }
    else {
      FUN_00416ba0(&local_20,&DAT_00ff2f14,local_20);
    }
    param_2 = param_2 / 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00416cd0(param_1,3,&DAT_00ff2f24,local_20,&DAT_00ff2f38);
  FUN_00414480(&local_20);
  return param_1;
}

