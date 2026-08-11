/* Ghidra address: 013b6ad0 */
/* Ghidra symbol: FUN_013b6ad0 */


undefined4 FUN_013b6ad0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_40 = auStack_78;
  local_24 = 0;
  local_20 = 0;
  local_30 = param_3;
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_0133c678);
  if (cVar2 != '\0') {
    cVar2 = FUN_01b07dd0(local_30);
    lVar1 = local_30;
    if (cVar2 != '\0') {
      local_38 = FUN_014cdd20(*(undefined8 *)(local_30 + 0xe8));
      if ((*(uint *)(local_38 + 0x7e8) & 0x20) != 0) {
        local_58 = *(undefined8 *)(lVar1 + 0x1320);
        local_20 = FUN_013b6be0(&DAT_013b67e8,1,*(undefined8 *)(lVar1 + 0xa0),
                                *(undefined8 *)(local_38 + 0x7c8));
        FUN_013b6dc0(local_20);
        local_24 = FUN_013b6e10(local_20);
      }
    }
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  return local_24;
}

