/* Ghidra address: 01ab6f60 */
/* Ghidra symbol: FUN_01ab6f60 */


undefined8 FUN_01ab6f60(longlong param_1)

{
  char cVar1;
  
  if ((((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x12) != '\0')) &&
      ((*(longlong *)(param_1 + 0x98) == 0 ||
       (*(char *)(*(longlong *)(param_1 + 0x98) + 0x18) != '\0')))) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x58))(*(longlong **)(param_1 + 0xf0)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

