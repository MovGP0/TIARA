/* Ghidra address: 014fb230 */
/* Ghidra symbol: FUN_014fb230 */


void FUN_014fb230(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_1c [12];
  
  FUN_01aa18d0(param_1 + 0x568,3,local_1c);
  FUN_01d04b50(*(undefined8 *)(param_1 + 0x550),local_1c);
  if (*PTR_DAT_020035d0 != '\0') {
    uVar1 = FUN_019a45d0();
    uVar1 = FUN_0198d430(uVar1);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar1);
  }
  return;
}

