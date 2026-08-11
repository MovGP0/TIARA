/* Ghidra address: 00afbe50 */
/* Ghidra symbol: FUN_00afbe50 */


void FUN_00afbe50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a777a0(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 200) = *param_2;
  *(undefined8 *)(lVar1 + 0xd0) = param_2[1];
  return;
}

