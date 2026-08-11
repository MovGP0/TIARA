/* Ghidra address: 00afbfd0 */
/* Ghidra symbol: FUN_00afbfd0 */


void FUN_00afbfd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77990(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0xf8) = *param_2;
  *(undefined8 *)(lVar1 + 0x100) = param_2[1];
  return;
}

