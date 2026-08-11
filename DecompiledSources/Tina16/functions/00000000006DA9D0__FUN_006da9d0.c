/* Ghidra address: 006da9d0 */
/* Ghidra symbol: FUN_006da9d0 */


void FUN_006da9d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  FUN_0065aec0(param_1,param_2,param_3);
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar4);
      lVar3 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar4);
      uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar3 + 0x20),param_2,param_3);
      FUN_006da1a0(uVar2,uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

