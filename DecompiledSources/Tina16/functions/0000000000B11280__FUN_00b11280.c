/* Ghidra address: 00b11280 */
/* Ghidra symbol: FUN_00b11280 */


void FUN_00b11280(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  *(undefined8 *)(lVar1 + 0x50) = *param_2;
  *(undefined8 *)(lVar1 + 0x58) = param_2[1];
  return;
}

