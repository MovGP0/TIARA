/* Ghidra address: 01542670 */
/* Ghidra symbol: FUN_01542670 */


undefined8 FUN_01542670(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 != '\x04') {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01d3ffd0((short)uVar2);
  if ((((cVar1 == '\0') || (cVar1 = FUN_01d05040(param_1), cVar1 != '\0')) ||
      (cVar1 = FUN_01d3f210(param_1), cVar1 != '\0')) && ((uVar2 & 0xffff) < 0x80000000)) {
    return 0;
  }
  return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
}

