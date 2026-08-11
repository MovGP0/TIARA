/* Ghidra address: 00b652e0 */
/* Ghidra symbol: FUN_00b652e0 */


void FUN_00b652e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  byte local_49;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_40 = 0;
  local_48 = 0;
  lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  lVar4 = *(longlong *)(lVar4 + 0x40);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xa1);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x22);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(lVar4 + 0x28));
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x2a));
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x2c));
  if (*(char *)(lVar4 + 0x29) == '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x2e));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x30));
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
  }
  bVar9 = *(char *)(lVar4 + 0x32) == '\x01';
  if (*(char *)(lVar4 + 0x33) == '\x01') {
    bVar9 = bVar9 | 2;
  }
  if (*(char *)(lVar4 + 0x68) != '\0') {
    bVar9 = bVar9 | 8;
  }
  if (*(char *)(lVar4 + 0x69) != '\0') {
    bVar9 = bVar9 | 0x10;
  }
  if (*(short *)(lVar4 + 0x2c) != -1) {
    bVar9 = bVar9 | 0x80;
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),bVar9);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  local_38 = *(undefined8 *)(lVar4 + 0x38);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  local_38 = *(undefined8 *)(lVar4 + 0x40);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x81);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
  uVar8 = 0;
  if (*(char *)(lVar4 + 0xa0) == '\0') {
    uVar8 = 0x40;
  }
  if (*(char *)(lVar4 + 0xa1) == '\0') {
    uVar8 = uVar8 | 0x80;
  }
  if (*(char *)(lVar4 + 0x29) == '\0') {
    uVar8 = uVar8 | 0x500;
  }
  else {
    uVar8 = uVar8 | 0x400;
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x2a);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
  if (*(char *)(lVar4 + 0x6b) == '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x2b);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
  if (*(char *)(lVar4 + 0x6a) == '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
  }
  local_49 = 0;
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b4e330();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      lVar5 = FUN_00b53890(*(undefined8 *)(lVar5 + 0x20),iVar7);
      if (local_49 < *(byte *)(lVar5 + 0x28)) {
        lVar5 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        lVar5 = FUN_00b53890(*(undefined8 *)(lVar5 + 0x20),iVar7);
        local_49 = *(byte *)(lVar5 + 0x28);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  bVar9 = 0;
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  uVar2 = FUN_00b4e330();
  uVar8 = (ulonglong)(uVar2 - 1);
  iVar1 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    uVar8 = (ulonglong)uVar2;
    do {
      lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      lVar5 = FUN_00b52d40(*(undefined8 *)(lVar5 + 0x18),iVar1);
      if (bVar9 < *(byte *)(lVar5 + 0x28)) {
        lVar5 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        lVar5 = FUN_00b52d40(*(undefined8 *)(lVar5 + 0x18),iVar1);
        bVar9 = *(byte *)(lVar5 + 0x28);
      }
      iVar1 = iVar1 + 1;
      uVar2 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x80);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),(ushort)local_49 * 0x1d);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),(ushort)bVar9 * 0x1d);
  if (local_49 == 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_49 + 1);
  }
  if (bVar9 == 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),CONCAT62((int6)(uVar8 >> 0x10),bVar9 + 1));
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x28);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),8);
  local_38 = *(undefined8 *)(lVar4 + 0x48);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x29);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),8);
  local_38 = *(undefined8 *)(lVar4 + 0x50);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x26);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),8);
  local_38 = *(undefined8 *)(lVar4 + 0x58);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x27);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),8);
  local_38 = *(undefined8 *)(lVar4 + 0x60);
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_38,8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x83);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
  if (*(char *)(lVar4 + 0x6c) == '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x84);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),2);
  if (*(char *)(lVar4 + 0x6d) == '\0') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),1);
  }
  FUN_00414520(&local_48);
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x80),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&DAT_00b65c1c,*(undefined8 *)(lVar4 + 0x80));
  }
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x70),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&PTR_DAT_00b65c28,*(undefined8 *)(lVar4 + 0x70));
  }
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x78),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&LAB_00b65c34,*(undefined8 *)(lVar4 + 0x78));
  }
  iVar1 = FUN_00416420(local_48,0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (local_48 != 0) {
      uVar2 = *(uint *)(local_48 + -4) >> 1;
    }
    FUN_00b15100(&local_40,local_48);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x14);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                 CONCAT22((short)((uint)uVar3 >> 0x10),(short)uVar3 + 3));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
    local_29 = 1;
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_29,1);
    uVar6 = FUN_00414df0(&local_40);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),uVar6,uVar3);
  }
  FUN_00414520(&local_48);
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x98),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&DAT_00b65c1c,*(undefined8 *)(lVar4 + 0x98));
  }
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x88),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&PTR_DAT_00b65c28,*(undefined8 *)(lVar4 + 0x88));
  }
  iVar1 = FUN_00416420(*(undefined8 *)(lVar4 + 0x90),0);
  if (iVar1 != 0) {
    FUN_00416310(&local_48,3,local_48,&LAB_00b65c34,*(undefined8 *)(lVar4 + 0x90));
  }
  iVar1 = FUN_00416420(local_48,0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (local_48 != 0) {
      uVar2 = *(uint *)(local_48 + -4) >> 1;
    }
    FUN_00b15100(&local_40,local_48);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x15);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                 CONCAT22((short)((uint)uVar3 >> 0x10),(short)uVar3 + 3));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
    local_29 = 1;
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),&local_29,1);
    uVar6 = FUN_00414df0(&local_40);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),uVar6,uVar3);
  }
  FUN_00414520(&local_48);
  FUN_004144d0(&local_40);
  return;
}

