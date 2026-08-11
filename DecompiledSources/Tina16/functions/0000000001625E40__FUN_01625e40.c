/* Ghidra address: 01625e40 */
/* Ghidra symbol: FUN_01625e40 */


undefined8 FUN_01625e40(undefined8 param_1,short *param_2)

{
  short *local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(&local_10,local_res10[0],&DAT_01625f14,&DAT_01625f24,1);
  FUN_00414b50(local_res10,local_10);
  if (*local_res10[0] == 0x5f) {
    FUN_00416e20(local_res10,1,1);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

