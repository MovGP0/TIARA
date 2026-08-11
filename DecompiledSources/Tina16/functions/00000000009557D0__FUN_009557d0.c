/* Ghidra address: 009557d0 */
/* Ghidra symbol: FUN_009557d0 */


undefined8 FUN_009557d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_008fa7e0(*(undefined8 *)(param_1 + 0x98));
  if (cVar1 == '\0') {
    FUN_00414520(param_2);
  }
  else {
    FUN_00414b90(param_2,*(undefined8 *)(param_1 + 0x98));
  }
  return param_2;
}

