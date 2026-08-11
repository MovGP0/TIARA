/* Ghidra address: 00f8da50 */
/* Ghidra symbol: FUN_00f8da50 */


void FUN_00f8da50(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_00f8d350(param_1);
  if (*(char *)(param_1 + 0x3473) != '\0') {
    uVar1 = FUN_00f8ed10(param_1,*(undefined8 *)(param_1 + 0x3440));
    *(undefined4 *)(param_1 + 0x3464) = uVar1;
    FUN_00f8d0e0(param_1,0);
    FUN_00f8d2f0(param_1,1);
  }
  return;
}

