/* Ghidra address: 0195d040 */
/* Ghidra symbol: FUN_0195d040 */


undefined8 FUN_0195d040(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x1c0) + 0x2c) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x30);
  }
  return uVar1;
}

