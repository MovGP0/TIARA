/* Ghidra address: 00b23610 */
/* Ghidra symbol: FUN_00b23610 */


undefined8 FUN_00b23610(undefined8 param_1,undefined1 *param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415eb0(&local_10,param_2 + 9);
  FUN_00b23420(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],local_10,
               param_2[6],*(undefined2 *)(param_2 + 7));
  FUN_00414520(&local_10);
  return param_1;
}

