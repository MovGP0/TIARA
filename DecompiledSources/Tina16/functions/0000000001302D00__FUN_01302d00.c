/* Ghidra address: 01302d00 */
/* Ghidra symbol: FUN_01302d00 */


void FUN_01302d00(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_0040c770((double)param_4 / 15.0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x850) + 0x4b0);
  FUN_007fa6c0(lVar1,*(int *)(lVar1 + 0x14) - iVar2);
  return;
}

