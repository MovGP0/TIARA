/* Ghidra address: 005009e0 */
/* Ghidra symbol: FUN_005009e0 */


void FUN_005009e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00500990();
  return;
}

