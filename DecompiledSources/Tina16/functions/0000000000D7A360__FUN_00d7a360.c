/* Ghidra address: 00d7a360 */
/* Ghidra symbol: FUN_00d7a360 */


undefined8 FUN_00d7a360(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x99) == '\x05') || (*(char *)(param_1 + 0x99) == '\a')) {
    uVar1 = *(undefined8 *)(param_1 + 0x138);
  }
  else {
    uVar1 = FUN_00d77210();
  }
  return uVar1;
}

