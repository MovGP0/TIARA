/* Ghidra address: 00e07960 */
/* Ghidra symbol: FUN_00e07960 */


undefined2 FUN_00e07960(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_22;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(int *)(param_1 + 0x40) == 0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8)),
     *(int *)(param_1 + 0x18) < iVar1)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),local_20,*(undefined4 *)(param_1 + 0x18));
    FUN_00414ad0(param_1 + 0x10,local_20[0]);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined2 *)(param_1 + 0x44) = 10;
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
    }
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
        }
        *(undefined2 *)(param_1 + 0x42 + (longlong)(iVar2 + 1) * 2) =
             *(undefined2 *)
              (*(longlong *)(param_1 + 0x10) + -2 + (longlong)((iVar3 - iVar2) + 1) * 2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x40) < 1) {
    local_22 = 0;
  }
  else {
    local_22 = *(undefined2 *)(param_1 + 0x42 + (longlong)*(int *)(param_1 + 0x40) * 2);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  FUN_00414480(local_20);
  return local_22;
}

