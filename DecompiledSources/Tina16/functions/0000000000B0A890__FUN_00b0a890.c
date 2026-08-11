/* Ghidra address: 00b0a890 */
/* Ghidra symbol: FUN_00b0a890 */


undefined4 FUN_00b0a890(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  lVar2 = FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  if (lVar2 != 0) {
    uVar1 = FUN_00b0a150(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  }
  return uVar1;
}

