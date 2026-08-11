/* Ghidra address: 00b1f640 */
/* Ghidra symbol: FUN_00b1f640 */


longlong FUN_00b1f640(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  byte *local_38;
  undefined **local_30;
  ushort *local_28;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined2 *)(local_res8 + 8) = 0;
  iVar3 = 0x24;
  local_30 = &PTR_s_General_01e82fb8;
  local_38 = &DAT_01e82f94;
  do {
    local_28 = (ushort *)FUN_00418560(10,&DAT_00b1be28);
    FUN_00415f40(local_28 + 1,*local_30);
    *local_28 = (ushort)*local_38;
    FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x10),local_28);
    if (*(ushort *)(local_res8 + 8) < *local_28) {
      *(ushort *)(local_res8 + 8) = *local_28;
    }
    local_38 = local_38 + 1;
    local_30 = local_30 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

