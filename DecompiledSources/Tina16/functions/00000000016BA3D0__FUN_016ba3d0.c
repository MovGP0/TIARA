/* Ghidra address: 016ba3d0 */
/* Ghidra symbol: FUN_016ba3d0 */


undefined1 FUN_016ba3d0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004144d0(&local_20);
  iVar2 = 0;
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  FUN_016b9db0(param_1);
  if (*(char *)(param_1 + 0x9a0) != '\0') {
    if (0 < iVar1) {
      do {
        FUN_004153d0(local_30,*(undefined1 *)(param_1 + 0x9a0),0);
        FUN_004155b0(&local_20,local_30[0]);
        FUN_016b9d20(param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_00416880(&local_38,local_20);
    iVar1 = FUN_00416db0(local_38,local_res10[0]);
    local_39 = iVar1 == 0;
    if (!(bool)local_39) {
      FUN_016b9df0(param_1);
    }
  }
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  FUN_004144d0(&local_20);
  FUN_00414480(local_res10);
  return local_39;
}

