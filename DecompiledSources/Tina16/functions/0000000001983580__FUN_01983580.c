/* Ghidra address: 01983580 */
/* Ghidra symbol: FUN_01983580 */


undefined8 FUN_01983580(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_004170c0(&LAB_01983644,*param_3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*param_3 != 0) {
      iVar1 = *(int *)(*param_3 + -4);
    }
    iVar1 = iVar1 + 1;
  }
  FUN_00416dc0(local_20,*param_3,1,iVar1 + -1);
  FUN_0043ea00(param_2,local_20[0]);
  FUN_00416e20(param_3,1,iVar1);
  FUN_00414480(local_20);
  return param_2;
}

