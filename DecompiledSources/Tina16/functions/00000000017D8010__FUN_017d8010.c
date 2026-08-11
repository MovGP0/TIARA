/* Ghidra address: 017d8010 */
/* Ghidra symbol: FUN_017d8010 */


void FUN_017d8010(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_2;
  lVar2 = (longlong)param_3;
  FUN_017d7270(*(longlong *)(param_1 + 0x20) + lVar1 * 0x18,
               *(longlong *)(param_1 + 0x20) + lVar2 * 0x18,0x18);
  FUN_017d7270(*(longlong *)(param_1 + 0x1b8) + lVar1 * 8,*(longlong *)(param_1 + 0x1b8) + lVar2 * 8
               ,8);
  if (*(char *)(param_1 + 0x94) == '\x01') {
    FUN_017d7270(*(longlong *)(param_1 + 0x1c0) + lVar1 * 8,
                 *(longlong *)(param_1 + 0x1c0) + lVar2 * 8,8);
  }
  FUN_017d7270(*(longlong *)(param_1 + 0x70) + lVar1 * 2,*(longlong *)(param_1 + 0x70) + lVar2 * 2,2
              );
  FUN_017d7270(*(longlong *)(param_1 + 0x68) +
               (longlong)*(short *)(*(longlong *)(param_1 + 0x70) + lVar1 * 2) * 2,
               *(longlong *)(param_1 + 0x68) +
               (longlong)*(short *)(*(longlong *)(param_1 + 0x70) + lVar2 * 2) * 2,2);
  FUN_017d7e60(param_1,param_2,param_3);
  return;
}

