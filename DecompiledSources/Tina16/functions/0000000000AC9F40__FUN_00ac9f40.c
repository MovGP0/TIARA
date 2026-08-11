/* Ghidra address: 00ac9f40 */
/* Ghidra symbol: FUN_00ac9f40 */


longlong FUN_00ac9f40(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_50;
  undefined8 local_40;
  int local_30;
  char local_29;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  local_60 = param_6;
  FUN_00a99130(local_res8,0,param_3,param_4);
  local_28 = 0;
  iVar3 = *(int *)(param_5 + 0x10);
  local_30 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_00a72910(param_5,local_30);
      if (*(char *)(lVar2 + 8) == 'W') {
        local_29 = '\x01';
        local_28 = FUN_00a72910(param_5,local_30);
        goto code_r0x00aca049;
      }
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_29 = '\0';
code_r0x00aca049:
  if (local_29 != '\0') {
    FUN_00414480(local_20);
    local_40 = *(undefined8 *)(local_28 + 0x28);
    FUN_0043e600(local_20,local_40);
    FUN_00414ad0(local_res8 + 0x140,local_20[0]);
    FUN_00414480(local_20);
  }
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

