/* Ghidra address: 00803c10 */
/* Ghidra symbol: FUN_00803c10 */


undefined8 FUN_00803c10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_2 + 0x298) == '\x01') && (*(int *)(param_2 + 0x2a8) != 0)) {
    uVar1 = 1;
  }
  else if ((*(char *)(param_2 + 0x298) == '\0') && (*(longlong *)(param_2 + 0x2a0) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

