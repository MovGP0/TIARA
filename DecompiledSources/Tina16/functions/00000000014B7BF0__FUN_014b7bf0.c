/* Ghidra address: 014b7bf0 */
/* Ghidra symbol: FUN_014b7bf0 */


void FUN_014b7bf0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *PTR_DAT_020032a8 = cVar1 == '\0';
  return;
}

