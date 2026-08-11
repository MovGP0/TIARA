/* Ghidra address: 0064b720 */
/* Ghidra symbol: FUN_0064b720 */


undefined8 FUN_0064b720(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_005b4b60(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))(*(longlong **)(param_1 + 0x20)),
     cVar1 == *(char *)(*(longlong *)(param_1 + 0x18) + 0xd9))) {
    return 1;
  }
  return 0;
}

