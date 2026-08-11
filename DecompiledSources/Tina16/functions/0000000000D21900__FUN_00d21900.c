/* Ghidra address: 00d21900 */
/* Ghidra symbol: FUN_00d21900 */


void FUN_00d21900(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cd7340(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 0x44));
  if (iVar1 != 0) {
    FUN_00409a70(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
                 (longlong)*(int *)(param_1 + 0x44));
    FUN_00409a70(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                 (longlong)*(int *)(param_1 + 0x44));
  }
  return;
}

