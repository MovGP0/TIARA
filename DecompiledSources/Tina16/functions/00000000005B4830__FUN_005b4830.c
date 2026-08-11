/* Ghidra address: 005b4830 */
/* Ghidra symbol: FUN_005b4830 */


void FUN_005b4830(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  char local_69;
  wchar_t *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  char local_29;
  longlong *local_28;
  int local_1c;
  
  local_50 = auStack_a8;
  local_58 = 0;
  puVar2 = auStack_a8;
  if (*(char *)(param_1 + 0xb0) != param_2) {
    cVar3 = FUN_005b37f0(param_1);
    if (cVar3 == '\0') {
      FUN_0041ddd0(&local_58,PTR_PTR_02003380);
      local_68 = L"Actions";
      local_60 = 0x11;
      local_88 = 0;
      uVar4 = FUN_0044d530(&PTR_FUN_005ae658,1,local_58,&local_68);
      FUN_004134c0(uVar4);
    }
    local_29 = *(char *)(param_1 + 0xb0);
    *(char *)(param_1 + 0xb0) = param_2;
    local_69 = param_2;
    if (param_2 != '\x01') {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
      local_1c = 0;
      if (-1 < iVar5 + -1) {
        do {
          local_38 = *(longlong *)(param_1 + 0x78);
          lVar1 = *(longlong *)(local_38 + 8);
          if (*(longlong *)(lVar1 + (longlong)local_1c * 8) != 0) {
            local_28 = *(longlong **)(*(longlong *)(local_38 + 8) + (longlong)local_1c * 8);
            local_40 = local_38;
            if (param_2 == '\0') {
              if (local_29 == '\x02') {
                (**(code **)(*local_28 + 0xe8))(local_28,(char)local_28[0x19]);
              }
              (**(code **)(*local_28 + 0xb8))(local_28);
            }
            else if (param_2 == '\x02') {
              *(undefined1 *)(local_28 + 0x19) = *(undefined1 *)((longlong)local_28 + 0xd9);
              (**(code **)(*local_28 + 0xe8))(local_28,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
            }
          }
          local_1c = local_1c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    puVar2 = local_50;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_1);
      puVar2 = local_50;
    }
  }
  local_50 = puVar2;
  FUN_00414480(&local_58);
  return;
}

