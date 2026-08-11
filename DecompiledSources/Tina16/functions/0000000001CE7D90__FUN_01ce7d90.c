/* Ghidra address: 01ce7d90 */
/* Ghidra symbol: FUN_01ce7d90 */


undefined8 * FUN_01ce7d90(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_01ce7ee4,local_res10[0],1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_01ce7ef4,local_res10[0],1);
    if (0 < iVar1) {
      iVar1 = FUN_004170c0(&DAT_01ce7ee4,local_res10[0],1);
      iVar2 = FUN_004170c0(&DAT_01ce7ef4,local_res10[0],1);
      iVar3 = FUN_004170c0(&DAT_01ce7ee4,local_res10[0],1);
      FUN_00416dc0(param_1,local_res10[0],iVar1 + 1,(iVar2 - iVar3) + -1);
      goto LAB_01ce7e5b;
    }
  }
  FUN_00414480(param_1);
LAB_01ce7e5b:
  FUN_00450070(&local_20,*param_1,&DAT_01ce7f04,0,1);
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return param_1;
}

