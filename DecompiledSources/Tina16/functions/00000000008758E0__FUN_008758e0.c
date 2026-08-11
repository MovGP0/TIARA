/* Ghidra address: 008758e0 */
/* Ghidra symbol: FUN_008758e0 */


undefined8 * FUN_008758e0(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_0043fba0(param_1,*param_2,4);
  iVar1 = 7;
  do {
    param_2 = param_2 + 1;
    FUN_0043fba0(&local_20,*param_2,4);
    FUN_00416cd0(param_1,3,*param_1,&LAB_008759a4,local_20);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00414480(&local_20);
  return param_1;
}

