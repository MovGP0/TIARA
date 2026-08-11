/* Ghidra address: 01125510 */
/* Ghidra symbol: FUN_01125510 */


bool FUN_01125510(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x260))(*(longlong **)(param_1 + 0x8d8));
  return cVar1 != '\0';
}

