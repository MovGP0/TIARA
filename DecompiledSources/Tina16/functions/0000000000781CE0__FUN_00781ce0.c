/* Ghidra address: 00781ce0 */
/* Ghidra symbol: FUN_00781ce0 */


undefined8 FUN_00781ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined1 *local_50;
  longlong local_40;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = auStack_b8;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_78 = 0;
  FUN_00441a10(&local_78,param_2);
  FUN_00780e40(param_1,&local_70,local_78,0);
  local_40 = local_58;
  if (local_58 == 0) {
    local_80 = 0x11;
    local_98 = 0;
    local_88 = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_020015f0,&local_88);
    FUN_004134c0(uVar1);
  }
  else {
    local_30 = local_58;
    local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
    local_28 = FUN_00780c70(param_1,local_20,local_38);
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_78);
  FUN_00417740(&local_70,&DAT_0075cb10);
  return local_28;
}

