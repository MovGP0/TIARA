/* Ghidra address: 004d4af0 */
/* Ghidra symbol: FUN_004d4af0 */


undefined8 FUN_004d4af0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))(*(longlong **)(param_1 + 0x18));
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

