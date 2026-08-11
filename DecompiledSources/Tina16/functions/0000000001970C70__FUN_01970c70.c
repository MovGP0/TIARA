/* Ghidra address: 01970c70 */
/* Ghidra symbol: FUN_01970c70 */


void FUN_01970c70(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00414ad0(param_1 + 0x168);
  uVar1 = FUN_01953bb0(param_1,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  return;
}

