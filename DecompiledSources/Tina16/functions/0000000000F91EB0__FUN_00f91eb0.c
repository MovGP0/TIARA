/* Ghidra address: 00f91eb0 */
/* Ghidra symbol: FUN_00f91eb0 */


void FUN_00f91eb0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_00f91e80(param_1,*(undefined4 *)(PTR_DAT_02002068 + 4));
  if (cVar1 != '\0') {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0xb8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0xd0));
  }
  return;
}

