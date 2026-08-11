/* Ghidra address: 010ae940 */
/* Ghidra symbol: FUN_010ae940 */


undefined8 FUN_010ae940(longlong param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    FUN_00414ad0(param_2,&LAB_010ae998);
  }
  else {
    FUN_00414ad0(param_2,&DAT_010ae988);
  }
  return param_2;
}

