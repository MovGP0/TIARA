/* Ghidra address: 004be2f0 */
/* Ghidra symbol: FUN_004be2f0 */


void FUN_004be2f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  lVar3 = (longlong)param_2;
  if ((longlong)uVar1 < lVar3) {
    FUN_004bec80(param_1,uVar1 & 0xffffffff,1);
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    if (lVar2 < lVar3) {
      FUN_00419260(param_1 + 0x10,&DAT_00406578,1,(longlong)param_2);
      FUN_004bec80(param_1,*(undefined4 *)(param_1 + 0x28),0);
    }
    if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) < lVar3) {
      FUN_004b6d70();
    }
  }
  return;
}

