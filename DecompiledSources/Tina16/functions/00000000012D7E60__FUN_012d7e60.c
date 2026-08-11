/* Ghidra address: 012d7e60 */
/* Ghidra symbol: FUN_012d7e60 */


void FUN_012d7e60(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*param_3 == '\0') {
    if (param_3[1] == '\0') {
      FUN_012ccff0(*(undefined8 *)(param_1 + 0x80),local_res10[0],FUN_01320550);
    }
    else {
      FUN_012ccff0(*(undefined8 *)(param_1 + 0x80),local_res10[0],FUN_01390b40);
    }
  }
  else {
    FUN_012ccff0(*(undefined8 *)(param_1 + 0x80),local_res10[0],FUN_013411e0);
  }
  FUN_00414480(local_res10);
  return;
}

