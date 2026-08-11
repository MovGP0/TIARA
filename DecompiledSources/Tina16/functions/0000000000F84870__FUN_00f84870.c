/* Ghidra address: 00f84870 */
/* Ghidra symbol: FUN_00f84870 */


void FUN_00f84870(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  *(double *)(param_1 + 0xd38) =
       (*(double *)(PTR_DAT_02004010 + 0x7e0) / *(double *)(PTR_DAT_02004010 + 0x7e8)) / 10.0;
  uVar2 = FUN_015f6540(*(undefined8 *)(param_1 + 0xd38));
  *(undefined8 *)(param_1 + 0x6c0) = uVar2;
  *(undefined1 *)(param_1 + 0xd5f) = 0;
  *(longlong *)(param_1 + 0x6c8) = *(longlong *)(param_1 + 0x6c0) / 10;
  *(undefined4 *)(param_1 + 0xd20) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd30) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  *(undefined4 *)(param_1 + 0xd24) = 0;
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  *(undefined1 *)(param_1 + 0xd40) = 0;
  *(undefined1 *)(param_1 + 0xd58) = 1;
  *(undefined4 *)(param_1 + 0xd28) = 2;
  FUN_00414480(param_1 + 0xd50,*(longlong *)(param_1 + 0x6c0) % 10);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined1 *)(param_1 + 0xd59) = 0;
  *(undefined1 *)(param_1 + 0xd5a) = 0;
  *(undefined1 *)(param_1 + 0xd5b) = 0;
  *(undefined1 *)(param_1 + 0xd5c) = 0;
  *(undefined1 *)(param_1 + 0xd5d) = 0;
  *(undefined1 *)(param_1 + 0xd5e) = 0;
  *(undefined1 *)(param_1 + 0x6b1) = 1;
  uVar1 = FUN_015fa5e0();
  *(undefined1 *)(param_1 + 0x6b2) = uVar1;
  uVar2 = FUN_00410e60(&PTR_FUN_01573bf0,1);
  *(undefined8 *)(param_1 + 0xd78) = uVar2;
  FUN_015f5620(&local_30,&DAT_00f84a9c,0xffffffff);
  FUN_01575ed0(uVar2,0,&local_30);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  uVar2 = FUN_019a4600();
  FUN_019af390(uVar2,0xd,1,0);
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined8 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd08) = 0;
  FUN_00417740(&local_30,&DAT_00e021a8);
  return;
}

