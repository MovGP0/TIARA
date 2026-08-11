/* Ghidra address: 004da4e0 */
/* Ghidra symbol: FUN_004da4e0 */


undefined8 FUN_004da4e0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

