/* Ghidra address: 00a08d90 */
/* Ghidra symbol: FUN_00a08d90 */


void FUN_00a08d90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00a08e00(*(undefined8 *)(param_1 + 0xb8));
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(lVar1 + 0x1c);
  return;
}

