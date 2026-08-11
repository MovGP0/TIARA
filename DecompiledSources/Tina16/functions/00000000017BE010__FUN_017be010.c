/* Ghidra address: 017be010 */
/* Ghidra symbol: FUN_017be010 */


void FUN_017be010(longlong param_1,longlong param_2)

{
  FUN_01cf0770(param_1,param_2);
  FUN_00414ad0(param_2 + 0x98,*(undefined8 *)(param_1 + 0x98));
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined1 *)(param_2 + 0xa8) = *(undefined1 *)(param_1 + 0xa8);
  return;
}

