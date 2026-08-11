/* Ghidra address: 01d2b020 */
/* Ghidra symbol: FUN_01d2b020 */


undefined8 FUN_01d2b020(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)((longlong)param_1 + 0x11) != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x60))(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

