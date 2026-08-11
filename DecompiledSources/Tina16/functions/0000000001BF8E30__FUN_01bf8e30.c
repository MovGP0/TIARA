/* Ghidra address: 01bf8e30 */
/* Ghidra symbol: FUN_01bf8e30 */


void FUN_01bf8e30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20 [2];
  
  local_30 = auStack_78;
  local_38 = 0;
  local_20[0] = 0;
  FUN_004c1ed0(param_2,local_20);
  if (local_20[0] != 0) {
    local_24 = (**(code **)(*DAT_02111470 + 0xb0))(DAT_02111470,local_20[0]);
    if (local_24 < 0) {
      FUN_0041ddd0(&local_38,PTR_PTR_02003810);
      local_48 = local_20[0];
      local_40 = 0x11;
      local_58 = 0;
      uVar1 = FUN_0044d530(&PTR_FUN_004334c0,1,local_38,&local_48);
      FUN_004134c0(uVar1);
    }
    else {
      uVar1 = FUN_01c07a90(DAT_02111470,local_24);
      FUN_01bf90c0(param_1,uVar1);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

