/* Ghidra address: 006d8ca0 */
/* Ghidra symbol: FUN_006d8ca0 */


void FUN_006d8ca0(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  char local_res18 [16];
  
  local_res18[0] = param_3;
  if (param_4 != '\0') {
    FUN_00648400(local_res18);
  }
  if (local_res18[0] == '\x01') {
    FUN_00416ea0(&LAB_006d8d20,param_2,1);
  }
  else if (local_res18[0] == '\x02') {
    FUN_00416ea0(&DAT_006d8d10,param_2,1);
  }
  return;
}

