/* Ghidra address: 00a5b480 */
/* Ghidra symbol: FUN_00a5b480 */


undefined8 FUN_00a5b480(undefined8 param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (short *)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  if (((iVar1 < 2) || (param_2[(longlong)iVar1 + -1] != *param_2)) ||
     ((*param_2 != 0x27 && (*param_2 != 0x22)))) {
    FUN_00414ad0(param_1);
  }
  else {
    iVar1 = 0;
    if (param_2 != (short *)0x0) {
      iVar1 = *(int *)(param_2 + -2);
    }
    FUN_00416dc0(param_1,param_2,2,iVar1 + -2);
  }
  return param_1;
}

