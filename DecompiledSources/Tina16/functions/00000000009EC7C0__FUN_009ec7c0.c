/* Ghidra address: 009ec7c0 */
/* Ghidra symbol: FUN_009ec7c0 */


undefined8 FUN_009ec7c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
  }
  return uVar1;
}

