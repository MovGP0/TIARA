/* Ghidra address: 010ef870 */
/* Ghidra symbol: FUN_010ef870 */


void FUN_010ef870(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}

