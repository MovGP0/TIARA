/* Ghidra address: 00bd42b0 */
/* Ghidra symbol: FUN_00bd42b0 */


void FUN_00bd42b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = FUN_00bd38f0();
    FUN_00bd39b0(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

