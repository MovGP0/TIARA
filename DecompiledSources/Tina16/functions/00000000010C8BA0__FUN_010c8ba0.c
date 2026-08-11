/* Ghidra address: 010c8ba0 */
/* Ghidra symbol: FUN_010c8ba0 */


void FUN_010c8ba0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_010c8fe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

