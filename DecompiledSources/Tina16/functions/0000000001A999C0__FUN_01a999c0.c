/* Ghidra address: 01a999c0 */
/* Ghidra symbol: FUN_01a999c0 */


void FUN_01a999c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((DAT_01fcd6d1 != '\0') && (*(char *)(param_1 + 0x12e) == '\0')) &&
     (*(char *)(param_1 + 0x12f) == '\0')) {
    param_2 = 0xffffff;
  }
  *(undefined4 *)(param_1 + 0x90) = param_2;
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_0412d81c(param_2);
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),uVar1);
  }
  return;
}

