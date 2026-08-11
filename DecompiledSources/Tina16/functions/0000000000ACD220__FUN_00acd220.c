/* Ghidra address: 00acd220 */
/* Ghidra symbol: FUN_00acd220 */


longlong FUN_00acd220(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined1 *local_40;
  int local_28;
  char local_21;
  longlong local_20;
  
  local_40 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_58 = param_5;
  local_50 = param_6;
  FUN_00a99130(local_res8,0,param_3,param_4);
  uVar2 = FUN_004b6930(&PTR_FUN_00ac7470,1);
  *(undefined8 *)(local_res8 + 0x140) = uVar2;
  local_20 = 0;
  iVar4 = *(int *)(param_5 + 0x10);
  local_28 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_28);
      if (*(char *)(lVar3 + 8) == 'K') {
        local_21 = '\x01';
        local_20 = FUN_00a72910(param_5,local_28);
        goto code_r0x00acd33c;
      }
      local_28 = local_28 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_21 = '\0';
code_r0x00acd33c:
  if (local_21 == '\0') {
    *(undefined4 *)(local_res8 + 0x150) = 0xffffffff;
  }
  else {
    *(undefined4 *)(local_res8 + 0x150) = *(undefined4 *)(local_20 + 0x18);
  }
  *(undefined4 *)(local_res8 + 0x154) = 3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

