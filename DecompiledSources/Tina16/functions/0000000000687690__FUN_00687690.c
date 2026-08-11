/* Ghidra address: 00687690 */
/* Ghidra symbol: FUN_00687690 */


undefined8 FUN_00687690(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_005b4b30(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x260))(*(longlong **)(param_1 + 0x30))
     , cVar1 == *(char *)(*(longlong *)(param_1 + 0x18) + 0xd8))) {
    return 1;
  }
  return 0;
}

