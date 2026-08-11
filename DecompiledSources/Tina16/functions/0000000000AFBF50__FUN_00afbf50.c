/* Ghidra address: 00afbf50 */
/* Ghidra symbol: FUN_00afbf50 */


void FUN_00afbf50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar2 + 0x158) = *param_2;
  *(undefined8 *)(lVar2 + 0x160) = uVar1;
  return;
}

