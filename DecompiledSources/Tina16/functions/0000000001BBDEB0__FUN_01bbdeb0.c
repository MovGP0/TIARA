/* Ghidra address: 01bbdeb0 */
/* Ghidra symbol: FUN_01bbdeb0 */


undefined8 FUN_01bbdeb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01bbdd70(param_1,&local_18,param_4,1);
  FUN_00414b50(&local_10,local_18);
  FUN_00416cd0(&local_10,3,local_10,&LAB_01bbdf78,*(undefined8 *)(param_3 + 8));
  FUN_00414ad0(param_2,local_10);
  FUN_00414560(&local_18,2);
  return param_2;
}

