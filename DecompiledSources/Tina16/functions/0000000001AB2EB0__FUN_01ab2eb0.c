/* Ghidra address: 01ab2eb0 */
/* Ghidra symbol: FUN_01ab2eb0 */


undefined8 FUN_01ab2eb0(longlong param_1)

{
  char cVar1;
  
  if ((((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x12) != '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x18) != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x58))
                        (*(longlong **)(param_1 + 0x100)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

