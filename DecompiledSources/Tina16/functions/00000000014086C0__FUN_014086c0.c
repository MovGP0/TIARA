/* Ghidra address: 014086c0 */
/* Ghidra symbol: FUN_014086c0 */


undefined8 FUN_014086c0(undefined8 param_1,short *param_2)

{
  int iVar1;
  short *local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  while( true ) {
    iVar1 = 0;
    if (local_res10[0] != (short *)0x0) {
      iVar1 = *(int *)(local_res10[0] + -2);
    }
    if ((iVar1 < 2) || (*local_res10[0] != 0x30)) break;
    FUN_00416e20(local_res10,1,1);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

