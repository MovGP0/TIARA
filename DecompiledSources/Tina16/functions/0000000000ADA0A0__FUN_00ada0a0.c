/* Ghidra address: 00ada0a0 */
/* Ghidra symbol: FUN_00ada0a0 */


void FUN_00ada0a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  int local_40;
  char local_39;
  longlong local_38;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_20 = FUN_00a73240(&DAT_00a6a448,1);
  local_2c = 0;
  local_28 = 0;
  local_38 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(local_38 + 0x10);
  local_40 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_00a72910(local_38,local_40);
      if (*(char *)(lVar2 + 8) == '3') {
        local_39 = '\x01';
        local_28 = FUN_00a72910(local_38,local_40);
        goto code_r0x00ada140;
      }
      local_40 = local_40 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_39 = '\0';
code_r0x00ada140:
  if (local_39 != '\0') {
    FUN_0043e130(&local_68,*(undefined8 *)(local_28 + 0x28));
    FUN_00414ad0(local_20 + 0x10,local_68);
  }
  FUN_00ad4730(param_1);
  while (((cVar1 = *(char *)(param_1 + 0x44), cVar1 != '&' && (cVar1 != '\x04')) && (local_2c < 3)))
  {
    if (cVar1 == '\'') {
      FUN_00a73550(local_20,*(undefined8 *)(param_1 + 0x48));
    }
    else if (cVar1 != '\x02') {
      local_2c = local_2c + 1;
    }
    FUN_00ad4730(param_1);
  }
  if (*(char *)(param_1 + 0x44) == '&') {
    local_50 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x220);
    FUN_004ae7e0(local_50,local_20);
  }
  else {
    FUN_00410f20(local_20);
  }
  FUN_00ad4730(param_1);
  FUN_00414480(&local_68);
  return;
}

