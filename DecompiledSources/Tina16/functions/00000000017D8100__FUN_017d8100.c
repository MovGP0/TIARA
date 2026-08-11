/* Ghidra address: 017d8100 */
/* Ghidra symbol: FUN_017d8100 */


void FUN_017d8100(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_2;
  lVar2 = (longlong)param_3;
  FUN_017d7270(*(longlong *)(param_1 + 0x28) + lVar1 * 0x18,
               *(longlong *)(param_1 + 0x28) + lVar2 * 0x18,0x18);
  FUN_017d7270(*(longlong *)(param_1 + 0x80) + lVar1 * 2,*(longlong *)(param_1 + 0x80) + lVar2 * 2,2
              );
  FUN_017d7270(*(longlong *)(param_1 + 0x78) +
               (longlong)*(short *)(*(longlong *)(param_1 + 0x80) + lVar1 * 2) * 2,
               *(longlong *)(param_1 + 0x78) +
               (longlong)*(short *)(*(longlong *)(param_1 + 0x80) + lVar2 * 2) * 2,2);
  FUN_017d7f30(param_1,param_2,param_3);
  return;
}

