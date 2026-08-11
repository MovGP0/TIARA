/* Ghidra address: 00bd4070 */
/* Ghidra symbol: FUN_00bd4070 */


void FUN_00bd4070(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar1 = FUN_00bd38f0();
    FUN_00bd3b50(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

