/* Ghidra address: 00c245d0 */
/* Ghidra symbol: FUN_00c245d0 */


undefined8 FUN_00c245d0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x14) == '\0') &&
     (*(char *)(param_1 + 0x16) == '\0')) {
    uVar1 = FUN_00c1a7c0();
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),2);
  }
  return uVar1;
}

