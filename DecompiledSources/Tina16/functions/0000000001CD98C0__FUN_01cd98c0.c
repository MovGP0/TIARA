/* Ghidra address: 01cd98c0 */
/* Ghidra symbol: FUN_01cd98c0 */


undefined8 FUN_01cd98c0(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x12) != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))(*(longlong **)(param_1 + 0x60)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

