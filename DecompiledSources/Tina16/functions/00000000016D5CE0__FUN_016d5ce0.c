/* Ghidra address: 016d5ce0 */
/* Ghidra symbol: FUN_016d5ce0 */


longlong FUN_016d5ce0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,int *param_5
                     )

{
  byte bVar1;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 local_54 [22];
  undefined1 local_3e [2];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [2];
  undefined1 local_32 [6];
  undefined1 local_2c [4];
  longlong local_28;
  int local_20 [4];
  
  local_60 = auStack_88;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  if (local_res20 == 0) {
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res18,0x20);
  }
  else {
    local_28 = local_res20;
  }
  FUN_016d26b0(local_54,local_28);
  FUN_00409a70(local_2c,local_res8 + 0x18,4);
  FUN_00409a70(local_3c,local_res8 + 0x1c,4);
  if (*param_5 < *(int *)(local_res8 + 0x1c)) {
    *param_5 = *(int *)(local_res8 + 0x1c);
  }
  FUN_00409a70(local_34,local_res8 + 0x25,1);
  FUN_00409a70(local_3e,local_res8 + 0x24,1);
  FUN_00409a70(local_32,local_res8 + 0x26,1);
  FUN_00409a70(local_38,local_20,4);
  if ((*(char *)(local_res8 + 0x24) == '\0') ||
     (((*(char *)(local_res8 + 0x25) == '\0' && (*(char *)(local_res8 + 0x26) == '\0')) ||
      ((uint)*(byte *)(local_res8 + 0x26) % 8 != 0)))) {
    if (local_res20 == 0) {
      FUN_00410f20(local_28);
    }
    else {
      FUN_004b6dc0(local_res20);
    }
    FUN_01b05000(L"Unsupported non-PCM wave format!");
  }
  bVar1 = *(byte *)(local_res8 + 0x26) / 8;
  *(byte *)(local_res8 + 0x26) = bVar1;
  if (bVar1 == 0) {
    *(byte *)(local_res8 + 0x26) = *(byte *)(local_res8 + 0x25) / *(byte *)(local_res8 + 0x24);
  }
  if (*(char *)(local_res8 + 0x25) == '\0') {
    *(char *)(local_res8 + 0x25) = *(char *)(local_res8 + 0x26) * *(char *)(local_res8 + 0x24);
  }
  if (*(int *)(local_res8 + 0x1c) * (uint)*(byte *)(local_res8 + 0x25) != local_20[0]) {
    if (local_res20 == 0) {
      FUN_00410f20(local_28);
    }
    else {
      FUN_004b6dc0(local_res20,0);
    }
    FUN_01b05000(L"Unsupported non-PCM wave format!",0);
  }
  *(int *)(local_res8 + 0x20) =
       *(int *)(local_res8 + 0x18) / (int)(uint)*(byte *)(local_res8 + 0x25);
  FUN_00419260(local_res8 + 0x10,&DAT_00406578,1,(longlong)*(int *)(local_res8 + 0x18));
  FUN_004b84c0(local_28,*(undefined8 *)(local_res8 + 0x10),(longlong)*(int *)(local_res8 + 0x18));
  if (local_res20 == 0) {
    FUN_00410f20(local_28);
  }
  else {
    FUN_004b6dc0(local_res20,0);
  }
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

