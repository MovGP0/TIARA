/* Ghidra address: 00a7c960 */
/* Ghidra symbol: FUN_00a7c960 */


undefined8 FUN_00a7c960(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 8) + 0x39) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),1);
  }
  return uVar1;
}

