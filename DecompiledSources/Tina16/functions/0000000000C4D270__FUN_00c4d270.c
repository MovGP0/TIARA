/* Ghidra address: 00c4d270 */
/* Ghidra symbol: FUN_00c4d270 */


void FUN_00c4d270(undefined8 *param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_00410ae0(*param_1,&local_10);
  FUN_00416ad0(&local_10,L" destroyed");
  FUN_00c4c420(local_10);
  FUN_00410f20(param_1[0xf]);
  FUN_004d23a0(param_1,param_2 & 0xfc);
  FUN_00414480(&local_10);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

