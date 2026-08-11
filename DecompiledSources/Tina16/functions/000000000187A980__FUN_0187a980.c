/* Ghidra address: 0187a980 */
/* Ghidra symbol: FUN_0187a980 */


void FUN_0187a980(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01879fc0(param_1,iVar3);
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        lVar1 = FUN_01879fc0(param_1,iVar3);
        *(undefined4 *)(lVar1 + 0x100) = param_3;
        uVar2 = FUN_01879fc0(param_1,iVar3);
        FUN_0046f180(&local_40);
        FUN_01878db0(uVar2,&local_40);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00460ba0(&local_40);
  return;
}

