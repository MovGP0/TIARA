/* Ghidra address: 01167fb0 */
/* Ghidra symbol: FUN_01167fb0 */


void FUN_01167fb0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_01167b10(4);
  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),iVar1 + 4);
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),DAT_0203aea8);
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_1 + 0x10));
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_1 + 0x10));
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xffff00);
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xffff00);
  return;
}

