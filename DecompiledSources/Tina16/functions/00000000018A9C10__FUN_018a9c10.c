/* Ghidra address: 018a9c10 */
/* Ghidra symbol: FUN_018a9c10 */


void FUN_018a9c10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *(undefined8 *)(lVar1 + 0x158) = *param_2;
  *(undefined8 *)(lVar1 + 0x160) = param_2[1];
  return;
}

