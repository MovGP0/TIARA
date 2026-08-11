/* Ghidra address: 00f5df90 */
/* Ghidra symbol: FUN_00f5df90 */


void FUN_00f5df90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  *(bool *)param_3 = *(char *)(lVar1 + 0x508) == '\0';
  *(undefined1 *)(lVar1 + 0x508) = 0;
  return;
}

