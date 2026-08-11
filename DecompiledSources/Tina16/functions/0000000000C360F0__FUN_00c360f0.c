/* Ghidra address: 00c360f0 */
/* Ghidra symbol: FUN_00c360f0 */


undefined8 FUN_00c360f0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x4a) == '\x01') ||
     ((*(char *)(param_1 + 0x4a) == '\x02' && (DAT_01e9f544 != '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

