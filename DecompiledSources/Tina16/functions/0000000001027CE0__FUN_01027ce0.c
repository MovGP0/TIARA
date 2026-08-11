/* Ghidra address: 01027ce0 */
/* Ghidra symbol: FUN_01027ce0 */


undefined8 FUN_01027ce0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar1 = 8;
  do {
    if (param_2 % 2 == 1) {
      FUN_00416ba0(&local_20,&DAT_01027dc4,local_20);
    }
    else {
      FUN_00416ba0(&local_20,&DAT_01027dd4,local_20);
    }
    param_2 = param_2 / 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00416cd0(param_1,3,&DAT_01027de4,local_20,&DAT_01027df8);
  FUN_00414480(&local_20);
  return param_1;
}

