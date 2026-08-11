/* Ghidra address: 004d0c50 */
/* Ghidra symbol: FUN_004d0c50 */


longlong FUN_004d0c50(longlong param_1,char param_2,char param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  *(bool *)(local_res8 + 0x1b) = *(char *)(local_res8 + 0x40) == '\0';
  if ((param_3 == '\0') || (*(char *)(local_res8 + 0x40) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(local_res8 + 0x19) = uVar2;
  if (*(char *)(local_res8 + 0x40) == '\0') {
    if (param_4 == 0) {
      local_48 = 4;
      local_40 = local_res8 + 8;
      uVar4 = FUN_00414280(0,0,FUN_004d09e0,local_res8);
      *(undefined8 *)(local_res8 + 0x10) = uVar4;
    }
    else {
      local_48 = 0x10004;
      local_40 = local_res8 + 8;
      uVar4 = FUN_00414280(0,param_4 & 0xffffffff,FUN_004d09e0,local_res8);
      *(undefined8 *)(local_res8 + 0x10) = uVar4;
    }
    if (*(longlong *)(local_res8 + 0x10) == 0) {
      uVar3 = thunk_FUN_03ce33a6();
      FUN_0044b630(&local_38,uVar3,0);
      local_30 = local_38;
      local_28 = 0x11;
      local_48 = 0;
      uVar4 = FUN_0044d8d0(&PTR_FUN_004831c0,1,PTR_PTR_02005238,&local_30);
      FUN_004134c0(uVar4);
    }
  }
  else {
    uVar4 = thunk_FUN_03bb885e();
    *(undefined8 *)(local_res8 + 0x10) = uVar4;
    uVar3 = FUN_00427ab0();
    *(undefined4 *)(local_res8 + 8) = uVar3;
  }
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

