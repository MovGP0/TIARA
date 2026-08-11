/* Ghidra address: 00f089c0 */
/* Ghidra symbol: FUN_00f089c0 */


void FUN_00f089c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  *(bool *)param_3 = *(char *)(lVar1 + 0x540) == '\0';
  *(undefined1 *)(lVar1 + 0x540) = 0;
  return;
}

