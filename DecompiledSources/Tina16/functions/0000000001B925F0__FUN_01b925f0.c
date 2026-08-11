/* Ghidra address: 01b925f0 */
/* Ghidra symbol: FUN_01b925f0 */


void FUN_01b925f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_20 [2];
  undefined1 local_c [4];
  
  local_20[0] = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x38));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x50));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x58));
  iVar2 = FUN_004170c0(&LAB_01b92924,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40),1);
  if (iVar2 < 1) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40));
    FUN_00414480(param_1 + 0x760);
  }
  else {
    iVar2 = FUN_004170c0(&LAB_01b92924,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40),1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x40);
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416dc0(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40),iVar2 + 1,uVar4);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_20[0]);
    iVar2 = FUN_004170c0(&LAB_01b92924,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40),1);
    FUN_00416dc0(param_1 + 0x760,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x40),1,iVar2 + -1
                );
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x48));
  lVar1 = *(longlong *)(param_1 + 0x778);
  if (*(char *)(lVar1 + 0x70) == '\x01') {
    *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(lVar1 + 8);
  }
  else if (*(char *)(lVar1 + 0x70) == '\x02') {
    if (*(char *)(lVar1 + 0x110) == '\0') {
      uVar3 = FUN_00ee5950(0,*(undefined8 *)(lVar1 + 0xb0),local_c,0,0,0);
      *(undefined8 *)(param_1 + 0x750) = uVar3;
    }
    else {
      uVar3 = FUN_00ee5950(0,*(undefined8 *)(lVar1 + 0xb0),local_c,*(undefined8 *)(lVar1 + 0xc0),0,0
                          );
      *(undefined8 *)(param_1 + 0x750) = uVar3;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x750) = 0;
  }
  *(bool *)(param_1 + 0x758) = *(char *)(*(longlong *)(param_1 + 0x778) + 0x70) != '\x02';
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),
               *(undefined1 *)(*(longlong *)(param_1 + 0x778) + 0x62));
  *(undefined1 *)(param_1 + 0x759) = *(undefined1 *)(*(longlong *)(param_1 + 0x778) + 0x62);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),
               *(longlong *)(*(longlong *)(param_1 + 0x770) + 0x3b0) != 0);
  FUN_00414ad0(param_1 + 0x768,*(undefined8 *)(*(longlong *)(param_1 + 0x770) + 0x3b0));
  FUN_0064cf60(param_1,0x46a);
  FUN_00414480(local_20);
  return;
}

