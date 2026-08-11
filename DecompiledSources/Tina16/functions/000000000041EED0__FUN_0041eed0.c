/* Ghidra address: 0041eed0 */
/* Ghidra symbol: FUN_0041eed0 */


undefined8 FUN_0041eed0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  local_30 = FUN_0041e250(param_1,(longlong)((iVar1 + 1) * 2));
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (iVar1 < 1) {
    local_30 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    uVar2 = FUN_00416740(param_2);
    FUN_00409a70(uVar2,local_30,(longlong)((iVar1 + 1) * 2));
  }
  return local_30;
}

