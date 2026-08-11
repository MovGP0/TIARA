/* Ghidra address: 019c2860 */
/* Ghidra symbol: FUN_019c2860 */


void FUN_019c2860(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  int local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_a0 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  iVar5 = 0;
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  iVar4 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x58) + 0x2a + (longlong)iVar4 * 0x70) == '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),0);
  local_48 = 0;
  local_50[0] = iVar5;
  FUN_00442f70(local_40,L"ROUTE SUMMARY: %d failed route(s)",local_50,0);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),local_40[0]);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),0);
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  iVar5 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x70;
      if (*(char *)(lVar1 + 0x2a) == '\0') {
        cVar2 = FUN_019c2dd0(param_1,lVar1 + 0x40,lVar1 + 0x58);
        if (cVar2 == '\0') {
          FUN_00414b50(local_30,L"FAILED");
        }
        else {
          FUN_00414b50(local_30,L"OK by AlreadyConnected");
        }
      }
      else {
        FUN_00414b50(local_30,&DAT_019c2b2c);
      }
      local_98 = *(undefined8 *)(lVar1 + 0x10);
      local_90 = 0x11;
      local_88 = *(undefined8 *)(lVar1 + 0x18);
      local_80 = 0x11;
      FUN_019c2770(&local_a0,*(undefined1 *)(lVar1 + 0x28));
      local_78 = local_a0;
      local_70 = 0x11;
      local_68 = local_30[0];
      local_60 = 0x11;
      FUN_00442f70(&local_58,L"%s -> %s [%s] %s",&local_98,3);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),local_58)
      ;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_a0);
  FUN_00414480(&local_58);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

