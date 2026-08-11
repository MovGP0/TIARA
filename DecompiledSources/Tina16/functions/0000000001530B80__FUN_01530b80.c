/* Ghidra address: 01530b80 */
/* Ghidra symbol: FUN_01530b80 */


undefined8 FUN_01530b80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x8a0) + 0x80) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4a0);
  }
  return uVar1;
}

