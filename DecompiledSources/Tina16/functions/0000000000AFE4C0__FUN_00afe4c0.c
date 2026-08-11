/* Ghidra address: 00afe4c0 */
/* Ghidra symbol: FUN_00afe4c0 */


void FUN_00afe4c0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    uVar1 = FUN_00af5fb0(param_1);
    FUN_00af0c00(param_1,*(undefined8 *)(param_1 + 0x8b8),*(undefined1 *)(param_1 + 0x8c0));
    FUN_00af6000(param_1,uVar1);
  }
  return;
}

