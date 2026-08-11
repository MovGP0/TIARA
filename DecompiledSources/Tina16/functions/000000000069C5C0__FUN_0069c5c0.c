/* Ghidra address: 0069c5c0 */
/* Ghidra symbol: FUN_0069c5c0 */


void FUN_0069c5c0(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0069c4c0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined4 *)(param_1 + 0x2c));
  }
  iVar1 = *(int *)(param_1 + 0x2c) + 1;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (longlong)iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - iVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

