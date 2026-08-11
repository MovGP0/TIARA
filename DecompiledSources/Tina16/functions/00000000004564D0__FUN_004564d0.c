/* Ghidra address: 004564d0 */
/* Ghidra symbol: FUN_004564d0 */


int FUN_004564d0(undefined8 *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416780(&local_10,param_2);
  iVar1 = FUN_004170c0(local_10,*param_1,param_3 + 1);
  FUN_00414480(&local_10);
  return iVar1 + -1;
}

