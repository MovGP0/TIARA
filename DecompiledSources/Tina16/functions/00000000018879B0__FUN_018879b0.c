/* Ghidra address: 018879b0 */
/* Ghidra symbol: FUN_018879b0 */


void FUN_018879b0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_01888b80(*(undefined8 *)(param_1 + 8),param_2 + -1);
  *(undefined4 *)(lVar1 + 0xc) = param_3;
  *(undefined4 *)(lVar1 + 0x10) = param_4;
  return;
}

