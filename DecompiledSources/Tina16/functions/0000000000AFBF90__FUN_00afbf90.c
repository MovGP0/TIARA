/* Ghidra address: 00afbf90 */
/* Ghidra symbol: FUN_00afbf90 */


void FUN_00afbf90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77970(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0xe8) = *param_2;
  *(undefined8 *)(lVar1 + 0xf0) = param_2[1];
  return;
}

