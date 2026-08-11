/* Ghidra address: 01950810 */
/* Ghidra symbol: FUN_01950810 */


undefined8 FUN_01950810(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xc0) == '\0') && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

