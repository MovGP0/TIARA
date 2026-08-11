/* Ghidra address: 00aa1950 */
/* Ghidra symbol: FUN_00aa1950 */


longlong FUN_00aa1950(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined8 param_5,longlong param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  FUN_00a9c430(local_res8,0,param_3,param_4);
  *(longlong *)(local_res8 + 0x568) = param_6;
  *(undefined1 *)(local_res8 + 0x578) = *(undefined1 *)(param_6 + 0x582);
  iVar3 = *(int *)(param_4 + 0x10);
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_28 = FUN_004aeac0(param_4,local_1c);
      if (*(char *)(local_28 + 8) == '\x03') {
        local_30 = *(undefined8 *)(local_28 + 0x28);
        iVar2 = FUN_0043e420(local_30,L"CENTER");
        if (iVar2 == 0) {
          *(undefined1 *)(local_res8 + 0x578) = 2;
        }
        else {
          local_38 = *(undefined8 *)(local_28 + 0x28);
          iVar2 = FUN_0043e420(local_38,L"LEFT");
          if (iVar2 == 0) {
            if (*(char *)(local_res8 + 0x60) == '\0') {
              *(undefined1 *)(local_res8 + 0x60) = 5;
            }
          }
          else {
            local_40 = *(undefined8 *)(local_28 + 0x28);
            iVar2 = FUN_0043e420(local_40,L"RIGHT");
            if ((iVar2 == 0) && (*(char *)(local_res8 + 0x60) == '\0')) {
              *(undefined1 *)(local_res8 + 0x60) = 6;
            }
          }
        }
      }
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00a72b50(param_4,&local_58);
  FUN_00414ad0(local_res8 + 0x580,local_58);
  *(undefined4 *)(local_res8 + 0x478) = *(undefined4 *)(*(longlong *)(local_res8 + 0x568) + 0x478);
  *(undefined4 *)(local_res8 + 0x480) = *(undefined4 *)(*(longlong *)(local_res8 + 0x568) + 0x480);
  FUN_00414ad0(local_res8 + 0xa0,L"TableAndCaption.");
  FUN_00414480(&local_58);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

