/* Ghidra address: 00f2e590 */
/* Ghidra symbol: FUN_00f2e590 */


void FUN_00f2e590(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  
  FUN_00414740(param_2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    FUN_00f2e480(auStack_38);
  }
  return;
}

