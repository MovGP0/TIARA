/* Ghidra address: 01bd5d50 */
/* Ghidra symbol: FUN_01bd5d50 */


void FUN_01bd5d50(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x558) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x558) + -8);
  }
  uVar7 = lVar5 - 1;
  uVar4 = FUN_01c019a0(param_1);
  lVar5 = FUN_01bfb960(uVar4,uVar7 & 0xffffffff);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x558) + (longlong)(int)uVar7 * 4);
  iVar2 = *(int *)(*(longlong *)(lVar5 + 0x80) + 0x9c);
  while( true ) {
    iVar3 = FUN_0064d120(param_1);
    iVar6 = (int)uVar7;
    if (iVar3 <= (iVar1 + iVar2) - *(int *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar6 * 4))
    break;
    uVar7 = (ulonglong)(iVar6 - 1);
  }
  FUN_01bd6080(param_1,iVar6 + 1);
  return;
}

