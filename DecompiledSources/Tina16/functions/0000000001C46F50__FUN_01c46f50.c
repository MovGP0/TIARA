/* Ghidra address: 01c46f50 */
/* Ghidra symbol: FUN_01c46f50 */


uint FUN_01c46f50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  uint local_38;
  undefined1 local_34 [4];
  longlong local_30;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  uint local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_14 = 0;
  FUN_00416ba0(&local_20,local_res10[0],L"\\tina.exe");
  FUN_00414e00(&local_20);
  uVar2 = FUN_00416740(local_20);
  local_24 = thunk_FUN_03d5a978(uVar2,&local_28);
  if (local_24 != 0) {
    local_10 = FUN_004095c0(local_24);
    uVar2 = FUN_00416740(local_20);
    iVar1 = thunk_FUN_0412830f(uVar2,local_28,local_24,local_10);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_03c93605(local_10,&LAB_01c470a8,&local_30,local_34);
      if (iVar1 != 0) {
        local_38 = *(uint *)(local_30 + 8);
        local_14 = local_38 >> 0x10;
      }
    }
    FUN_004095f0(local_10);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_14;
}

