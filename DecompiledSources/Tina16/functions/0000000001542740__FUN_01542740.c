/* Ghidra address: 01542740 */
/* Ghidra symbol: FUN_01542740 */


undefined8 FUN_01542740(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01542670(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_015425e0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

