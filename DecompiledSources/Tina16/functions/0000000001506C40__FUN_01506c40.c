/* Ghidra address: 01506c40 */
/* Ghidra symbol: FUN_01506c40 */


void FUN_01506c40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 0xc50);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0xc58);
  return;
}

