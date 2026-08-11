/* Ghidra address: 012b3270 */
/* Ghidra symbol: FUN_012b3270 */


void FUN_012b3270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  *(bool *)param_3 = *(char *)(lVar1 + 0x5a8) == '\0';
  *(undefined1 *)(lVar1 + 0x5a8) = 0;
  return;
}

