/* Ghidra address: 007f9a80 */
/* Ghidra symbol: FUN_007f9a80 */


bool FUN_007f9a80(undefined2 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00416780(&local_10,param_1);
  FUN_007e8e80(&local_18,param_2);
  iVar1 = FUN_0043e510(local_10,local_18,1);
  FUN_00414560(&local_18,2);
  return iVar1 == 0;
}

