/* Ghidra address: 0176bb40 */
/* Ghidra symbol: FUN_0176bb40 */


void FUN_0176bb40(longlong param_1,longlong *param_2,undefined2 param_3,ushort param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong ***local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  byte local_26;
  byte local_25;
  int local_24;
  longlong ***local_20 [2];
  
  local_30 = auStack_88;
  local_40 = 0;
  local_38 = 0;
  local_68 = param_5;
  FUN_017690a0(param_1,param_2,param_3,param_4);
  if (param_4 < 0x13) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd) = 1;
  }
  FUN_01d30f00(*param_2,&local_24,4);
  if (local_24 < 1) {
    *(undefined1 *)(param_1 + 0x62) = 1;
    FUN_01768520(&local_38,*(undefined8 *)(param_1 + 0x48),*param_2);
    uVar2 = FUN_014af1b0(local_38,0);
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  else {
    local_20[0] = (longlong ***)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (*(code *)(*local_20[0])[1])(local_20[0],local_24);
    FUN_01d32710(*param_2,local_20[0],local_24);
    if (0x13 < param_4) {
      FUN_01d30f00(*param_2,&local_26,1);
      *(byte *)(param_1 + 0xb0) = local_26 & 1;
      local_25 = local_26 & 2;
    }
    if (*(char *)(*param_2 + 0x7e) == '\0') {
      if ((*(char *)(param_1 + 0xb0) == '\0') || (local_25 != 0)) {
        local_68 = CONCAT31(local_68._1_3_,param_4 < 0x46);
        local_60 = local_20[0];
        local_58 = param_1 + 8;
        local_50 = 0;
        FUN_0176b300(*(undefined8 *)(*param_2 + 0x40),*(undefined8 *)(*param_2 + 0x50),
                     *(undefined8 *)(param_1 + 0x10),*(undefined1 *)(*param_2 + 0x7a));
      }
      else {
        local_68 = CONCAT31(local_68._1_3_,param_4 < 0x46);
        local_60 = (longlong ***)local_20;
        local_58 = param_1 + 8;
        local_50 = 0;
        FUN_0176b5b0(*(undefined8 *)(*param_2 + 0x40),*(undefined8 *)(*param_2 + 0x50),
                     *(undefined8 *)(param_1 + 0x10),*(undefined1 *)(*param_2 + 0x7a));
      }
    }
    FUN_00410f20(local_20[0]);
  }
  FUN_0176b630(&local_40,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 8));
  FUN_00414ad0(param_1 + 0x58,local_40);
  if ((*(char *)(param_1 + 0xb0) == '\0') || (*PTR_DAT_02003768 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  FUN_00414560(&local_40,2);
  return;
}

