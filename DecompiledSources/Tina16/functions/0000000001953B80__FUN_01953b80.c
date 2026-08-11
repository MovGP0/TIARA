/* Ghidra address: 01953b80 */
/* Ghidra symbol: FUN_01953b80 */


undefined8 FUN_01953b80(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x20) == 0) && (*(char *)(param_1 + 0x108) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(byte)(*(ushort *)(param_1 + 0x34) >> 8),1);
  }
  return uVar1;
}

