/* Ghidra address: 0187a610 */
/* Ghidra symbol: FUN_0187a610 */


undefined8 FUN_0187a610(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_01879fc0(param_1,iVar4);
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        uVar3 = 1;
        lVar1 = FUN_01879fc0(param_1,iVar4);
        *(undefined4 *)(lVar1 + 0x100) = param_4;
        uVar2 = FUN_01879fc0(param_1,iVar4);
        FUN_01878db0(uVar2,param_3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3;
}

