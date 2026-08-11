/* Ghidra address: 00b696b0 */
/* Ghidra symbol: FUN_00b696b0 */


undefined8 FUN_00b696b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00415d10(local_30,((iVar1 * 2 + 2) / 3) * 4,0);
  uVar2 = FUN_00414df0(local_30);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  uVar3 = FUN_00416740(param_2);
  FUN_00b693f0(uVar3,uVar2,iVar1 * 2);
  FUN_00416880(param_1,local_30[0]);
  FUN_004144d0(local_30);
  return param_1;
}

