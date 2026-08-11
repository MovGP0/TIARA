/* Ghidra address: 00f5f2b0 */
/* Ghidra symbol: FUN_00f5f2b0 */


void FUN_00f5f2b0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  if ((*(char *)(lVar1 + 0x540) == '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  *(undefined1 *)(lVar1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x778) = 0;
  return;
}

