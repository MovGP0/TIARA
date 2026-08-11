/* Ghidra address: 00bff8b0 */
/* Ghidra symbol: FUN_00bff8b0 */


undefined8 FUN_00bff8b0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_00bd1a20(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

