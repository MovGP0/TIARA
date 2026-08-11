/* Ghidra address: 010878b0 */
/* Ghidra symbol: FUN_010878b0 */


void FUN_010878b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x4c36) == '\0') {
    FUN_01087780(param_1);
    FUN_015fa560();
    uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
    thunk_FUN_041b2403(uVar1,0x123d,0,0);
  }
  if (*(char *)(param_1 + 0x4c34) == '\0') {
    *(undefined1 *)(param_1 + 0xb55) = 0;
  }
  return;
}

