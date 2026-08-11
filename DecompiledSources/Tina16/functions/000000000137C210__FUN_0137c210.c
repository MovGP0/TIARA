/* Ghidra address: 0137c210 */
/* Ghidra symbol: FUN_0137c210 */


undefined8 FUN_0137c210(longlong param_1,byte *param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0xd8 + (ulonglong)*param_2 * 8);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xd8 + (ulonglong)*(byte *)(param_1 + 0xcd) * 8);
    *param_2 = *(byte *)(param_1 + 0xcd);
  }
  return uVar1;
}

