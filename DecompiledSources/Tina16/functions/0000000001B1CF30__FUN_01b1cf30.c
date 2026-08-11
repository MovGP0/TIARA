/* Ghidra address: 01b1cf30 */
/* Ghidra symbol: FUN_01b1cf30 */


void FUN_01b1cf30(char *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*param_1 == '\0') {
    FUN_0072d440(local_res10[0],1,4,0);
    *param_1 = '\x01';
  }
  FUN_00414480(local_res10);
  return;
}

