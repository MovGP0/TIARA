/* Ghidra address: 00970780 */
/* Ghidra symbol: FUN_00970780 */


longlong FUN_00970780(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0096f6f0(param_1);
  FUN_00414b90(lVar1 + 0x88,*(undefined8 *)(param_1 + 0x88));
  FUN_00414b90(lVar1 + 0x90,*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  FUN_00414b90(lVar1 + 0xb8,*(undefined8 *)(param_1 + 0xb8));
  FUN_00414b90(lVar1 + 0xc0,*(undefined8 *)(param_1 + 0xc0));
  return lVar1;
}

