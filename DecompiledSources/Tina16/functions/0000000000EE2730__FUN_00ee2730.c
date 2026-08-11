/* Ghidra address: 00ee2730 */
/* Ghidra symbol: FUN_00ee2730 */


void FUN_00ee2730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                 char param_9,char param_10)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char *local_20;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (wchar_t *)0x0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (char *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (param_10 != '\0') {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  if (*(longlong *)(lVar2 + 0xd88) == 0) {
    FUN_016bb7d0(lVar2,local_30,1);
    FUN_00414bf0(lVar2 + 0xd80,local_30[0]);
  }
  else {
    FUN_00414bf0(lVar2 + 0xd80,*(undefined8 *)(lVar2 + 0xd88));
    FUN_004144d0(lVar2 + 0xd88);
  }
  if (*(longlong *)(lVar2 + 0xd80) == 0) {
    FUN_00414bf0(lVar2 + 0xd80,&DAT_00ee2c04);
  }
  FUN_004144d0(lVar2 + 0xd90);
  FUN_004155b0(lVar2 + 0xd90,*(undefined8 *)(lVar2 + 0xd80));
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x240) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))(*(longlong **)(param_1 + 0x20));
  FUN_00416880(&local_38,*(undefined8 *)(lVar2 + 0xd80));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_38);
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00416880(&local_40,*(undefined8 *)(lVar2 + 0xd80));
    if (local_40 == L".END") {
      bVar5 = true;
    }
    else if (local_40 == (wchar_t *)0x0) {
      bVar5 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_40,L".END");
      bVar5 = iVar3 == 0;
    }
    if (!bVar5) {
      FUN_00416880(&local_48,*(undefined8 *)(lVar2 + 0xd80));
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))(*(longlong **)(param_1 + 0x28),local_48)
      ;
    }
  }
  do {
    FUN_016bb7d0(lVar2,&local_50,1);
    FUN_00414bf0(lVar2 + 0xd88,local_50);
    if ((*(longlong *)(lVar2 + 0xd88) != 0) && (**(char **)(lVar2 + 0xd88) == '+')) {
      FUN_00414c70(&local_20,*(undefined8 *)(lVar2 + 0xd88));
      puVar4 = (undefined1 *)FUN_00414df0(&local_20);
      *puVar4 = 0x20;
      FUN_004155b0(lVar2 + 0xd90,local_20);
      FUN_00416880(&local_58,*(undefined8 *)(lVar2 + 0xd88));
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_58)
      ;
      if (*(char *)(param_1 + 0x30) != '\0') {
        FUN_00416880(&local_60,*(undefined8 *)(lVar2 + 0xd88));
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                  (*(longlong **)(param_1 + 0x28),local_60);
      }
    }
  } while ((*(longlong *)(lVar2 + 0xd88) != 0) && (**(char **)(lVar2 + 0xd88) == '+'));
  FUN_00415ad0(&local_68,*(undefined8 *)(lVar2 + 0xd90),1,4000);
  FUN_016b8f10(&local_20,local_68);
  cVar1 = *local_20;
  if (cVar1 == '.') {
    FUN_00edce00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if ((byte)(cVar1 - 0x40U) < 0x20 && (1 << (cVar1 - 0x40U & 0x1f) & 0x7fefffcU) != 0) {
    if (param_9 != '\0') {
      FUN_00ed6390(param_1,cVar1,param_3);
    }
  }
  else {
    FUN_00415560(local_168,local_20,0xff);
    FUN_016a4020(*(undefined8 *)(lVar2 + 0x10),0x1e,local_168,0xffffffff);
  }
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,2);
  FUN_004144d0(&local_50);
  FUN_00414560(&local_48,3);
  FUN_004144d0(local_30);
  FUN_004144d0(&local_20);
  return;
}

