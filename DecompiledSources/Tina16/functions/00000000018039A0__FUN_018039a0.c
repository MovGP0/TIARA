/* Ghidra address: 018039a0 */
/* Ghidra symbol: FUN_018039a0 */


void FUN_018039a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    while (0 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x10)) {
      uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x48),0);
      FUN_00410f20(uVar1);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

