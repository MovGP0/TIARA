/* Ghidra address: 00bd40a0 */
/* Ghidra symbol: FUN_00bd40a0 */


void FUN_00bd40a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_00bd38f0();
    if (*(char *)(param_1 + 0x20) != '\0') {
      FUN_00bd3b50(uVar1,*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    FUN_00bd3d20(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

