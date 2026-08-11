/* Ghidra address: 00ad7210 */
/* Ghidra symbol: FUN_00ad7210 */


undefined1 FUN_00ad7210(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58;
  int local_48;
  char local_41;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_30 = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x48);
  iVar2 = *(int *)(local_40 + 0x10);
  local_48 = 0;
  puVar1 = auStack_88;
  local_21 = param_2;
  if (-1 < iVar2 + -1) {
    do {
      local_60 = puVar1;
      lVar3 = FUN_00a72910(local_40,local_48);
      if (*(char *)(lVar3 + 8) == 'Y') {
        local_41 = '\x01';
        local_38 = FUN_00a72910(local_40,local_48);
        goto code_r0x00ad72b6;
      }
      local_48 = local_48 + 1;
      iVar2 = iVar2 + -1;
      puVar1 = local_60;
    } while (iVar2 != 0);
  }
  local_41 = '\0';
code_r0x00ad72b6:
  if (local_41 != '\0') {
    FUN_00414480(local_20);
    local_58 = *(undefined8 *)(local_38 + 0x28);
    FUN_0043e600(local_20,local_58);
    FUN_00414b50(&local_30,local_20[0]);
    FUN_00414480(local_20);
    iVar2 = FUN_00416db0(local_30,&DAT_00ad73d4);
    if ((iVar2 == 0) || (iVar2 = FUN_00416db0(local_30,L"baseline"), iVar2 == 0)) {
      local_21 = 1;
    }
    else {
      iVar2 = FUN_00416db0(local_30,L"middle");
      if (iVar2 == 0) {
        local_21 = 2;
      }
      else {
        iVar2 = FUN_00416db0(local_30,L"bottom");
        if (iVar2 == 0) {
          local_21 = 4;
        }
      }
    }
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return local_21;
}

