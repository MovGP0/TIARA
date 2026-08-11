/* Ghidra address: 014f4e30 */
/* Ghidra symbol: FUN_014f4e30 */


void FUN_014f4e30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  *(bool *)param_3 = *(char *)(lVar1 + 0x538) == '\0';
  *(undefined1 *)(lVar1 + 0x538) = 0;
  return;
}

