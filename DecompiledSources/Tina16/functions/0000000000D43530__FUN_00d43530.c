/* Ghidra address: 00d43530 */
/* Ghidra symbol: FUN_00d43530 */


undefined8 FUN_00d43530(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00787ad0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    FUN_004238d0(param_2,2,2,2,2);
  }
  return param_2;
}

