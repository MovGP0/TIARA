/* Ghidra address: 00970cc0 */
/* Ghidra symbol: FUN_00970cc0 */


longlong FUN_00970cc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0096f6f0(param_1);
  FUN_00414b90(lVar1 + 0x90,*(undefined8 *)(param_1 + 0x90));
  *(undefined1 *)(lVar1 + 0x88) = *(undefined1 *)(param_1 + 0x88);
  return lVar1;
}

