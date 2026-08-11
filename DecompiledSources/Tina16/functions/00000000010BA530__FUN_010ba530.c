/* Ghidra address: 010ba530 */
/* Ghidra symbol: FUN_010ba530 */


undefined8 FUN_010ba530(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_004170c0(&LAB_010ba604,*param_2,1);
  if (iVar1 < 1) {
    FUN_0043ea00(param_1,*param_2);
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(local_20,*param_2,1,iVar1 + -1);
    FUN_0043ea00(param_1,local_20[0]);
    FUN_00416e20(param_2,1,iVar1);
  }
  FUN_00414480(local_20);
  return param_1;
}

