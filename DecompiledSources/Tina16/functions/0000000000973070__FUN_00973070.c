/* Ghidra address: 00973070 */
/* Ghidra symbol: FUN_00973070 */


longlong FUN_00973070(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0096f6f0(param_1);
  *(undefined1 *)(lVar1 + 0xa0) = *(undefined1 *)(param_1 + 0xa0);
  FUN_00414b90(lVar1 + 0x88,*(undefined8 *)(param_1 + 0x88));
  FUN_00414b90(lVar1 + 0x90,*(undefined8 *)(param_1 + 0x90));
  FUN_00414b90(lVar1 + 0x98,*(undefined8 *)(param_1 + 0x98));
  return lVar1;
}

