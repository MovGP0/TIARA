/* Ghidra address: 01d2b120 */
/* Ghidra symbol: FUN_01d2b120 */


void FUN_01d2b120(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  return;
}

