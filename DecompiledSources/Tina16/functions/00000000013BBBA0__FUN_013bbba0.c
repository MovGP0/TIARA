/* Ghidra address: 013bbba0 */
/* Ghidra symbol: FUN_013bbba0 */


undefined4 FUN_013bbba0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_013ba690(param_1);
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_013bd170(param_1);
  }
  FUN_017ea2d0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc0),param_2,param_3);
  return uVar1;
}

