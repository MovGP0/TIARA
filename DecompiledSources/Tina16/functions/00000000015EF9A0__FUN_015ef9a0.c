/* Ghidra address: 015ef9a0 */
/* Ghidra symbol: FUN_015ef9a0 */


void FUN_015ef9a0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = 0;
  if (local_res8[0] != 0) {
    iVar1 = *(int *)(local_res8[0] + -4);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    if (local_res8[0] != 0) {
      iVar1 = *(int *)(local_res8[0] + -4);
    }
    if (*param_2 <= iVar1) {
      *param_2 = *param_2 + 1;
    }
  }
  FUN_00414480(local_res8);
  return;
}

