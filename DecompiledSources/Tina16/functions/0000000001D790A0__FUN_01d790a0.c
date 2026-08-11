/* Ghidra address: 01d790a0 */
/* Ghidra symbol: FUN_01d790a0 */


undefined8 FUN_01d790a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01d78fa0(param_1,param_2);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x80));
  }
  return param_2;
}

