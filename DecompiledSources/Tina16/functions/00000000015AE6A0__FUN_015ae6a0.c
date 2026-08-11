/* Ghidra address: 015ae6a0 */
/* Ghidra symbol: FUN_015ae6a0 */


void FUN_015ae6a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_015ab4e0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 0x44));
  if (iVar1 != 0) {
    FUN_00409a70(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
                 (longlong)*(int *)(param_1 + 0x44));
    FUN_00409a70(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                 (longlong)*(int *)(param_1 + 0x44));
  }
  return;
}

