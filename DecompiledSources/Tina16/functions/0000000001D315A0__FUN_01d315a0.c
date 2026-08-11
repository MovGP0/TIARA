/* Ghidra address: 01d315a0 */
/* Ghidra symbol: FUN_01d315a0 */


void FUN_01d315a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  FUN_01d31740(param_1,iVar2);
  if (0 < iVar2) {
    uVar1 = FUN_00415ab0(local_res10[0]);
    FUN_01d311c0(param_1,uVar1,iVar2);
  }
  FUN_004144d0(local_res10);
  return;
}

