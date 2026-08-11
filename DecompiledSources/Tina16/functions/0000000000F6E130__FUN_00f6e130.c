/* Ghidra address: 00f6e130 */
/* Ghidra symbol: FUN_00f6e130 */


void FUN_00f6e130(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004095c0((longlong)(param_2 * 8));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_004095c0((longlong)(param_2 * 8));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

