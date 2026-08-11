/* Ghidra address: 01318ad0 */
/* Ghidra symbol: FUN_01318ad0 */


void FUN_01318ad0(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*param_3 == '\0') {
    FUN_012ccff0(*(undefined8 *)(param_1 + 0x90),local_res10[0],FUN_01320550);
  }
  else {
    FUN_012ccff0(*(undefined8 *)(param_1 + 0x90),local_res10[0],FUN_013411e0);
  }
  FUN_00414480(local_res10);
  return;
}

