/* Ghidra address: 01ce7c10 */
/* Ghidra symbol: FUN_01ce7c10 */


undefined8 * FUN_01ce7c10(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01ce7ba0(param_1,local_res10[0]);
  iVar1 = FUN_004170c0(&LAB_01ce7cc4,*param_1,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&LAB_01ce7cc4,*param_1,1);
    FUN_00416dc0(param_1,*param_1,1,iVar1 + -1);
  }
  FUN_00414480(local_res10);
  return param_1;
}

