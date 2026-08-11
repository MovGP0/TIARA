/* Ghidra address: 012e19b0 */
/* Ghidra symbol: FUN_012e19b0 */


undefined1 FUN_012e19b0(undefined8 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short *local_res10 [3];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610();
  iVar1 = 0;
  while( true ) {
    iVar2 = 0;
    if (local_res10[0] != (short *)0x0) {
      iVar2 = *(int *)(local_res10[0] + -2);
    }
    if (iVar2 <= iVar1) goto code_r0x012e1a08;
    if (*local_res10[0] != local_res10[0][iVar1]) break;
    local_9 = 1;
    iVar1 = iVar1 + 1;
  }
  local_9 = 0;
code_r0x012e1a08:
  FUN_00414480(local_res10);
  return local_9;
}

