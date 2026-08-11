/* Ghidra address: 0110d0f0 */
/* Ghidra symbol: FUN_0110d0f0 */


void FUN_0110d0f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((0 < iVar1) && (-1 < *(int *)(param_1 + 0x1c))) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) <= iVar1 + -1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      FUN_0110d1d0(param_1,uVar2);
    }
  }
  FUN_00414560(&local_20,2);
  FUN_00414520(&local_10);
  return;
}

