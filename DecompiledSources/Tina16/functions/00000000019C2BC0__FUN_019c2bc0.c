/* Ghidra address: 019c2bc0 */
/* Ghidra symbol: FUN_019c2bc0 */


void FUN_019c2bc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_88 = 0;
  local_30 = 0;
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar4 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  iVar3 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x70;
      cVar2 = FUN_019c2dd0(param_1,lVar1 + 0x40,lVar1 + 0x58);
      if (cVar2 == '\0') {
        if (*(char *)(lVar1 + 0x2a) == '\0') {
          FUN_00414b50(&local_30,L"FAILED");
          local_80 = *(undefined8 *)(lVar1 + 0x10);
          local_78 = 0x11;
          local_70 = *(undefined8 *)(lVar1 + 0x18);
          local_68 = 0x11;
          FUN_019c2770(&local_88,*(undefined1 *)(lVar1 + 0x28));
          local_60 = local_88;
          local_58 = 0x11;
          local_50 = local_30;
          local_48 = 0x11;
          FUN_00442f70(local_40,L"%s -> %s [%s] %s",&local_80,3);
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                    (*(longlong **)(param_1 + 0x10),local_40[0]);
        }
        else {
          FUN_00414b50(&local_30,&DAT_019c2d70);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_88);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

