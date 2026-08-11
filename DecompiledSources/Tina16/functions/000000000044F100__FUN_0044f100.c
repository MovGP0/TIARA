/* Ghidra address: 0044f100 */
/* Ghidra symbol: FUN_0044f100 */


undefined4 FUN_0044f100(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_34 [4];
  longlong local_30;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = 0;
  local_14 = 0xffffffff;
  FUN_00414b50(&local_20,param_1);
  FUN_00414e00(&local_20);
  uVar2 = FUN_00416740(local_20);
  local_24 = thunk_FUN_03d5a978(uVar2,&local_28);
  if (local_24 != 0) {
    local_10 = FUN_004095c0(local_24);
    uVar2 = FUN_00416740(local_20);
    iVar1 = thunk_FUN_0412830f(uVar2,local_28,local_24,local_10);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_03c93605(local_10,&LAB_0044f208,&local_30,local_34);
      if (iVar1 != 0) {
        local_14 = *(undefined4 *)(local_30 + 8);
      }
    }
    FUN_004095f0(local_10);
  }
  FUN_00414480(&local_20);
  return local_14;
}

