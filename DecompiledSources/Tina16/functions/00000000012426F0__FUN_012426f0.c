/* Ghidra address: 012426f0 */
/* Ghidra symbol: FUN_012426f0 */


undefined8 FUN_012426f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(&DAT_0124276c,*param_2,1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,*param_2);
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_1,*param_2,1,iVar1 + -1);
    FUN_00416e20(param_2,1,iVar1);
  }
  return param_1;
}

