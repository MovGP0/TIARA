/* Ghidra address: 00aca230 */
/* Ghidra symbol: FUN_00aca230 */


longlong FUN_00aca230(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  char local_39;
  int local_34;
  char local_2d;
  int local_28;
  char local_21;
  longlong local_20;
  
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
  local_60 = param_6;
  FUN_00ac9f40(local_res8,0,param_3,param_4);
  local_20 = 0;
  iVar2 = *(int *)(param_5 + 0x10);
  local_28 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_28);
      if (*(char *)(lVar3 + 8) == '.') {
        local_21 = '\x01';
        local_20 = FUN_00a72910(param_5,local_28);
        goto code_r0x00aca339;
      }
      local_28 = local_28 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_21 = '\0';
code_r0x00aca339:
  if (local_21 != '\0') {
    *(undefined4 *)(local_res8 + 0x154) = *(undefined4 *)(local_20 + 0x18);
  }
  iVar2 = *(int *)(param_5 + 0x10);
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_34);
      if (*(char *)(lVar3 + 8) == '>') {
        local_2d = '\x01';
        local_20 = FUN_00a72910(param_5,local_34);
        goto code_r0x00aca3ae;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_2d = '\0';
code_r0x00aca3ae:
  if (local_2d != '\0') {
    FUN_00414ad0(local_res8 + 0x148,*(undefined8 *)(local_20 + 0x28));
  }
  *(undefined1 *)(local_res8 + 0x150) = 1;
  iVar2 = *(int *)(param_5 + 0x10);
  local_40 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_40);
      if (*(char *)(lVar3 + 8) == 'M') {
        local_39 = '\x01';
        local_20 = FUN_00a72910(param_5,local_40);
        goto code_r0x00aca438;
      }
      local_40 = local_40 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_39 = '\0';
code_r0x00aca438:
  if (local_39 != '\0') {
    FUN_0043e1a0(&local_58,*(undefined8 *)(local_20 + 0x28));
    iVar2 = FUN_00416db0(local_58,L"false");
    if (iVar2 == 0) {
      *(undefined1 *)(local_res8 + 0x150) = 0;
    }
  }
  FUN_00414480(&local_58);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

