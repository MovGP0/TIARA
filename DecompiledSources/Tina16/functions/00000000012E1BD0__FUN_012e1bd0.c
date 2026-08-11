/* Ghidra address: 012e1bd0 */
/* Ghidra symbol: FUN_012e1bd0 */


undefined2 FUN_012e1bd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined2 local_a;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_a = 0x20;
  iVar1 = FUN_004170c0(&DAT_012e1c84,local_res10[0],1);
  if (iVar1 < 1) {
    iVar1 = FUN_004170c0(&LAB_012e1c94,local_res10[0],1);
    if (0 < iVar1) {
      local_a = 0x3b;
    }
  }
  else {
    local_a = 0x2c;
  }
  FUN_00414480(local_res10);
  return local_a;
}

