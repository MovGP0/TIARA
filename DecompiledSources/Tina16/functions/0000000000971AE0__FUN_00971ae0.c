/* Ghidra address: 00971ae0 */
/* Ghidra symbol: FUN_00971ae0 */


longlong FUN_00971ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0096f6f0(param_1);
  FUN_00414b90(lVar1 + 0x88,*(undefined8 *)(param_1 + 0x88));
  *(undefined1 *)(lVar1 + 0x90) = *(undefined1 *)(param_1 + 0x90);
  *(undefined1 *)(lVar1 + 0x91) = *(undefined1 *)(param_1 + 0x91);
  FUN_00414b90(lVar1 + 0x98,*(undefined8 *)(param_1 + 0x98));
  FUN_00414b90(lVar1 + 0xa8,*(undefined8 *)(param_1 + 0xa8));
  FUN_00971cb0(lVar1,*(undefined8 *)(param_1 + 0xa0));
  *(undefined1 *)(lVar1 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
  return lVar1;
}

