/* Ghidra address: 018a9140 */
/* Ghidra symbol: FUN_018a9140 */


void FUN_018a9140(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *(undefined8 *)(lVar1 + 0x4c0) = *param_2;
  *(undefined8 *)(lVar1 + 0x4c8) = param_2[1];
  return;
}

