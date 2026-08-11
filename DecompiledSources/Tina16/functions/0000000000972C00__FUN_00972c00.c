/* Ghidra address: 00972c00 */
/* Ghidra symbol: FUN_00972c00 */


longlong FUN_00972c00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0096f6f0(param_1);
  FUN_00414b90(lVar1 + 0x88,*(undefined8 *)(param_1 + 0x88));
  FUN_00414b90(lVar1 + 0x90,*(undefined8 *)(param_1 + 0x90));
  *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(param_1 + 0x98);
  return lVar1;
}

