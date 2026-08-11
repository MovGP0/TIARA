/* Ghidra address: 00c7b3a0 */
/* Ghidra symbol: FUN_00c7b3a0 */


void FUN_00c7b3a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x2b8) = *param_2;
  *(undefined8 *)(param_1 + 0x2c0) = uVar1;
  return;
}

