/* Ghidra address: 008783b0 */
/* Ghidra symbol: FUN_008783b0 */


undefined8 FUN_008783b0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0043f750(&local_10,*(undefined1 *)(param_2 + param_3));
  FUN_0043f750(&local_18,*(undefined1 *)(param_2 + (param_3 + 1)));
  FUN_0043f750(&local_20,*(undefined1 *)(param_2 + (param_3 + 2)));
  FUN_0043f750(&local_28,*(undefined1 *)(param_2 + (param_3 + 3)));
  FUN_00416cd0(param_1,7,local_10,&LAB_008784f8,local_18,&LAB_008784f8,local_20,&LAB_008784f8,
               local_28);
  FUN_00414560(&local_28,4);
  return param_1;
}

