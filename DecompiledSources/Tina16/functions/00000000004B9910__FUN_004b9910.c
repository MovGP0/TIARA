/* Ghidra address: 004b9910 */
/* Ghidra symbol: FUN_004b9910 */


longlong FUN_004b9910(longlong param_1,char param_2,undefined8 param_3,ushort param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 *local_30;
  ushort local_1a;
  
  local_30 = auStack_a8;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if ((param_4 & 0xff00) == 0xff00) {
    local_1a = param_4 & 0xff;
    if (local_1a == 0xff) {
      local_1a = 0x10;
    }
    uVar3 = FUN_00440290(param_3,local_1a,param_5);
    FUN_004b9650(local_res8,0,uVar3);
    if (*(longlong *)(local_res8 + 8) == -1) {
      FUN_00441b80(&local_58,param_3);
      local_50 = local_58;
      local_48 = 0x11;
      uVar2 = thunk_FUN_03ce33a6();
      FUN_0044b630(&local_60,uVar2,0);
      local_40 = local_60;
      local_38 = 0x11;
      local_88 = 1;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004718e0,1,PTR_PTR_02005ba0,&local_50);
      FUN_004134c0(uVar3);
    }
  }
  else {
    uVar3 = FUN_00440210(param_3,param_4);
    FUN_004b9650(local_res8,0,uVar3);
    if (*(longlong *)(local_res8 + 8) == -1) {
      FUN_00441b80(&local_68,param_3);
      local_50 = local_68;
      local_48 = 0x11;
      uVar2 = thunk_FUN_03ce33a6();
      FUN_0044b630(&local_70,uVar2,0);
      local_40 = local_70;
      local_38 = 0x11;
      local_88 = 1;
      uVar3 = FUN_0044d8d0(&PTR_FUN_00471a10,1,PTR_DAT_02001140,&local_50);
      FUN_004134c0(uVar3);
    }
  }
  FUN_00414ad0(local_res8 + 0x10,param_3);
  FUN_00414560(&local_70,4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

