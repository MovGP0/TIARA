/* Ghidra address: 00b5ad60 */
/* Ghidra symbol: FUN_00b5ad60 */


void FUN_00b5ad60(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_00b5af20();
  return;
}

