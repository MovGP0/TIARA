/* Ghidra address: 019ce060 */
/* Ghidra symbol: FUN_019ce060 */


void FUN_019ce060(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_019cd9a0(param_1,local_20,*(int *)(param_1 + 0x10) + -1,L"expected");
  uVar1 = FUN_0043fc00(local_20[0]);
  if ((param_2 & 0x3d11) == uVar1) {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  else {
    FUN_0043fba0(&local_30,param_2,4);
    FUN_0043fba0(&local_38,uVar1,4);
    FUN_019cdc10(param_1,L"Failed (by code)",local_30,local_38);
  }
  FUN_00414560(&local_38,4);
  return;
}

