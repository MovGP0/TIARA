/* Ghidra address: 009e1590 */
/* Ghidra symbol: FUN_009e1590 */


undefined8 FUN_009e1590(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = 0;
    if (local_res10[0] != 0) {
      iVar1 = *(int *)(local_res10[0] + -4);
    }
    bVar2 = *(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) != 0x3b;
  }
  if (bVar2) {
    FUN_00416ba0(param_1,local_res10[0],&LAB_009e1634);
  }
  else {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return param_1;
}

