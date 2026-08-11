/* Ghidra address: 00809600 */
/* Ghidra symbol: FUN_00809600 */


void FUN_00809600(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_00410f20(uVar1);
  return;
}

