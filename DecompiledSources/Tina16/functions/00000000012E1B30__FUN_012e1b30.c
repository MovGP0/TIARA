/* Ghidra address: 012e1b30 */
/* Ghidra symbol: FUN_012e1b30 */


int FUN_012e1b30(undefined8 param_1,undefined8 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined8 local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_4 == 0) {
    iVar1 = FUN_012e1a40(param_1,local_res10[0],param_3);
    local_c = iVar1 + 1;
  }
  else if (param_4 == 1) {
    local_c = FUN_012e1a40(param_1,local_res10[0],param_3);
  }
  FUN_00414480(local_res10);
  return local_c;
}

