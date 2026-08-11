/* Ghidra address: 0103c9d0 */
/* Ghidra symbol: FUN_0103c9d0 */


undefined8 FUN_0103c9d0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar1 = 8;
  do {
    if (param_2 % 2 == 1) {
      FUN_00416ba0(&local_20,&DAT_0103caa4,local_20);
    }
    else {
      FUN_00416ba0(&local_20,&DAT_0103cab4,local_20);
    }
    param_2 = param_2 / 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00416ba0(param_1,local_20,&LAB_0103cac4);
  FUN_00414480(&local_20);
  return param_1;
}

