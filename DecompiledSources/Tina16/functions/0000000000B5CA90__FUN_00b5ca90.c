/* Ghidra address: 00b5ca90 */
/* Ghidra symbol: FUN_00b5ca90 */


undefined8 FUN_00b5ca90(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  uVar1 = FUN_00b5c270(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x78) >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x78) + 0x10) == 0x3c);
  }
  return uVar1;
}

