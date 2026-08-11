/* Ghidra address: 010c8b70 */
/* Ghidra symbol: FUN_010c8b70 */


void FUN_010c8b70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_010c8fd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

