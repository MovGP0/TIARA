/* Ghidra address: 00a73430 */
/* Ghidra symbol: FUN_00a73430 */


undefined8 FUN_00a73430(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004170c0(&DAT_00a7353c,*param_3,1);
  iVar2 = FUN_004170c0(&DAT_00a7354c,*param_3,1);
  if ((iVar1 < 1) || ((iVar2 != 0 && (iVar2 <= iVar1)))) {
    if (iVar2 < 1) {
      FUN_0043ea00(param_2,*param_3);
      FUN_00414480(param_3);
    }
    else {
      FUN_00416dc0(param_2,*param_3,1,iVar2 + -1);
      FUN_00416e20(param_3,1,iVar2);
    }
  }
  else {
    FUN_00416dc0(param_2,*param_3,1,iVar1 + -1);
    FUN_00416e20(param_3,1,iVar1);
  }
  while( true ) {
    iVar1 = 0;
    if (*param_3 != 0) {
      iVar1 = *(int *)(*param_3 + -4);
    }
    if ((iVar1 < 1) || ((*(short *)*param_3 != 0x2c && (*(short *)*param_3 != 0x20)))) break;
    FUN_00416e20(param_3,1,1);
  }
  return param_2;
}

