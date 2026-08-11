/* Ghidra address: 01ace140 */
/* Ghidra symbol: FUN_01ace140 */


void FUN_01ace140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  return;
}

