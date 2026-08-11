/* Ghidra address: 017bae90 */
/* Ghidra symbol: FUN_017bae90 */


undefined8 FUN_017bae90(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((undefined **)*param_1 == &PTR_FUN_010b5580) || ((undefined **)*param_1 == &PTR_FUN_017b8848)
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
  }
  return uVar1;
}

