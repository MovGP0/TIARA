/* Ghidra address: 01c27510 */
/* Ghidra symbol: FUN_01c27510 */


undefined8 FUN_01c27510(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0043ea00(local_20,*param_2);
  FUN_00414ad0(param_2,local_20[0]);
  iVar1 = FUN_004170c0(&DAT_01c27614,*param_2,1);
  iVar2 = FUN_004170c0(&LAB_01c27624,*param_2,1);
  iVar3 = iVar2;
  if (((iVar1 != 0) && (iVar3 = iVar1, iVar2 != 0)) && (iVar2 <= iVar1)) {
    iVar3 = iVar2;
  }
  if (iVar3 < 1) {
    FUN_00414ad0(param_1,*param_2);
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_1,*param_2,1,iVar3 + -1);
    FUN_00416e20(param_2,1,iVar3);
  }
  FUN_00414480(local_20);
  return param_1;
}

