/* Ghidra address: 00ae6c40 */
/* Ghidra symbol: FUN_00ae6c40 */


undefined1 FUN_00ae6c40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  longlong local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 *local_38;
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_60 = auStack_88;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_41 = 0;
  }
  else {
    local_68 = FUN_00610ca0(&PTR_FUN_00a90138,1);
    *(longlong *)(param_1 + 0xe8) = local_68;
    *(undefined8 *)(local_68 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x98) = param_2;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_00414480(param_1 + 0x10);
    FUN_00414480(param_1 + 0x18);
    local_41 = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    FUN_00ad47e0(param_1,0);
    *(undefined1 *)(param_1 + 0x80) = 0;
    local_50 = *(longlong *)(param_1 + 0x30);
    local_2c = *(int *)(*(longlong *)(local_50 + 0x28) + 8) - *(int *)(local_50 + 8);
    uVar1 = FUN_00610ca0(&PTR_FUN_00a691f8,1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    local_41 = FUN_00ae6a90(auStack_88);
    local_18 = (undefined8 *)(param_1 + 0x48);
    local_20 = *local_18;
    *local_18 = 0;
    FUN_00410f20(local_20);
    local_28 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(*(longlong *)(local_28 + 0x28) + 8) =
         *(longlong *)(local_28 + 8) + (longlong)local_2c;
    local_38 = (undefined8 *)(param_1 + 0xe8);
    local_40 = *local_38;
    *local_38 = 0;
    FUN_00410f20(local_40);
  }
  return local_41;
}

