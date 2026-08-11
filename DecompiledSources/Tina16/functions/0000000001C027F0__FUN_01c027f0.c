/* Ghidra address: 01c027f0 */
/* Ghidra symbol: FUN_01c027f0 */


undefined8 FUN_01c027f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    uVar1 = 0;
  }
  else if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(char *)(param_1 + 0x4c1) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(byte)(*(ushort *)(param_1 + 0x34) >> 8),1);
  }
  return uVar1;
}

