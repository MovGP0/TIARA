/* Ghidra address: 00557be0 */
/* Ghidra symbol: FUN_00557be0 */


undefined8 FUN_00557be0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x20))(param_1), cVar1 == '\x03')) {
    return 1;
  }
  return 0;
}

