/* Ghidra address: 019776f0 */
/* Ghidra symbol: FUN_019776f0 */


undefined8 FUN_019776f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 4) == 0) || (*(char *)(param_1 + 0x271) != '\0')) {
    uVar1 = *(undefined8 *)(param_1 + 0x260);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x268);
  }
  return uVar1;
}

