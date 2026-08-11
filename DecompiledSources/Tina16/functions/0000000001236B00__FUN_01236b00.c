/* Ghidra address: 01236b00 */
/* Ghidra symbol: FUN_01236b00 */


undefined8 * FUN_01236b00(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1 ^ 0x8000000000000000;
  return param_1;
}

