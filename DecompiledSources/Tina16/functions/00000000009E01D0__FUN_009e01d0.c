/* Ghidra address: 009e01d0 */
/* Ghidra symbol: FUN_009e01d0 */


undefined8 FUN_009e01d0(undefined8 param_1,longlong param_2,short param_3,char param_4)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00414ad0(param_1,param_2);
  if (param_2 == 0) {
    if (param_4 != '\0') {
      FUN_00416780(&local_10,param_3);
      FUN_00416ba0(param_1,0,local_10);
    }
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    if (*(short *)(param_2 + -2 + (longlong)iVar1 * 2) != param_3) {
      FUN_00416780(&local_18,param_3);
      FUN_00416ba0(param_1,param_2,local_18);
    }
  }
  FUN_00414560(&local_18,2);
  return param_1;
}

