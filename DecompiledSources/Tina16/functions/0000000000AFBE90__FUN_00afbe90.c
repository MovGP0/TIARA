/* Ghidra address: 00afbe90 */
/* Ghidra symbol: FUN_00afbe90 */


void FUN_00afbe90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a777c0(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0xd8) = *param_2;
  *(undefined8 *)(lVar1 + 0xe0) = param_2[1];
  return;
}

