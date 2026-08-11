/* Ghidra address: 01c75250 */
/* Ghidra symbol: FUN_01c75250 */


void FUN_01c75250(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar2 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar2 != 0) {
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98060(uVar3,&local_38);
      iVar4 = local_30 - local_38;
      iVar5 = local_2c - local_34;
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98210(uVar3,&local_38);
      local_38 = ((local_30 + local_38) - iVar4) / 2;
      uVar1 = (longlong)((local_2c + local_34) - iVar5) / 2;
      local_34 = (int)uVar1;
      FUN_01c750d0(param_1,local_38,uVar1 & 0xffffffff,local_38 + iVar4,local_34 + iVar5);
    }
  }
  return;
}

