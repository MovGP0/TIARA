/* Ghidra address: 0189bc90 */
/* Ghidra symbol: FUN_0189bc90 */


void FUN_0189bc90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_0181b940(param_1);
  *(undefined1 *)(param_1 + 0x7e1) = 1;
  FUN_0180bfe0(local_20,400);
  FUN_0064de00(param_1,local_20[0]);
  FUN_0180bfe0(&local_28,0x191);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_28);
  FUN_0180bfe0(&local_30,0x192);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_30);
  FUN_0180bfe0(&local_38,0x193);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_38);
  FUN_0180bfe0(&local_40,0x194);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_40);
  FUN_0180bfe0(&local_48,0x195);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_48);
  FUN_0180bfe0(&local_50,0x196);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_50);
  FUN_0180bfe0(&local_58,0x197);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x768),local_58);
  FUN_0180bfe0(&local_60,0x198);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x770),local_60);
  FUN_0180bfe0(&local_68,0x199);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_68);
  FUN_0180bfe0(&local_70,0x19a);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_70);
  FUN_0180bfe0(&local_78,0x19b);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_78);
  FUN_0180bfe0(&local_80,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_80);
  FUN_0180bfe0(&local_88,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_88);
  FUN_0180bfe0(&local_90,0x19c);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_90);
  FUN_0180bfe0(&local_98,0x19d);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_98);
  FUN_0180bfe0(&local_a0,0x19e);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c8),local_a0);
  FUN_00414480(&local_10);
  cVar1 = *(char *)(param_1 + 0x7e0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = FUN_0180bfb0();
      FUN_01809b60(uVar2,&local_10,L"uInch");
      goto LAB_0189c01c;
    }
    if (1 < (byte)(cVar1 - 2U)) goto LAB_0189c01c;
  }
  uVar2 = FUN_0180bfb0();
  FUN_01809b60(uVar2,&local_10,&DAT_0189c11c);
LAB_0189c01c:
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x780),local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x788),local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x790),local_10);
  *(undefined1 *)(param_1 + 0x7e1) = 0;
  FUN_00414560(&local_a0,0x11);
  FUN_00414480(&local_10);
  return;
}

