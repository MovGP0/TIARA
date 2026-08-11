/* Ghidra address: 01b813d0 */
/* Ghidra symbol: FUN_01b813d0 */


undefined8 FUN_01b813d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&LAB_01b81474,local_res10[0],1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  else {
    FUN_00416dc0(param_1,local_res10[0],iVar1 + 2,0xff);
  }
  FUN_00414480(local_res10);
  return param_1;
}

