/* Ghidra address: 0113a9b0 */
/* Ghidra symbol: FUN_0113a9b0 */


void FUN_0113a9b0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [56];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [88];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [256];
  undefined8 local_70;
  undefined1 local_62 [11];
  undefined1 local_57 [11];
  ushort local_4c [5];
  byte local_41 [49];
  
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_70 = 0;
  lVar2 = *(longlong *)(param_1 + 0xa10);
  if (*(char *)(lVar2 + 0x110) == '\0') {
    uVar4 = (ulonglong)*(byte *)(lVar2 + 0x149);
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),9);
  }
  local_4c[0] = local_4c[0] & 0xff00;
  bVar1 = *(byte *)(param_1 + 0xa0c);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_01136e50(param_1,local_1e0,*(undefined8 *)(lVar2 + 0x168),uVar4 & 0xffffffff);
      FUN_00415020(local_41,local_1e0,0x28);
      *(char *)(param_1 + 0xa78) = (char)uVar4;
      if (*(char *)(param_1 + 0xa20) == '\0') {
        iVar3 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168));
        if (-1 < iVar3) {
          local_4c[0] = 0x2b01;
        }
      }
    }
    else if (bVar1 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x928),&local_70);
      FUN_00416910(local_170,local_70,0xff);
      FUN_00415020(local_41,local_170,0x28);
      *(undefined1 *)(param_1 + 0xa78) = 9;
    }
    else if (bVar1 == 1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x918),&local_178);
      FUN_00416910(local_170,local_178,0xff);
      FUN_00415020(local_41,local_170,0x28);
      *(undefined1 *)(param_1 + 0xa78) = *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x149);
    }
    else if (bVar1 == 2) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x920),&local_188);
      FUN_00416910(local_170,local_188,0xff);
      FUN_00415020(local_41,local_170,0x28);
      *(undefined1 *)(param_1 + 0xa78) = *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x149);
      iVar3 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x128));
      if (-1 < iVar3) {
        local_4c[0] = 0x2b01;
      }
    }
    else if (bVar1 == 3) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x930),&local_180);
      FUN_00416910(local_170,local_180,0xff);
      FUN_00415020(local_41,local_170,0x28);
      *(undefined1 *)(param_1 + 0xa78) = *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x14a);
      iVar3 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x130));
      if (-1 < iVar3) {
        local_4c[0] = 0x2b01;
      }
    }
  }
  else if (bVar1 == 5) {
    FUN_01136e50(param_1,local_1e0,*(undefined8 *)(lVar2 + 0x170),uVar4 & 0xffffffff);
    FUN_00415020(local_41,local_1e0,0x28);
    *(char *)(param_1 + 0xa78) = (char)uVar4;
    if (*(char *)(param_1 + 0xa20) == '\0') {
      iVar3 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170));
      if (-1 < iVar3) {
        local_4c[0] = 0x2b01;
      }
    }
  }
  else if (bVar1 == 6) {
    *(undefined1 *)(param_1 + 0xa78) = 10;
    FUN_01136e50(param_1,local_1e0,*(undefined8 *)(param_1 + 0xa50),
                 CONCAT71((int7)(uVar4 >> 8),10) & 0xffffffff);
    FUN_00415020(local_41,local_1e0,0x28);
  }
  else if (bVar1 == 7) {
    FUN_0040e840(local_170,*(undefined4 *)(param_1 + 0xa58));
    FUN_00415020(local_41,local_170,0x28);
    *(undefined1 *)(param_1 + 0xa78) = 0;
    FUN_00b909e0(local_1f0,0);
    FUN_00415110(local_41,local_1f0,0x28);
  }
  FUN_010bffb0(local_41,local_57,local_62,*(undefined1 *)(param_1 + 0xa78));
  FUN_00414ff0(local_228,local_4c);
  FUN_00415110(local_228,local_41,0x32);
  FUN_00415020(local_41,local_228,0x28);
  if (*(char *)(param_1 + 0xa0c) == '\a') {
    FUN_004169a0(&local_238,local_41);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_238);
  }
  else {
    FUN_010c15a0(local_1e0,9,4,local_41);
    FUN_004169a0(&local_230,local_1e0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_230);
  }
  FUN_004169a0(&local_240,local_57);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x9f0),local_240);
  FUN_004169a0(&local_248,local_62);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x9e8),local_248);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_250);
  iVar3 = 0;
  if (local_250 != 0) {
    iVar3 = *(int *)(local_250 + -4);
  }
  if (iVar3 + -1 < *(int *)(param_1 + 0xa6c)) {
    *(undefined4 *)(param_1 + 0xa6c) = 0;
  }
  if ((ushort)local_41[*(int *)(param_1 + 0xa6c) + 1] == *(ushort *)PTR_DAT_020032f8) {
    *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
  }
  if (*(char *)(param_1 + 0xa70) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x290))(*(longlong **)(param_1 + 0x9f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x288))(*(longlong **)(param_1 + 0x9f0),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
              (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  }
  FUN_00414480(&local_250);
  FUN_00414560(&local_248,4);
  FUN_00414560(&local_188,3);
  FUN_00414480(&local_70);
  return;
}

